<?php

function houston_ping_dashboard() {
  return '<h3>Houston we have a problem!</h3>';
}

function houston_ping_monitor() {
  return '<h3>Houston, we have a monitor!</h3>';
}

/*
 * Show ping log
 */
function houston_ping_log() {
  $header = array(t('Webapp'), t('Method'), t('Start Date'), t('End Date'), t('Timespan'));
  $sql = "SELECT n.title, l.method, l.date_start, l.date_end
    FROM {houston_ping_log} l
    JOIN {node} n ON n.nid = l.wid AND n.type = 'webapp'
    ORDER BY l.pid DESC";

  $result = pager_query($sql, 30);

  while ($log = db_fetch_object($result)) {
    $rows[] = array(
      $log->title,
      $log->method,
      date('d-m-Y H:i:s', $log->date_start),
      date('d-m-Y H:i:s', $log->date_end),
      $log->date_end - $log->date_start
    );
  }

  return theme('table', $header, $rows) . theme('pager', NULL, 30, 0);
}

/*
 * Delete webapp url
 */
function houston_ping_webapps_delete($form_state, $webapp) {
  $form = array();
  $form['wid'] = array('#type' => 'value', '#value' => $webapp->nid);
  $form['title'] = array('#type' => 'value', '#value' => $webapp->title);

  return confirm_form(
    $form,
    t('Are you sure you want to delete the url for %webapp?',
      array('%webapp' => $webapp->title)
    ),
    'admin/houston/ping/webapps',
    t('This action cannot be undone.'),
    t('Delete'), t('Cancel')
  );
}

/*
 * Submit handler for delete webapp url
 */
function houston_ping_webapps_delete_submit($form, &$form_state) {
  $values =  $form_state['values'];

  db_query("DELETE FROM {houston_ping_webapp} WHERE wid = %d", array($values['wid']));
  drupal_set_message(t('The url for <em>%webapp</em> was deleted successfully.', array('%webapp' => $values['title'])));

  $form_state['redirect'] = 'admin/houston/ping/webapps';
}

/*
 * Edit webapp url
 */
function houston_ping_webapps_edit($form_state, $webapp = FALSE) {
  $form = array();
  $ping_webapp = db_fetch_object(db_query("SELECT url, active FROM {houston_ping_webapp} WHERE wid = %d", $webapp->nid));

  $form['wid'] = array(
   '#type' => 'value',
   '#value' => $webapp->nid,
  );

  $form['url'] = array(
   '#title' => 'Url',
   '#description' => 'http://www.example.com',
   '#type' => 'textfield',
   '#default_value' => $ping_webapp->url,
   '#required' => TRUE,
  );

  $form['active'] = array(
   '#title' => 'Active',
   '#type' => 'checkbox',
   '#default_value' => $ping_webapp->active,
  );

  $form['submit'] = array(
   '#title' => 'Save',
   '#type' => 'submit',
   '#default_value' => 'Save',
  );

  return $form;
}

function houston_ping_generate_key() {
  $charset = "abcdefghijklmnopqrstuvwxyz";
  $charset .= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  $charset .= "0123456789";
  $charset .= "~!@#$%^&*()_+`-={}|\\]?[\":;'><,./";

  for ($i = 0; $i <= 32; $i++) {
    $key .= $charset[(mt_rand(0, (strlen($charset)-1)))];
  }

  return md5($key);
}

/*
 * Submit handler for edit webapp url
 */
function houston_ping_webapps_edit_submit($form, &$form_state) {
  $values = $form_state['values'];

  $key = houston_ping_generate_key();

  $result = db_query("INSERT INTO {houston_ping_webapp}
    SET wid = %d,
      url = '%s',
      `key` = '%s',
      active = %d
    ON DUPLICATE KEY UPDATE
      url = '%s',
      active = %d", $values['wid'], $values['url'], $key, $values['active'], $values['url'], $values['active']);

  if ($result) {
    drupal_set_message('The url was saved successfully.');
    $form_state['redirect'] = 'admin/houston/ping/webapps';
  }
  else {
    drupal_set_message('error', 'Unable to save the url. Please try again.');
  }
}

/*
 * Show all webapps
 */
function houston_ping_webapps() {
  $sql = "SELECT n.nid, n.title, hmw.url, hmw.key, hmw.active
    FROM {node} n
    LEFT JOIN {houston_ping_webapp} hmw ON hmw.wid = n.nid
    WHERE n.type = 'webapp' AND n.status = 1
    ORDER BY n.title ASC";

  $result = pager_query($sql, 30);

  $header = array(t('Webapp'), t('url'), t('Key'), t('Ping'), '');
  $rows = array();

  $ping_methods = array();

  $ping_methods = module_invoke_all('ping_method', $ping_methods);

  while ($webapp = db_fetch_object($result)) {
    $edit_link = l(t('edit'), 'admin/houston/ping/webapps/' . $webapp->nid . '/edit');
    $delete_link = empty($webapp->url) ? '' : ' | ' . l(t('delete'), 'admin/houston/ping/webapps/' . $webapp->nid . '/delete');
    $active = FALSE;
    $ping_link = FALSE;

    if ($webapp->active === "0") {
      $active = ' <em>('. t('disabled') .')</em>';
    }
    elseif ($webapp->active === "1") {
      foreach ($ping_methods as $method) {
        $ping_link .= empty($webapp->url) ? '' : ' ' . l($method['title'], str_replace('/%webapp', '/' . $webapp->nid, $method['url']));
      }

      trim($ping_link);
    }

    $title = empty($webapp->url) ? l($webapp->title, 'node/'. $webapp->nid) : '<strong>'. l($webapp->title, 'node/'. $webapp->nid) .'</strong>' . $active;

    $rows[] = array(
      $title,
      $webapp->url,
      $webapp->key,
      $ping_link,
      $edit_link . $delete_link
    );
  }

  return theme_table($header, $rows) . theme('pager', NULL, 30, 0);
}
