<?php
/**
 * @file
 * edinboro_theme_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function edinboro_theme_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-412ef7792b5598c7acd2c1274680a35d'] = array(
    'cache' => -1,
    'css_class' => 'front-slider front-page-slideshow-image highlighted-block--normal',
    'custom' => 0,
    'delta' => '412ef7792b5598c7acd2c1274680a35d',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'kln_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'kln_theme',
        'weight' => -37,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
