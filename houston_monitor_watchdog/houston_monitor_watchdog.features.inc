<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function houston_monitor_watchdog_context_default_contexts() {
  module_load_include('inc', 'houston_monitor_watchdog', 'houston_monitor_watchdog.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_monitor_watchdog_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function houston_monitor_watchdog_ctools_plugin_api() {
  module_load_include('inc', 'houston_monitor_watchdog', 'houston_monitor_watchdog.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_monitor_watchdog_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function houston_monitor_watchdog_user_default_permissions() {
  module_load_include('inc', 'houston_monitor_watchdog', 'houston_monitor_watchdog.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_monitor_watchdog_user_default_permissions', $args);
}
