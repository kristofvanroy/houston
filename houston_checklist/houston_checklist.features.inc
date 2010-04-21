<?php

/**
 * Implementation of hook_content_default_fields().
 */
function houston_checklist_content_default_fields() {
  module_load_include('inc', 'houston_checklist', 'houston_checklist.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_checklist_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function houston_checklist_context_default_contexts() {
  module_load_include('inc', 'houston_checklist', 'houston_checklist.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_checklist_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function houston_checklist_ctools_plugin_api() {
  module_load_include('inc', 'houston_checklist', 'houston_checklist.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_checklist_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function houston_checklist_menu_default_items() {
  module_load_include('inc', 'houston_checklist', 'houston_checklist.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_checklist_menu_default_items', $args);
}

/**
 * Implementation of hook_node_info().
 */
function houston_checklist_node_info() {
  module_load_include('inc', 'houston_checklist', 'houston_checklist.features.node');
  $args = func_get_args();
  return call_user_func_array('_houston_checklist_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function houston_checklist_user_default_permissions() {
  module_load_include('inc', 'houston_checklist', 'houston_checklist.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_checklist_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function houston_checklist_strongarm() {
  module_load_include('inc', 'houston_checklist', 'houston_checklist.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_checklist_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function houston_checklist_views_default_views() {
  module_load_include('inc', 'houston_checklist', 'houston_checklist.features.views');
  $args = func_get_args();
  return call_user_func_array('_houston_checklist_views_default_views', $args);
}
