<?php

function houston_monitor_watchdog_dashboard() {
  $content = array(
    array(
      'title' => 'Watchdog settings',
      'description' => 'Watchdog settings',
      'href' => 'admin/houston/monitor/watchdog/settings',
    ),
    array(
      'title' => 'Watchdog triggers',
      'description' => 'Watchdog triggers',
      'href' => 'admin/houston/monitor/watchdog/triggers',
    ),
  );

  $output = theme('admin_block_content', $content);

  return $output;
}

function houston_monitor_watchdog_settings_form() {
  $form['houston_monitor_watchdog_batch_size'] = array(
   '#title' => t('Batch size'),
   '#description' => t('Amount of watchdog records to fetch per api call'),
   '#type' => 'textfield',
   '#default_value' => variable_get('houston_monitor_watchdog_batch_size', 100),
  );

  $form['houston_monitor_watchdog_max_exec'] = array(
   '#title' => t('Maximum pings'),
   '#description' => t('Maximum times Houston can ping in 1 request'),
   '#type' => 'textfield',
   '#default_value' => variable_get('houston_monitor_watchdog_max_exec', 100),
  );

  $form['houston_monitor_watchdog_cron_fetch'] = array(
   '#title' => t('Cron fequency'),
   '#description' => t('frequency of cron to run (in minutes)'),
   '#type' => 'textfield',
   '#default_value' => variable_get('houston_monitor_watchdog_cron_fetch', 10),
  );

  return system_settings_form($form);
}

function houston_monitor_watchdog_triggers_list() {
  $sql = "SELECT t.tid, t.name, t.amount, t.severity, t.type, t.period
          FROM {houston_monitor_watchdog_triggers} t
          ORDER BY t.tid ASC";

  $result = db_query($sql);

  $header = array(t('Name'), t('Amount'), t('Severity'), t('Type'), t('Period'), '');

  while ($trigger = db_fetch_object($result)) {
    $rows[] = array(
      $trigger->name,
      $trigger->amount,
      $trigger->severity,
      $trigger->type,
      $trigger->period,
      l(t('edit'), 'admin/houston/monitor/watchdog/triggers/'. $trigger->tid .'/edit') . ' ' .
      l(t('delete'), 'admin/houston/monitor/watchdog/triggers/'. $trigger->tid .'/delete'),
    );
  }

  $output .= '<h3>'. t('Watchdog triggers') .'</h3>';
  $output .= l(t('Add trigger'), 'admin/houston/monitor/watchdog/triggers/add');
  $output .= theme('table', $header, $rows);

  return $output;
}

function houston_monitor_watchdog_triggers_form($form, $trigger = FALSE) {
  $form = array();
  $severity_levels = array('0' => 0, '1' => 1, '2' => 2, '3' => 3, '4' => 4, '5' => 5);

  if ($trigger && $trigger->tid > 0) {
    $form['tid'] = array('#type' => 'value', '#value' => $trigger->tid);
  }

  $form['name'] = array(
    '#type' => 'textfield',
    '#title' => t('Name'),
    '#description' => t('A human readable name for the trigger.'),
    '#required' => TRUE,
    '#default_value' => $trigger->name,
  );

  $form['amount'] = array(
    '#type' => 'textfield',
    '#title' => t('Amount'),
    '#default_value' => $trigger ? $trigger->amount : 1,
    '#required' => TRUE,
    '#size' => 4,
  );

  $form['severity'] = array(
    '#type' => 'select',
    '#title' => t('Severity'),
    '#options' => $severity_levels,
    '#description' => t('Severity level'),
    '#default_value' => $trigger ? $trigger->severity : 0,
  );

  $form['type'] = array(
    '#type' => 'textfield',
    '#title' => t('Watchdog type'),
    '#required' => TRUE,
    '#description' => t('Type of watchdog log'),
    '#default_value' => $trigger ? $trigger->type : '',
  );

  $form['period'] = array(
    '#type' => 'textfield',
    '#title' => t('Period'),
    '#size' => 4,
    '#default_value' => 0,
    '#description' => t('Period (minutes)'),
    '#default_value' => $trigger ? $trigger->period : 0,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Update'),
  );

  return $form;
}

function houston_monitor_watchdog_triggers_form_validate($form, &$form_state) {
  if (!is_numeric($form_state['values']['amount']) || empty($form_state['values']['amount'])) {
    form_set_error('amount', t('Amount must be larger than 0.'));
  }
}

function houston_monitor_watchdog_triggers_form_submit($form, &$form_state) {
  $form_values = $form_state['values'];

  $trigger->name = $form_values['name'];
  $trigger->amount = $form_values['amount'];
  $trigger->severity = $form_values['severity'];
  $trigger->type = $form_values['type'];
  $trigger->period = $form_values['period'];

  if ($form_values['tid']) {
    $trigger->tid = $form_value['tid'];
    drupal_write_record('houston_monitor_watchdog_triggers', $trigger, 'tid');
    drupal_set_message('The trigger was updated successfully.');
  }
  else {
    drupal_write_record('houston_monitor_watchdog_triggers', $trigger);
    drupal_set_message('The trigger was added successfully.');
  }

  $form_state['redirect'] = 'admin/houston/monitor/watchdog/triggers';
}

function houston_monitor_watchdog_triggers_delete_form($form_state, $trigger) {
  $form = array();
  $form['tid'] = array('#type' => 'value', '#value' => $trigger->tid);

  return confirm_form(
    $form,
    t('Are you sure you want to delete this trigger?'),
    'admin/houston/monitor/watchdog/triggers',
    t('This action cannot be undone.'),
    t('Delete'), t('Cancel')
  );
}

function houston_monitor_watchdog_triggers_delete_form_submit($form, &$form_state) {
  $values = $form_state['values'];

  db_query("DELETE FROM {houston_monitor_watchdog_triggers} WHERE tid = %d", array($values['tid']));
  db_query("DELETE FROM {houston_monitor_watchdog_triggers_webapp} WHERE tid = %d", array($values['tid']));
  drupal_set_message(t('The trigger was deleted successfully.'));

  $form_state['redirect'] = 'admin/houston/monitor/watchdog/triggers';
}