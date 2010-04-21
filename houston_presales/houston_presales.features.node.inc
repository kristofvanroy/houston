<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _houston_presales_node_info() {
  $items = array(
    'presale' => array(
      'name' => t('Presale'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
