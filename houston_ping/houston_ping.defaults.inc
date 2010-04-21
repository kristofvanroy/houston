<?php

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _houston_ping_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer houston ping
  $permissions[] = array(
    'name' => 'administer houston ping',
    'roles' => array(),
  );

  return $permissions;
}
