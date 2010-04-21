<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _houston_subversion_content_default_fields() {
  $fields = array();

  // Exported field: field_webapp_repo
  $fields[] = array(
    'field_name' => 'field_webapp_repo',
    'type_name' => 'webapp',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
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
    'allowed_values' => '',
    'allowed_values_php' => '$repos = array();
foreach (versioncontrol_get_repositories() as $repo) {
  $repos[$repo[\'repo_id\']] = $repo[\'name\'];
}

return $repos;',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Repository',
      'weight' => '-2',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  array(
    t('Repository'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _houston_subversion_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spaces-feature-subversion';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'commitlog' => array(
      'values' => array(
        '1' => 1,
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
      ),
    ),
    'menu' => 'webapplications',
  );
  $context->condition_mode = 0;

  $translatables['spaces-feature-subversion'] = array(

  );

  $export['spaces-feature-subversion'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _houston_subversion_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _houston_subversion_user_default_permissions() {
  $permissions = array();

  // Exported permission: access commit messages
  $permissions[] = array(
    'name' => 'access commit messages',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: administer version control systems
  $permissions[] = array(
    'name' => 'administer version control systems',
    'roles' => array(
      '0' => 'admin',
      '1' => 'manager',
    ),
  );

  // Exported permission: browse version control repositories
  $permissions[] = array(
    'name' => 'browse version control repositories',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: use version control systems
  $permissions[] = array(
    'name' => 'use version control systems',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  return $permissions;
}
