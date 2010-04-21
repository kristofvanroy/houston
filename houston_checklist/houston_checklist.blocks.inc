<?php

/**
 * Checklist block callback
 */
function houston_webapp_checklist_progress_block() {
  $node = node_load(arg(1));
  if ($node) {
    $output = '';
		$output .= '<div id="progress-back" class="checklist-progress-back">';
		$output .= '<div id="progress-bar" class="checklist-progress-bar" style="width: '. $node->field_dpr_checklist_progress[0]['value'] .'%">';
		$output .= '<span id="check-list-progress-indecations" class="check-list-progress-indecations"></span>';
		$output .= '</div>';
		$output .= '</div>';
		$output .= '<span id="check-list-progress-indicator">'. check_plain($node->field_dpr_checklist_progress[0]['value']) .'%</span>';
    return $output;
  }
}
