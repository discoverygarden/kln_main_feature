<?php
/**
 * @file
 * solrmetadataconfigs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function solrmetadataconfigs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_metadata_display';
  $strongarm->value = 'islandora_solr_metadata';
  $export['islandora_metadata_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_metadata_dedup_values';
  $strongarm->value = 1;
  $export['islandora_solr_metadata_dedup_values'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_metadata_omit_empty_values';
  $strongarm->value = 1;
  $export['islandora_solr_metadata_omit_empty_values'] = $strongarm;

  return $export;
}
