<?php

/**
 * Theming function for the admin settings page
 */
function theme_houston_monitor_watchdog_webapp_triggers_fields($form) {
  $header = array(t('Name'), t('Amount'), t('Severity'), t('Type'), t('Period'), t('Enabled'));
  $rows = array();

  $keys = element_children($form);

  foreach ($keys as $key) {
    $row = array();
    $row[] = drupal_render($form[$key]['name']);
    $row[] = drupal_render($form[$key]['amount']);
    $row[] = drupal_render($form[$key]['severity']);
    $row[] = drupal_render($form[$key]['type']);
    $row[] = drupal_render($form[$key]['period']);
    $row[] = drupal_render($form[$key]['wid']);
    $rows[] = $row;
  }

  $output = theme('table', $header, $rows);
  return $output;
}