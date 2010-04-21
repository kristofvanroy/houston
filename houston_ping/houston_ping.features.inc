<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function houston_ping_user_default_permissions() {
  module_load_include('inc', 'houston_ping', 'houston_ping.defaults');
  $args = func_get_args();
  return call_user_func_array('_houston_ping_user_default_permissions', $args);
}
