<?php

/**
 * Implementation of hook_content_default_fields().
 */
function houston_presales_content_default_fields() {
  module_load_include('inc', 'houston_presales', 'houston_presales.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_presales_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function houston_presales_context_default_contexts() {
  module_load_include('inc', 'houston_presales', 'houston_presales.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_presales_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function houston_presales_ctools_plugin_api() {
  module_load_include('inc', 'houston_presales', 'houston_presales.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_presales_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function houston_presales_fieldgroup_default_groups() {
  module_load_include('inc', 'houston_presales', 'houston_presales.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_presales_fieldgroup_default_groups', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function houston_presales_menu_default_items() {
  module_load_include('inc', 'houston_presales', 'houston_presales.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_presales_menu_default_items', $args);
}

/**
 * Implementation of hook_node_info().
 */
function houston_presales_node_info() {
  module_load_include('inc', 'houston_presales', 'houston_presales.features.node');
  $args = func_get_args();
  return call_user_func_array('_houston_presales_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function houston_presales_strongarm() {
  module_load_include('inc', 'houston_presales', 'houston_presales.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_presales_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function houston_presales_views_default_views() {
  module_load_include('inc', 'houston_presales', 'houston_presales.features.views');
  $args = func_get_args();
  return call_user_func_array('_houston_presales_views_default_views', $args);
}
