<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _houston_monitor_modules_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'houston-monitor-modules';
  $context->description = '';
  $context->tag = 'Houston';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/modules' => 'node/*/modules',
        'node/*/modules/*' => 'node/*/modules/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'webapplications',
  );
  $context->condition_mode = 0;

  $translatables['houston-monitor-modules'] = array(
    t('Houston'),
  );

  $export['houston-monitor-modules'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'houston-monitor-modules-statistics';
  $context->description = '';
  $context->tag = 'Houston';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'webapp' => 'webapp',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'houston_monitor_modules-monitor-modules-stats' => array(
          'module' => 'houston_monitor_modules',
          'delta' => 'monitor-modules-stats',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['houston-monitor-modules-statistics'] = array(
    t('Houston'),
  );

  $export['houston-monitor-modules-statistics'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _houston_monitor_modules_ctools_plugin_api() {
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
function _houston_monitor_modules_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer monitor modules
  $permissions[] = array(
    'name' => 'administer monitor modules',
    'roles' => array(),
  );

  // Exported permission: view monitor modules
  $permissions[] = array(
    'name' => 'view monitor modules',
    'roles' => array(),
  );

  return $permissions;
}
