<?php
/**
 * @file
 * eaststroudsburg_theme_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eaststroudsburg_theme_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'front_page_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Front Page Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Front Page Slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_type'] = 'div';
  $handler->display->display_options['fields']['tn_cache']['element_class'] = 'front-page-slideshow-wrapper';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 0;
  $handler->display->display_options['fields']['tn_cache']['tn_dsid'] = 'OBJ';
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'front_page_large_image';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.title']['element_class'] = 'title-field';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['dc.description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['element_class'] = 'desc-field';
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['link_to_object'] = 0;
  /* Field: Global: Block area */
  $handler->display->display_options['fields']['block']['id'] = 'block';
  $handler->display->display_options['fields']['block']['table'] = 'views';
  $handler->display->display_options['fields']['block']['field'] = 'block';
  $handler->display->display_options['fields']['block']['label'] = '';
  $handler->display->display_options['fields']['block']['exclude'] = TRUE;
  $handler->display->display_options['fields']['block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['block']['block_to_insert'] = 'user:login';
  $handler->display->display_options['fields']['block']['title'] = '<none>';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="front-page-container">
  [block]
  <div class="page-data">
    <input id="front_page_container_LI_x" type="checkbox" />
    <h4><label class="accordion" for="front_page_container_LI_x">Shown: </label></h4>
    <div class="page-data--inner">
      <div class="title"><h2>[dc.title]</h2></div>
      <div class="description">[dc.description]</div>
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:sample_collection';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'standard');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_class'] = 'title-field';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['dc.description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['element_class'] = 'desc-field';
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['link_to_object'] = 0;
  $handler->display->display_options['block_description'] = 'Front Page Owl Slideshow';

  /* Display: Full Screen Front Page Slideshow */
  $handler = $view->new_display('block', 'Full Screen Front Page Slideshow', 'imagecache_front_page_slideshow');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'front-page-slideshow-image-cache';
  $handler->display->display_options['display_description'] = 'A variant of the front page slideshow, built to leverage islandora imagecache.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_single-image';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tn_cache']['element_type'] = 'div';
  $handler->display->display_options['fields']['tn_cache']['element_class'] = 'front-page-slideshow-wrapper';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 0;
  $handler->display->display_options['fields']['tn_cache']['tn_dsid'] = 'OBJ';
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'front_page_large_image';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.title']['element_class'] = 'title-field';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['dc.description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['element_class'] = 'desc-field';
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['link_to_object'] = 0;
  /* Field: Global: Block area */
  $handler->display->display_options['fields']['block']['id'] = 'block';
  $handler->display->display_options['fields']['block']['table'] = 'views';
  $handler->display->display_options['fields']['block']['field'] = 'block';
  $handler->display->display_options['fields']['block']['label'] = '';
  $handler->display->display_options['fields']['block']['exclude'] = TRUE;
  $handler->display->display_options['fields']['block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['block']['block_to_insert'] = 'user:login';
  $handler->display->display_options['fields']['block']['title'] = '<none>';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="front-page-container">
  [block]
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'islandora:8';
  $handler->display->display_options['block_description'] = 'Front Page Owl Slideshow Image Cache';
  $translatables['front_page_slideshow'] = array(
    t('Master'),
    t('Front Page Slideshow'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="front-page-container">
  [block]
  <div class="page-data">
    <input id="front_page_container_LI_x" type="checkbox" />
    <h4><label class="accordion" for="front_page_container_LI_x">Shown: </label></h4>
    <div class="page-data--inner">
      <div class="title"><h2>[dc.title]</h2></div>
      <div class="description">[dc.description]</div>
    </div>
  </div>
</div>'),
    t('Block'),
    t('Front Page Owl Slideshow'),
    t('Full Screen Front Page Slideshow'),
    t('A variant of the front page slideshow, built to leverage islandora imagecache.'),
    t('<div class="front-page-container">
  [block]
</div>'),
    t('Front Page Owl Slideshow Image Cache'),
  );
  $export['front_page_slideshow'] = $view;

  return $export;
}
