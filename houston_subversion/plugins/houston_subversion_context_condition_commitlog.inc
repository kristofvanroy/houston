<?php

class houston_subversion_context_condition_commitlog extends context_condition {
  function condition_values() {
    $values = array(1 => 'Commitlog');
    return $values;
  }
}
