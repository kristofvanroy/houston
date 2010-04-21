<?php
/**
 * Callback to handle (un)checking a checklist item in the database.
 *
 * @return
 *  JSON data.
 */
function houston_checklist_check_item() {
  $dprid = $_POST['dprid'];
  $clid = $_POST['clid'];
  $checked = $_POST['checked'];

  if (!$dprid || !$clid || !$checked) {
    drupal_json(array('status' => FALSE, 'data' => 'Not all parameters were supplied.'));
    return;
  }

  // God damn js
  if($checked == 'true'){
    $checked = 1;
  }
  else {
    $checked = 0;
  }

  $success = db_query("UPDATE {checklist} SET checked = %d WHERE dprid = %d AND clid = %d", $checked, $dprid, $clid);
  if (!$success) {
    drupal_json(array('status' => FALSE, 'data' => db_error()));
  }
  else {
    cache_clear_all("content:$dprid:", 'cache_content', TRUE);
    drupal_json(array('status' => TRUE, 'data' => ''));
  }
}

function houston_checklist_save_progress() {
  $dprid = $_POST['dprid'];
  $perc = $_POST['perc'];

  if (!$dprid || !is_numeric($perc)) {
    drupal_json(array('status' => FALSE, 'data' => 'Not all parameters were supplied.'));
    return;
  }
  $success = db_query("UPDATE {content_type_webapp} SET field_dpr_checklist_progress_value = %d WHERE nid = %d", $perc, $dprid);
  if (!$success) {
    drupal_json(array('status' => FALSE, 'data' => db_error()));
  }
  else {
    drupal_json(array('status' => TRUE, 'data' => ''));
  }
}