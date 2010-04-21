<?php

/**
 * Checklist page callback.
 */
function houston_checklist_node_page($node) {

  $output = houston_checklist_fetch_checklist($node->nid, $node->type);

  if ($output) {

    //add js reference
    $module_path = drupal_get_path('module', 'houston_checklist');
    drupal_add_js($module_path . '/houston_checklist.js');

    //add setting variables
    $opts = array('absolute' => TRUE);
    $check_json_url         = url('houston_checklist.check_item.json', $opts);
    $save_progress_json_url = url('houston_checklist.save_progress.json', $opts);

    drupal_add_js(
      array('houston_checklist' => array(
        'check_json_url' => $check_json_url,
        'dprid' => $node->nid,
        'save_progress_json_url' => $save_progress_json_url,
      )
    ), 'setting');

    return $output;
  }
  else {
    //@TODO move this to theming function
    $output = '<div class="view-empty">';
    $output .= t('Please add your first Checklist item to get started.');
    $output .= '<div class="buttons">';
    $output .= l(t('Add Checklist item'), 'node/add/checklist-item');
    $output .= '</div></div>';

    return $output;
  }
}

/**
 * Fetch all checklist items
 */
function houston_checklist_fetch_checklist($node_id, $node_type) {
  $result = db_query('
    SELECT cl.clid, cl.checked
    FROM {checklist} cl
    WHERE dprid = %s', $node_id);

  $checklist = array();

  //loop the checklist and add the data to the node object. keep track of the done/todo count (for the progressbar)
  while ($row = db_fetch_object($result)) {

    $node = node_load($row->clid);

    $checklist[$node->field_checklist_categories[0]['value']][] = array(
      'id' => $node->nid,
      'checked' => $row->checked,
      'title' => $node->title,
      'dprid' => $node_id,
      'class' => "checklist-item",
      'body' => $node->body
    );
  }

  if (empty($checklist)) return FALSE;

  return theme('checklist', $node_id, $node_type, $checklist);
}