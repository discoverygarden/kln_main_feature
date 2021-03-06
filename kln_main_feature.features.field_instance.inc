<?php
/**
 * @file
 * kln_main_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function kln_main_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-imagecache_default_thumbnail-field_content_model'.
  $field_instances['node-imagecache_default_thumbnail-field_content_model'] = array(
    'bundle' => 'imagecache_default_thumbnail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the Content Model or Models to apply this thumbnail configuration to',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_content_model',
    'label' => 'Content Model',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'node-imagecache_default_thumbnail-field_pid_replacement_procedure'.
  $field_instances['node-imagecache_default_thumbnail-field_pid_replacement_procedure'] = array(
    'bundle' => 'imagecache_default_thumbnail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add a list of PIDS to target with this replacement procedure',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pid_replacement_procedure',
    'label' => 'PID Replacement Procedure',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -2,
    ),
  );

  // Exported field_instance:
  // 'node-imagecache_default_thumbnail-field_replacement_image'.
  $field_instances['node-imagecache_default_thumbnail-field_replacement_image'] = array(
    'bundle' => 'imagecache_default_thumbnail',
    'deleted' => 0,
    'description' => 'Select the image to use in place of an objects TN datastream, when conditions of this configuration are met',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_replacement_image',
    'label' => 'Replacement Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => array(
        'enabled' => 0,
      ),
      'image_field_caption_wrapper' => array(
        'image_field_caption_default' => array(
          'format' => 'filtered_html',
          'value' => '',
        ),
      ),
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -1,
    ),
  );

  // Exported field_instance:
  // 'node-imagecache_default_thumbnail-field_replacement_procedure'.
  $field_instances['node-imagecache_default_thumbnail-field_replacement_procedure'] = array(
    'bundle' => 'imagecache_default_thumbnail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select how this default thumbnail configuration should be applied',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_replacement_procedure',
    'label' => 'Replacement Procedure',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add a list of PIDS to target with this replacement procedure');
  t('Content Model');
  t('PID Replacement Procedure');
  t('Replacement Image');
  t('Replacement Procedure');
  t('Select how this default thumbnail configuration should be applied');
  t('Select the Content Model or Models to apply this thumbnail configuration to');
  t('Select the image to use in place of an objects TN datastream, when conditions of this configuration are met');

  return $field_instances;
}
