<?php

/**
 * Syncronize block
 */
function houston_monitor_modules_sync_block() {
  if (!houston_monitor_modules_block_check()) {
    return;
  }
  else {
    $output = '';

    $output .= '<p>'. t("Syncronizing in this context means that you will ping the production website to send all it's module data back to Houston so that you will have the latest information available in the overview.") .'</p>';
    $output .= drupal_get_form('houston_monitor_modules_sync_form');

    return $output;
  }
}

/**
 * Module overview block
 */
function houston_monitor_modules_overview_block() {
  if (!houston_monitor_modules_block_check()) {
    return;
  }
  else {
    $nid = arg(1);

    $result = db_query("SELECT mid, status, project_type, installed_version FROM {houston_monitor_modules} WHERE nid = %d", $nid);

    $rows = array();

    $num_out_dated = 0;
    $num_up_to_date = 0;
    $num_newer_release = 0;

    while ($rows = db_fetch_object($result)) {
      if ($rows->project_type == 'core') {
        $core = $rows->installed_version;
      }

      switch ($rows->status) {
        // Outdated
        case 0:
          $num_out_dated ++;
        break;

        // Up to date
        case 1:
          $num_up_to_date ++;
        break;

        // Up to date and newer release available
        case 2:
          $num_up_to_date ++;
          $num_newer_release ++;
        break;
      }
    }

    $total = $num_out_dated + $num_up_to_date;

    $rows[] = array('data' => array($core, 'Core'));
    $rows[] = array('data' => array($total, t('modules installed')));
    $rows[] = array('data' => array($num_out_dated, t('module(s) out dated')));
    $rows[] = array('data' => array($num_up_to_date, t('module(s) up to date')));
    $rows[] = array('data' => array($num_newer_release, t('module(s) have new release')));

    return theme('table', $header, $rows);
  }
}

function houston_monitor_modules_block_check() {
  if (arg(0) == 'node' && is_numeric(arg(1))) {
    return TRUE;
  }
  else {
    return FALSE;
  }
}
