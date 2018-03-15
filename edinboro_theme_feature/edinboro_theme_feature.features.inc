<?php
/**
 * @file
 * edinboro_theme_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function edinboro_theme_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function edinboro_theme_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function edinboro_theme_feature_fontyourface_features_default_font() {
  return array(
    'Source Sans Pro 200 (cyrillic)' => array(
      'name' => 'Source Sans Pro 200 (cyrillic)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Source Sans Pro&subset=cyrillic#200',
      'provider' => 'google_fonts_api',
      'css_selector' => 'body',
      'css_family' => 'Source Sans Pro',
      'css_style' => 'normal',
      'css_weight' => 200,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:19:"Source Sans Pro:200";s:6:"subset";s:8:"cyrillic";}',
    ),
    'Source Sans Pro 300 (latin-ext)' => array(
      'name' => 'Source Sans Pro 300 (latin-ext)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Source Sans Pro&subset=latin-ext#300',
      'provider' => 'google_fonts_api',
      'css_selector' => 'body',
      'css_family' => 'Source Sans Pro',
      'css_style' => 'normal',
      'css_weight' => 300,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:19:"Source Sans Pro:300";s:6:"subset";s:9:"latin-ext";}',
    ),
    'Source Sans Pro 600 (latin)' => array(
      'name' => 'Source Sans Pro 600 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Source Sans Pro&subset=latin#600',
      'provider' => 'google_fonts_api',
      'css_selector' => '.solr-grid-caption a',
      'css_family' => 'Source Sans Pro',
      'css_style' => 'normal',
      'css_weight' => 600,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:19:"Source Sans Pro:600";s:6:"subset";s:5:"latin";}',
    ),
  );
}
