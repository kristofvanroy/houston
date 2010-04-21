<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _houston_monitor_watchdog_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'houston-monitor-watchdog';
  $context->description = '';
  $context->tag = 'Houston';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/watchdog' => 'node/*/watchdog',
        'node/*/watchdog/*' => 'node/*/watchdog/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'webapplications',
  );
  $context->condition_mode = 0;

  $translatables['houston-monitor-watchdog'] = array(
    t('Houston'),
  );

  $export['houston-monitor-watchdog'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _houston_monitor_watchdog_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _houston_monitor_watchdog_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer monitor watchdog
  $permissions[] = array(
    'name' => 'administer monitor watchdog',
    'roles' => array(),
  );

  // Exported permission: view monitor watchdog
  $permissions[] = array(
    'name' => 'view monitor watchdog',
    'roles' => array(),
  );

  return $permissions;
}
