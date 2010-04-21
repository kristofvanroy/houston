<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _houston_presales_content_default_fields() {
  $fields = array();

  // Exported field: field_presales_attachments
  $fields[] = array(
    'field_name' => 'field_presales_attachments',
    'type_name' => 'presale',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'txt, doc, pdf, xls, docx, xlsx',
      'file_path' => 'presales/attachments',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Attachments',
      'weight' => '12',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_presales_date
  $fields[] = array(
    'field_name' => 'field_presales_date',
    'type_name' => 'presale',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '1',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'now',
      'default_value_code2' => '',
      'input_format' => 'd/m/Y - H:i:s',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '0:0',
      'label_position' => 'above',
      'label' => 'Date',
      'weight' => '11',
      'description' => '',
      'type' => 'date_select',
      'module' => 'date',
    ),
  );

  // Exported field: field_presales_drupal_estimate
  $fields[] = array(
    'field_name' => 'field_presales_drupal_estimate',
    'type_name' => 'presale',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '1',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => 'days',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '1',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
          '_error_element' => 'default_value_widget][field_presales_drupal_estimate][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Drupal estimate',
      'weight' => '9',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_presales_html_estimate
  $fields[] = array(
    'field_name' => 'field_presales_html_estimate',
    'type_name' => 'presale',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '1',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => 'days',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '1',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
          '_error_element' => 'default_value_widget][field_presales_html_estimate][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'HTML/CSS estimate',
      'weight' => '10',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_presales_label_estimate
  $fields[] = array(
    'field_name' => 'field_presales_label_estimate',
    'type_name' => 'presale',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_presales_label_estimate][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Label estimation',
      'weight' => '7',
      'description' => 'This label marks the estimation. Example: \'First round\', \'Wireframes received\', \'Estimation with change requests included\' and \'New budget indication\'',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_presales_remarks
  $fields[] = array(
    'field_name' => 'field_presales_remarks',
    'type_name' => 'presale',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_presales_remarks][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Remarks',
      'weight' => '8',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  array(
    t('Attachments'),
    t('Date'),
    t('Drupal estimate'),
    t('HTML/CSS estimate'),
    t('Label estimation'),
    t('Remarks'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _houston_presales_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'houston-presales';
  $context->description = '';
  $context->tag = 'presales';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'presale' => 'presale',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-houston_presales-block_1' => array(
          'module' => 'views',
          'delta' => 'houston_presales-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'presales-overview',
  );
  $context->condition_mode = 0;

  $translatables['houston-presales'] = array(
    t('presales'),
  );

  $export['houston-presales'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _houston_presales_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  else if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_fieldgroup_default_groups().
 */
function _houston_presales_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_presales_estimations
  $groups[] = array(
    'group_type' => 'multigroup',
    'type_name' => 'presale',
    'group_name' => 'group_presales_estimations',
    'label' => 'Estimations',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        '5' => array(
          'format' => 'fieldset',
        ),
        'teaser' => array(
          'format' => 'fieldset',
        ),
        'full' => array(
          'format' => 'fieldset',
        ),
        '4' => array(
          'format' => 'fieldset',
        ),
        '2' => array(
          'format' => 'fieldset',
        ),
        '3' => array(
          'format' => 'fieldset',
        ),
        'token' => array(
          'format' => 'fieldset',
        ),
        'description' => NULL,
      ),
      'multigroup' => array(
        'multiple' => 1,
      ),
    ),
    'weight' => '4',
    'fields' => array(
      '0' => 'field_presales_label_estimate',
      '1' => 'field_presales_remarks',
      '2' => 'field_presales_drupal_estimate',
      '3' => 'field_presales_html_estimate',
      '4' => 'field_presales_date',
      '5' => 'field_presales_attachments',
    ),
  );

  // Translatables
  array(
    t('Estimations'),
  );

  return $groups;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _houston_presales_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Presales',
    'path' => 'presales-overview',
    'weight' => '0',
  );
  // Translatables
  array(
    t('Presales'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _houston_presales_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_presale';
  $strongarm->value = array(
    'og_nodeapi' => '-3',
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '0',
    'comment_settings' => '1',
    'menu' => '-4',
    'book' => '-1',
    'path' => '3',
    'attachments' => '2',
  );

  $export['content_extra_weights_presale'] = $strongarm;
  return $export;
}
