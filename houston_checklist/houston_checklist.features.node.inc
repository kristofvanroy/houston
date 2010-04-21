<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _houston_checklist_node_info() {
  $items = array(
    'checklist_item' => array(
      'name' => t('Checklist item'),
      'module' => 'features',
      'description' => t('An item that appears on a checklist.'),
      'has_title' => '1',
      'title_label' => t('Task'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
