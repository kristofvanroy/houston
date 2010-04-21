<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _houston_webapp_node_info() {
  $items = array(
    'webapp' => array(
      'name' => t('Web Application'),
      'module' => 'features',
      'description' => t('A web application with info about ftp accounts, database account, project team, ...'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
