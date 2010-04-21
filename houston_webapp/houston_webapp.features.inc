<?php

/**
 * Implementation of hook_content_default_fields().
 */
function houston_webapp_content_default_fields() {
  module_load_include('inc', 'houston_webapp', 'houston_webapp.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_webapp_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function houston_webapp_context_default_contexts() {
  module_load_include('inc', 'houston_webapp', 'houston_webapp.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_webapp_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function houston_webapp_ctools_plugin_api() {
  module_load_include('inc', 'houston_webapp', 'houston_webapp.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_webapp_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function houston_webapp_fieldgroup_default_groups() {
  module_load_include('inc', 'houston_webapp', 'houston_webapp.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_webapp_fieldgroup_default_groups', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function houston_webapp_menu_default_items() {
  module_load_include('inc', 'houston_webapp', 'houston_webapp.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_webapp_menu_default_items', $args);
}

/**
 * Implementation of hook_node_info().
 */
function houston_webapp_node_info() {
  module_load_include('inc', 'houston_webapp', 'houston_webapp.features.node');
  $args = func_get_args();
  return call_user_func_array('_houston_webapp_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function houston_webapp_user_default_permissions() {
  module_load_include('inc', 'houston_webapp', 'houston_webapp.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_webapp_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function houston_webapp_strongarm() {
  module_load_include('inc', 'houston_webapp', 'houston_webapp.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_webapp_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function houston_webapp_views_default_views() {
  module_load_include('inc', 'houston_webapp', 'houston_webapp.features.views');
  $args = func_get_args();
  return call_user_func_array('_houston_webapp_views_default_views', $args);
}
