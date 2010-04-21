<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _houston_checklist_content_default_fields() {
  $fields = array();

  // Exported field: field_checklist_categories
  $fields[] = array(
    'field_name' => 'field_checklist_categories',
    'type_name' => 'checklist_item',
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
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'CSS
Drupal Development
Hosting
SEO',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Categories',
      'weight' => '-4',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_dpr_checklist_progress
  $fields[] = array(
    'field_name' => 'field_dpr_checklist_progress',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '36',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '5' => array(
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
    'multiple' => '0',
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
          'value' => '0',
          '_error_element' => 'default_value_widget][field_dpr_checklist_progress][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Checklist Progress',
      'weight' => '36',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  array(
    t('Categories'),
    t('Checklist Progress'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _houston_checklist_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spaces-feature-checklist';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'checklist' => array(
      'values' => array(
        '1' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'houston_checklist-0' => array(
          'module' => 'houston_checklist',
          'delta' => 0,
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'checklists',
  );
  $context->condition_mode = 0;

  $translatables['spaces-feature-checklist'] = array(

  );

  $export['spaces-feature-checklist'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _houston_checklist_ctools_plugin_api() {
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
 * Helper to implementation of hook_menu_default_items().
 */
function _houston_checklist_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Checklists',
    'path' => 'checklists',
    'weight' => '8',
  );
  // Translatables
  array(
    t('Checklists'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _houston_checklist_user_default_permissions() {
  $permissions = array();

  // Exported permission: create checklist_item content
  $permissions[] = array(
    'name' => 'create checklist_item content',
    'roles' => array(),
  );

  // Exported permission: delete any checklist_item content
  $permissions[] = array(
    'name' => 'delete any checklist_item content',
    'roles' => array(),
  );

  // Exported permission: delete own checklist_item content
  $permissions[] = array(
    'name' => 'delete own checklist_item content',
    'roles' => array(),
  );

  // Exported permission: edit any checklist_item content
  $permissions[] = array(
    'name' => 'edit any checklist_item content',
    'roles' => array(),
  );

  // Exported permission: edit own checklist_item content
  $permissions[] = array(
    'name' => 'edit own checklist_item content',
    'roles' => array(),
  );

  // Exported permission: update checklist
  $permissions[] = array(
    'name' => 'update checklist',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _houston_checklist_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'atrium_update_type_checklist_item';
  $strongarm->value = 1;

  $export['atrium_update_type_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_checklist_item';
  $strongarm->value = 0;

  $export['comment_anonymous_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_checklist_item';
  $strongarm->value = '2';

  $export['comment_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_checklist_item';
  $strongarm->value = '3';

  $export['comment_controls_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_checklist_item';
  $strongarm->value = '4';

  $export['comment_default_mode_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_checklist_item';
  $strongarm->value = '1';

  $export['comment_default_order_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_checklist_item';
  $strongarm->value = '50';

  $export['comment_default_per_page_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_checklist_item';
  $strongarm->value = '0';

  $export['comment_form_location_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_checklist_item';
  $strongarm->value = '1';

  $export['comment_preview_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_checklist_item';
  $strongarm->value = '1';

  $export['comment_subject_field_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_checklist_item';
  $strongarm->value = '0';

  $export['comment_upload_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_images_checklist_item';
  $strongarm->value = 'none';

  $export['comment_upload_images_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_checklist_item';
  $strongarm->value = array(
    'og_nodeapi' => '-2',
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '1',
    'comment_settings' => '2',
    'menu' => '-3',
    'book' => '0',
    'attachments' => '3',
  );

  $export['content_extra_weights_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_checklist_item';
  $strongarm->value = 0;

  $export['content_profile_use_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedapi_checklist_item';
  $strongarm->value = array(
    '0' => 'update_existing',
    '1' => 'parsers',
    '2' => 'processors',
  );

  $export['feedapi_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedapi_settings_checklist_item';
  $strongarm->value = array(
    'enabled' => 0,
    'refresh_on_create' => 0,
    'update_existing' => 1,
    'skip' => 0,
    'items_delete' => '0',
    'parsers' => array(
      'parser_ical' => array(
        'enabled' => 0,
        'weight' => '0',
      ),
    ),
    'processors' => array(
      'feedapi_node' => array(
        'enabled' => 0,
        'weight' => '0',
        'content_type' => 'admin_message',
        'node_date' => 'feed',
        'promote' => '3',
        'x_dedupe' => '0',
      ),
      'feedapi_inherit' => array(
        'enabled' => 0,
        'weight' => '0',
        'inherit_og' => 1,
        'inherit_taxonomy' => 1,
      ),
    ),
  );

  $export['feedapi_settings_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_checklist_item';
  $strongarm->value = 'form-0c6e513bc065b769fa39a28b5cb0a912';

  $export['form_build_id_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_checklist_item';
  $strongarm->value = array(
    '0' => 'status',
  );

  $export['node_options_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_checklist_item';
  $strongarm->value = array(
    '0' => 'thread',
    '1' => 'nodetype',
    '2' => 'author',
  );

  $export['notifications_content_type_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_checklist_item';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_checklist_item_pattern';
  $strongarm->value = '';

  $export['pathauto_node_checklist_item_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_checklist_item';
  $strongarm->value = 0;

  $export['show_diff_inline_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_checklist_item';
  $strongarm->value = 1;

  $export['show_preview_changes_checklist_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_checklist_item';
  $strongarm->value = '1';

  $export['upload_checklist_item'] = $strongarm;
  return $export;
}
