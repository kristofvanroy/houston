<?php

function houston_monitor_watchdog_webapp_statistics($webapp) {
  $header = array(
    array('data' => t('Type'), 'field' => 'type'),
    array('data' => t('Count'), 'field' => 'count', 'sort' => 'desc'),
  );

  $sql = "SELECT type, COUNT(*) AS count FROM {houston_monitor_watchdog} WHERE nid = %d GROUP BY type". tablesort_sql($header);

  $result = db_query($sql, $webapp->nid);

  $rows = array();

  while ($watchdog = db_fetch_object($result)) {
    $rows[] = array(
      'data' => array(
        'type' => l($watchdog->type, 'node/' . $webapp->nid . '/watchdog/filter/' . $watchdog->type),
        'count' => $watchdog->count,
      ),
    );
  }

  if (is_array($rows) && count($rows) > 0) {
    $output .= theme('table', $header, $rows);
  }
  else {
    $output = '<div class="view-empty">';
    $output .= t('No statistics available.');
    $output .= '<div class="buttons">';
    $output .= l(t('Fetch watchdog'), 'admin/houston/ping');
    $output .= '</div></div>';
  }

  return $output;
}

function houston_monitor_watchdog_webapp_watchdog($webapp, $type = FALSE) {
  $header = array(
    array('data' => t('wid'), 'field' => 'wid', 'sort' => 'desc'),
    array('data' => t('uid'), 'field' => 'uid'),
    array('data' => t('Type'), 'field' => 'type'),
    array('data' => t('Message'), 'field' => 'message'),
    array('data' => t('Severity'), 'field' => 'severity'),
    array('data' => t('Link'), 'field' => 'link'),
    array('data' => t('Location'), 'field' => 'location'),
    array('data' => t('Referer'), 'field' => 'referer'),
    array('data' => t('Hostname'), 'field' => 'hostname'),
    array('data' => t('Date'), 'field' => 'timestamp'),
  );

  if ($type) {
    $sql = "SELECT * FROM {houston_monitor_watchdog} WHERE nid = %d AND type = '%s'". tablesort_sql($header);
    $result = pager_query($sql, 50, 0, NULL, $webapp->nid, $type);
  }
  else {
    $sql = "SELECT * FROM {houston_monitor_watchdog} WHERE nid = %d". tablesort_sql($header);
    $result = pager_query($sql, 50, 0, NULL, $webapp->nid);
  }

  $rows = array();

  while ($watchdog = db_fetch_object($result)) {
    $rows[] = array(
      'data' => array(
        'wid' => $watchdog->wid,
        'uid' => $watchdog->uid,
        'type' => l($watchdog->type, 'node/' . $webapp->nid . '/watchdog/filter/' . $watchdog->type),
        'message' => $watchdog->message,
        'severity' => $watchdog->severity,
        'link' => $watchdog->link,
        'location' => $watchdog->location,
        'referer' => $watchdog->referer,
        'hostname' => $watchdog->hostname,
        'timestamp' => date('d-m-Y H:i:s', $watchdog->timestamp),
      ),
    );
  }

  if (is_array($rows) && count($rows) > 0) {
    $output .= theme('table', $header, $rows);
    $output .= theme('pager', NULL, 50, 0);
  }
  else {
    $output = '<div class="view-empty">';
    $output .= t('No watchdog available.');
    $output .= '<div class="buttons">';
    $output .= l(t('Fetch watchdog'), 'admin/houston/ping');
    $output .= '</div></div>';
  }

  return $output;
}

function houston_monitor_watchdog_webapp_triggers_form($webapp) {
  $form['field_mapping'] = array(
    '#title' => t('Watchdog triggers'),
    '#collapsed' => FALSE,
    '#collapsible' => FALSE,
    '#tree' => TRUE,
    '#theme' => 'houston_monitor_watchdog_webapp_triggers_fields',
  );

  $result = db_query("SELECT t.*, w.wid
  FROM {houston_monitor_watchdog_triggers} t
  LEFT JOIN {houston_monitor_watchdog_triggers_webapp} w ON w.tid = t.tid AND w.wid = %d", arg(1));

  $fetched = FALSE;

  while ($row = db_fetch_object($result)) {
    $form['field_mapping'][$row->tid]['name'] = array('#value' => $row->name);
    $form['field_mapping'][$row->tid]['amount'] = array('#value' => $row->amount);
    $form['field_mapping'][$row->tid]['severity'] = array('#value' => $row->severity);
    $form['field_mapping'][$row->tid]['type'] = array('#value' => $row->type);
    $form['field_mapping'][$row->tid]['period'] = array('#value' => $row->period);
    $form['field_mapping'][$row->tid]['wid'] = array(
     '#type' => 'checkbox',
     '#default_value' => $row->wid > 0 ? TRUE : FALSE,
    );
    $fetched = TRUE;
  }

  $form['submit'] = array('#type' => 'submit', '#value' => t('Save'));

  if ($fetched === FALSE) {
    $form = array();

    $output = '<div class="view-empty">';
    $output .= t('No triggers available.');
    $output .= '<div class="buttons">';
    $output .= l(t('Add a trigger'), 'admin/houston/monitor/watchdog/triggers/add');
    $output .= '</div></div>';

    $form['value'] = array(
      '#type' => 'markup',
      '#value' => $output
    );

  }

  return $form;
}

function houston_monitor_watchdog_webapp_triggers_form_submit($form, &$form_state) {
  $values = $form_state['values']['field_mapping'];
  $insert = array();

  if (is_array($values) && count($values) > 0) {
    foreach ($values as $tid => $trigger) {
      if ($trigger['wid'] == 1) {
        $insert[] = $tid;
      }
    }

    db_query("DELETE FROM {houston_monitor_watchdog_triggers_webapp} WHERE wid = %d", arg(1));

    if (is_array($insert) && count($insert) > 0) {
      foreach ($insert as $tid) {
        db_query("INSERT INTO {houston_monitor_watchdog_triggers_webapp} SET wid = %d, tid = %d", array(arg(1), $tid));
      }
    }

    drupal_set_message('The triggers were saved successfully.');
  }
}
