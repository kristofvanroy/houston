<?php

/**
 * Implementation of hook_content_default_fields().
 */
function houston_subversion_content_default_fields() {
  module_load_include('inc', 'houston_subversion', 'houston_subversion.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_subversion_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function houston_subversion_context_default_contexts() {
  module_load_include('inc', 'houston_subversion', 'houston_subversion.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_subversion_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function houston_subversion_ctools_plugin_api() {
  module_load_include('inc', 'houston_subversion', 'houston_subversion.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_subversion_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function houston_subversion_user_default_permissions() {
  module_load_include('inc', 'houston_subversion', 'houston_subversion.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_subversion_user_default_permissions', $args);
}
