<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _houston_webapp_content_default_fields() {
  $fields = array();

  // Exported field: field_dp_external_acc_password
  $fields[] = array(
    'field_name' => 'field_dp_external_acc_password',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '41',
      'parent' => 'group_dpr_external_accounts',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
          '_error_element' => 'default_value_widget][field_dp_external_acc_password][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Password',
      'weight' => '47',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dpr_accounts_login
  $fields[] = array(
    'field_name' => 'field_dpr_accounts_login',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '5',
      'parent' => 'group_dpr_accounts',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
          '_error_element' => 'default_value_widget][field_dpr_accounts_login][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Login',
      'weight' => '5',
      'description' => 'Account login.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dpr_accounts_password
  $fields[] = array(
    'field_name' => 'field_dpr_accounts_password',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '6',
      'parent' => 'group_dpr_accounts',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
          '_error_element' => 'default_value_widget][field_dpr_accounts_password][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Password',
      'weight' => '6',
      'description' => 'Account password.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dpr_accounts_role
  $fields[] = array(
    'field_name' => 'field_dpr_accounts_role',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '4',
      'parent' => 'group_dpr_accounts',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'admin|Admin
webmaster|Webmaster
editor|Editor
author|Author
guest|Guest',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Role',
      'weight' => '4',
      'description' => 'Account role.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_dpr_application_type
  $fields[] = array(
    'field_name' => 'field_dpr_application_type',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'allowed_values' => 'drupal|Drupal Project
php|PHP Project
flex|Flex Project
flash|Flash Project
air|Air Project
ria|General RIA Project
mobile|Mobile Project
design|Design Project
java|Java Project
integration|Integration Project
ux|UX Project',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Application type',
      'weight' => '-4',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_dpr_assets_attachment
  $fields[] = array(
    'field_name' => 'field_dpr_assets_attachment',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '31',
      'parent' => 'group_dpr_assets',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'xls pdf doc txt ppt',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Attachment',
      'weight' => '31',
      'description' => 'The attachment.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_dpr_assets_type
  $fields[] = array(
    'field_name' => 'field_dpr_assets_type',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '30',
      'parent' => 'group_dpr_assets',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'wireframe|Wireframe
design|Design
draft_document|Draft document',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Type',
      'weight' => '30',
      'description' => 'The type of the asset.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_dpr_customer_email
  $fields[] = array(
    'field_name' => 'field_dpr_customer_email',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '14',
      'parent' => 'group_dpr_customer',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'type' => 'email',
    'required' => '0',
    'multiple' => '1',
    'module' => 'email',
    'active' => '1',
    'widget' => array(
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Contact email',
      'weight' => '14',
      'description' => 'The email address of the contact.',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_dpr_customer_name
  $fields[] = array(
    'field_name' => 'field_dpr_customer_name',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '13',
      'parent' => 'group_dpr_customer',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
          '_error_element' => 'default_value_widget][field_dpr_customer_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Contact name',
      'weight' => '13',
      'description' => 'The contact name.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dpr_customer_tel
  $fields[] = array(
    'field_name' => 'field_dpr_customer_tel',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '15',
      'parent' => 'group_dpr_customer',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
          '_error_element' => 'default_value_widget][field_dpr_customer_tel][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Contact telephone number',
      'weight' => '15',
      'description' => 'The telephone numer(s) of the contact.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dpr_db_admin
  $fields[] = array(
    'field_name' => 'field_dpr_db_admin',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '9',
      'parent' => 'group_dpr_db',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
          '_error_element' => 'default_value_widget][field_dpr_db_admin][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'dbAdmin URL',
      'weight' => '9',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dpr_db_env
  $fields[] = array(
    'field_name' => 'field_dpr_db_env',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '7',
      'parent' => 'group_dpr_db',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'development|Development
staging|Staging
production|Production',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Environment',
      'weight' => '7',
      'description' => 'The environment this account is for.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_dpr_db_host
  $fields[] = array(
    'field_name' => 'field_dpr_db_host',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_dpr_db',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
          '_error_element' => 'default_value_widget][field_dpr_db_host][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Host',
      'weight' => '8',
      'description' => 'The database host.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dpr_db_login
  $fields[] = array(
    'field_name' => 'field_dpr_db_login',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '11',
      'parent' => 'group_dpr_db',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
          '_error_element' => 'default_value_widget][field_dpr_db_login][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Login',
      'weight' => '11',
      'description' => 'The login for this account.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dpr_db_name
  $fields[] = array(
    'field_name' => 'field_dpr_db_name',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '10',
      'parent' => 'group_dpr_db',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
          '_error_element' => 'default_value_widget][field_dpr_db_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Name',
      'weight' => '10',
      'description' => 'The database name.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dpr_db_password
  $fields[] = array(
    'field_name' => 'field_dpr_db_password',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '12',
      'parent' => 'group_dpr_db',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
          '_error_element' => 'default_value_widget][field_dpr_db_password][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Password',
      'weight' => '12',
      'description' => 'The account password.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dpr_external_acc_name
  $fields[] = array(
    'field_name' => 'field_dpr_external_acc_name',
    'type_name' => 'webapp',
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
          '_error_element' => 'default_value_widget][field_dpr_external_acc_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Name',
      'weight' => '44',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dpr_external_acc_url
  $fields[] = array(
    'field_name' => 'field_dpr_external_acc_url',
    'type_name' => 'webapp',
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
    'type' => 'link',
    'required' => '0',
    'multiple' => '1',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'URL',
      'weight' => '45',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_dpr_external_acc_username
  $fields[] = array(
    'field_name' => 'field_dpr_external_acc_username',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '40',
      'parent' => 'group_dpr_external_accounts',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
          '_error_element' => 'default_value_widget][field_dpr_external_acc_username][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Username',
      'weight' => '46',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dpr_ftp_env
  $fields[] = array(
    'field_name' => 'field_dpr_ftp_env',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '6',
      'parent' => 'group_dpr_ftp',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'development|Development
staging|Staging
production|Production',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Environment',
      'weight' => '6',
      'description' => 'The environment this FTP account is for.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_dpr_ftp_login
  $fields[] = array(
    'field_name' => 'field_dpr_ftp_login',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '9',
      'parent' => 'group_dpr_ftp',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
          '_error_element' => 'default_value_widget][field_dpr_ftp_login][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Login',
      'weight' => '9',
      'description' => 'The account login.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dpr_ftp_password
  $fields[] = array(
    'field_name' => 'field_dpr_ftp_password',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '10',
      'parent' => 'group_dpr_ftp',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
          '_error_element' => 'default_value_widget][field_dpr_ftp_password][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Password',
      'weight' => '10',
      'description' => 'The account password.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dpr_ftp_type
  $fields[] = array(
    'field_name' => 'field_dpr_ftp_type',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '7',
      'parent' => 'group_dpr_ftp',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'ftp|ftp
sftp (ssh2)|sftp (ssh2)
http|http',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Type',
      'weight' => '7',
      'description' => 'The connection type of this account.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_dpr_ftp_url
  $fields[] = array(
    'field_name' => 'field_dpr_ftp_url',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_dpr_ftp',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
          '_error_element' => 'default_value_widget][field_dpr_ftp_url][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Server',
      'weight' => '8',
      'description' => 'The connection url for this account.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dpr_links_url
  $fields[] = array(
    'field_name' => 'field_dpr_links_url',
    'type_name' => 'webapp',
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
    'type' => 'link',
    'required' => '0',
    'multiple' => '1',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'URL',
      'weight' => '42',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_dpr_planning_date
  $fields[] = array(
    'field_name' => 'field_dpr_planning_date',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '26',
      'parent' => 'group_dpr_planning',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'type' => 'date',
    'required' => '0',
    'multiple' => '1',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => 'Europe/Brussels',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'd/m/Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Date',
      'weight' => '26',
      'description' => 'The date for this milestone.',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_dpr_planning_name
  $fields[] = array(
    'field_name' => 'field_dpr_planning_name',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '25',
      'parent' => 'group_dpr_planning',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'first_delivery|First delivery
deployment|Deployment
design_delivery|Design delivery',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Milestone',
      'weight' => '25',
      'description' => 'The name of the milestone.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_dpr_roles_description
  $fields[] = array(
    'field_name' => 'field_dpr_roles_description',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_dpr_roles',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_dpr_roles_description][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Description',
      'weight' => '8',
      'description' => 'A description of this role.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_dpr_roles_name
  $fields[] = array(
    'field_name' => 'field_dpr_roles_name',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '7',
      'parent' => 'group_dpr_roles',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'admin|Admin
webmaster|Webmaster
editor|Editor
testuser|Testuser',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Name',
      'weight' => '7',
      'description' => 'The name of the role.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_dpr_team_function
  $fields[] = array(
    'field_name' => 'field_dpr_team_function',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '35',
      'parent' => 'group_dpr_team',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'project_manager|Project manager
lead_developer|Lead Developer
developer|Developer
integration|Integration
flasher|Flasher
designer|Designer',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Member function',
      'weight' => '35',
      'description' => 'The function of the team member.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_dpr_team_member
  $fields[] = array(
    'field_name' => 'field_dpr_team_member',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '32',
      'parent' => 'group_dpr_team',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 2,
      '3' => 3,
      '4' => 4,
    ),
    'referenceable_status' => 1,
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_dpr_team_member][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Member',
      'weight' => '32',
      'description' => 'A member of the project team.',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Translatables
  array(
    t('Application type'),
    t('Attachment'),
    t('Contact email'),
    t('Contact name'),
    t('Contact telephone number'),
    t('Date'),
    t('Description'),
    t('Environment'),
    t('Host'),
    t('Login'),
    t('Member'),
    t('Member function'),
    t('Milestone'),
    t('Name'),
    t('Password'),
    t('Role'),
    t('Server'),
    t('Type'),
    t('URL'),
    t('Username'),
    t('dbAdmin URL'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _houston_webapp_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spaces-feature-webapp';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'webapp' => 'webapp',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'houston_subversion-svn_info' => array(
          'module' => 'houston_subversion',
          'delta' => 'svn_info',
          'region' => 'right',
          'weight' => 0,
        ),
        'houston_checklist-1' => array(
          'module' => 'houston_checklist',
          'delta' => 1,
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'menu' => 'webapplications',
  );
  $context->condition_mode = 0;

  $translatables['spaces-feature-webapp'] = array(

  );

  $export['spaces-feature-webapp'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _houston_webapp_ctools_plugin_api() {
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
function _houston_webapp_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_dpr_accounts
  $groups[] = array(
    'group_type' => 'multigroup',
    'type_name' => 'webapp',
    'group_name' => 'group_dpr_accounts',
    'label' => 'Accounts',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => 'The list of accounts defined for this project?',
      ),
      'display' => array(
        'weight' => '1',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
      'multigroup' => array(
        'subgroup' => array(
          'weight' => -20,
          'label' => 'above',
          'teaser' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
          'full' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
        ),
        'multiple-columns' => 1,
        'required' => 0,
        'multiple' => '1',
        'labels' => array(
          '0' => '',
          '1' => '',
          '2' => '',
          '3' => '',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
      ),
    ),
    'weight' => '1',
    'fields' => array(
      '0' => 'field_dpr_accounts_role',
      '1' => 'field_dpr_accounts_login',
      '2' => 'field_dpr_accounts_password',
    ),
  );

  // Exported group: group_dpr_assets
  $groups[] = array(
    'group_type' => 'multigroup',
    'type_name' => 'webapp',
    'group_name' => 'group_dpr_assets',
    'label' => 'Project assets',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'weight' => '9',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
      'multigroup' => array(
        'subgroup' => array(
          'weight' => -20,
          'label' => 'above',
          'teaser' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
          'full' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
        ),
        'multiple-columns' => 1,
        'required' => 0,
        'multiple' => '1',
        'labels' => array(
          '0' => '',
          '1' => '',
          '2' => '',
          '3' => '',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
      ),
    ),
    'weight' => '9',
    'fields' => array(
      '0' => 'field_dpr_assets_type',
      '1' => 'field_dpr_assets_attachment',
    ),
  );

  // Exported group: group_dpr_customer
  $groups[] = array(
    'group_type' => 'multigroup',
    'type_name' => 'webapp',
    'group_name' => 'group_dpr_customer',
    'label' => 'Customer data',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'weight' => '6',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
      'multigroup' => array(
        'subgroup' => array(
          'weight' => -20,
          'label' => 'above',
          'teaser' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
          'full' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
        ),
        'multiple-columns' => 0,
        'required' => 0,
        'multiple' => '1',
        'labels' => array(
          '0' => '',
          '1' => '',
          '2' => '',
          '3' => '',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
      ),
    ),
    'weight' => '6',
    'fields' => array(
      '0' => 'field_dpr_customer_name',
      '1' => 'field_dpr_customer_email',
      '2' => 'field_dpr_customer_tel',
    ),
  );

  // Exported group: group_dpr_db
  $groups[] = array(
    'group_type' => 'multigroup',
    'type_name' => 'webapp',
    'group_name' => 'group_dpr_db',
    'label' => 'Database accounts',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'weight' => '4',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
      'multigroup' => array(
        'subgroup' => array(
          'weight' => -20,
          'label' => 'above',
          'teaser' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
          'full' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
        ),
        'multiple-columns' => 0,
        'required' => 0,
        'multiple' => '1',
        'labels' => array(
          '0' => '',
          '1' => '',
          '2' => '',
          '3' => '',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
      ),
    ),
    'weight' => '4',
    'fields' => array(
      '0' => 'field_dpr_db_env',
      '1' => 'field_dpr_db_host',
      '2' => 'field_dpr_db_admin',
      '3' => 'field_dpr_db_name',
      '4' => 'field_dpr_db_login',
      '5' => 'field_dpr_db_password',
    ),
  );

  // Exported group: group_dpr_external_accounts
  $groups[] = array(
    'group_type' => 'multigroup',
    'type_name' => 'webapp',
    'group_name' => 'group_dpr_external_accounts',
    'label' => 'External accounts',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '5',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
      'multigroup' => array(
        'multiple-columns' => 0,
        'required' => 0,
        'multiple' => '1',
        'labels' => array(
          '0' => '',
          '1' => '',
          '2' => '',
          '3' => '',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
        'subgroup' => array(
          'weight' => -20,
          'label' => 'above',
          'teaser' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
          'full' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
        ),
      ),
    ),
    'weight' => '5',
    'fields' => array(
      '0' => 'field_dpr_external_acc_name',
      '1' => 'field_dpr_external_acc_url',
      '2' => 'field_dpr_external_acc_username',
      '3' => 'field_dp_external_acc_password',
    ),
  );

  // Exported group: group_dpr_ftp
  $groups[] = array(
    'group_type' => 'multigroup',
    'type_name' => 'webapp',
    'group_name' => 'group_dpr_ftp',
    'label' => 'FTP accounts',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => 'A list of FTP accounts for this project.',
      ),
      'display' => array(
        'weight' => '3',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
      'multigroup' => array(
        'subgroup' => array(
          'weight' => -20,
          'label' => 'above',
          'teaser' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
          'full' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
        ),
        'multiple-columns' => 0,
        'required' => 0,
        'multiple' => '1',
        'labels' => array(
          '0' => '',
          '1' => '',
          '2' => '',
          '3' => '',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_dpr_ftp_env',
      '1' => 'field_dpr_ftp_type',
      '2' => 'field_dpr_ftp_url',
      '3' => 'field_dpr_ftp_login',
      '4' => 'field_dpr_ftp_password',
    ),
  );

  // Exported group: group_dpr_links
  $groups[] = array(
    'group_type' => 'multigroup',
    'type_name' => 'webapp',
    'group_name' => 'group_dpr_links',
    'label' => 'Links',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '0',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
      'multigroup' => array(
        'multiple-columns' => 0,
        'required' => 0,
        'multiple' => '1',
        'labels' => array(
          '0' => '',
          '1' => '',
          '2' => '',
          '3' => '',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
        'subgroup' => array(
          'weight' => -20,
          'label' => 'above',
          'teaser' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
          'full' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
        ),
      ),
    ),
    'weight' => '0',
    'fields' => array(
      '0' => 'field_dpr_links_url',
    ),
  );

  // Exported group: group_dpr_planning
  $groups[] = array(
    'group_type' => 'multigroup',
    'type_name' => 'webapp',
    'group_name' => 'group_dpr_planning',
    'label' => 'Project planning',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'weight' => '8',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
      'multigroup' => array(
        'subgroup' => array(
          'weight' => -20,
          'label' => 'above',
          'teaser' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
          'full' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
        ),
        'multiple-columns' => 1,
        'required' => 0,
        'multiple' => '1',
        'labels' => array(
          '0' => '',
          '1' => '',
          '2' => '',
          '3' => '',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
      ),
    ),
    'weight' => '8',
    'fields' => array(
      '0' => 'field_dpr_planning_name',
      '1' => 'field_dpr_planning_date',
    ),
  );

  // Exported group: group_dpr_roles
  $groups[] = array(
    'group_type' => 'multigroup',
    'type_name' => 'webapp',
    'group_name' => 'group_dpr_roles',
    'label' => 'Roles',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => 'The list of roles defined for this project.',
      ),
      'display' => array(
        'weight' => '2',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
      'multigroup' => array(
        'subgroup' => array(
          'weight' => -20,
          'label' => 'above',
          'teaser' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
          'full' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
        ),
        'multiple-columns' => 1,
        'required' => 0,
        'multiple' => '1',
        'labels' => array(
          '0' => '',
          '1' => '',
          '2' => '',
          '3' => '',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
      ),
    ),
    'weight' => '2',
    'fields' => array(
      '0' => 'field_dpr_roles_name',
      '1' => 'field_dpr_roles_description',
    ),
  );

  // Exported group: group_dpr_team
  $groups[] = array(
    'group_type' => 'multigroup',
    'type_name' => 'webapp',
    'group_name' => 'group_dpr_team',
    'label' => 'Project team',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'weight' => '7',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
      'multigroup' => array(
        'subgroup' => array(
          'weight' => -20,
          'label' => 'above',
          'teaser' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
          'full' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
        ),
        'multiple-columns' => 1,
        'required' => 0,
        'multiple' => '1',
        'labels' => array(
          '0' => '',
          '1' => '',
          '2' => '',
          '3' => '',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
      ),
    ),
    'weight' => '7',
    'fields' => array(
      '0' => 'field_dpr_team_member',
      '1' => 'field_dpr_team_function',
    ),
  );

  // Translatables
  array(
    t('Accounts'),
    t('Customer data'),
    t('Database accounts'),
    t('External accounts'),
    t('FTP accounts'),
    t('Links'),
    t('Project assets'),
    t('Project planning'),
    t('Project team'),
    t('Roles'),
  );

  return $groups;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _houston_webapp_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Webapps',
    'path' => 'webapplications',
    'weight' => '7',
  );
  // Translatables
  array(
    t('Webapps'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _houston_webapp_user_default_permissions() {
  $permissions = array();

  // Exported permission: create webapp content
  $permissions[] = array(
    'name' => 'create webapp content',
    'roles' => array(),
  );

  // Exported permission: delete own webapp content
  $permissions[] = array(
    'name' => 'delete own webapp content',
    'roles' => array(),
  );

  // Exported permission: edit own webapp content
  $permissions[] = array(
    'name' => 'edit own webapp content',
    'roles' => array(),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _houston_webapp_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'atrium_update_type_webapp';
  $strongarm->value = 1;

  $export['atrium_update_type_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_webapp';
  $strongarm->value = 0;

  $export['comment_anonymous_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_webapp';
  $strongarm->value = '3';

  $export['comment_controls_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_webapp';
  $strongarm->value = '4';

  $export['comment_default_mode_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_webapp';
  $strongarm->value = '1';

  $export['comment_default_order_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_webapp';
  $strongarm->value = '50';

  $export['comment_default_per_page_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_webapp';
  $strongarm->value = '1';

  $export['comment_form_location_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_webapp';
  $strongarm->value = '1';

  $export['comment_preview_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_webapp';
  $strongarm->value = '1';

  $export['comment_subject_field_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_images_webapp';
  $strongarm->value = 'none';

  $export['comment_upload_images_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_webapp';
  $strongarm->value = '0';

  $export['comment_upload_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_webapp';
  $strongarm->value = '0';

  $export['comment_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_webapp';
  $strongarm->value = array(
    'og_nodeapi' => '-2',
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '10',
    'comment_settings' => '11',
    'menu' => '-3',
    'book' => '9',
    'path' => '12',
  );

  $export['content_extra_weights_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_webapp';
  $strongarm->value = 0;

  $export['content_profile_use_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedapi_settings_webapp';
  $strongarm->value = array(
    'enabled' => FALSE,
    'upload_method' => 'url',
    'refresh_on_create' => 0,
    'update_existing' => 1,
    'refresh_time' => 1800,
    'items_delete' => 0,
    'parsers' => array(
      'parser_ical' => array(
        'enabled' => FALSE,
        'weight' => 0,
      ),
    ),
    'processors' => array(
      'feedapi_node' => array(
        'enabled' => FALSE,
        'weight' => 0,
        'content_type' => 'casetracker_basic_project',
        'input_format' => 0,
        'node_date' => 'feed',
        'x_dedupe' => 0,
      ),
      'feedapi_inherit' => array(
        'enabled' => FALSE,
        'weight' => 0,
        'inherit_og' => TRUE,
        'inherit_taxonomy' => TRUE,
        'inherit_author' => TRUE,
      ),
    ),
  );

  $export['feedapi_settings_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedapi_webapp';
  $strongarm->value = array(
    '0' => 'upload_method',
    '1' => 'update_existing',
    '2' => 'refresh_time',
    '3' => 'parsers',
    '4' => 'processors',
  );

  $export['feedapi_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_webapp';
  $strongarm->value = 'form-64e6caba3955ed94dce6cf6f482fa12b';

  $export['form_build_id_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_webapp';
  $strongarm->value = array(
    '0' => 0,
  );

  $export['node_options_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_webapp';
  $strongarm->value = array(
    '0' => 'thread',
    '1' => 'author',
  );

  $export['notifications_content_type_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_webapp';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_webapp';
  $strongarm->value = 0;

  $export['show_diff_inline_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_webapp';
  $strongarm->value = 1;

  $export['show_preview_changes_webapp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_webapp';
  $strongarm->value = '0';

  $export['upload_webapp'] = $strongarm;
  return $export;
}
