<?php
/*
 * Todo
 * - fetch api_key
 * - validate api_key
 */

/**
 * Syncronize block form
 */
function houston_monitor_modules_sync_form() {
  $form = array();

  // @todo fetch $api_key from node
  $form['api_key'] = array(
    '#type' => 'hidden',
    '#value' => $api_key
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Resyncronize')
  );

  return $form;
}
/**
 * Syncornize block form submit handler
 */
function houston_monitor_modules_sync_form_validate(&$form, &$form_state) {
  // TODO: validate hidden api_key for security
}

/**
 * Syncornize block form submit handler
 */
function houston_monitor_modules_sync_form_submit(&$form, &$form_state) {

  // Ping object
  $ping->url      = 'http://localhost/drupal613/xmlrpc.php';
  $ping->method   = 'houston_connect.ping_modules';
  $ping->type     = 'modules';

  // Ping module
  houston_go_ping($ping);
}