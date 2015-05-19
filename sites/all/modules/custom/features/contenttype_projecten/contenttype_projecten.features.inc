<?php
/**
 * @file
 * contenttype_projecten.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function contenttype_projecten_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function contenttype_projecten_node_info() {
  $items = array(
    'projecten' => array(
      'name' => t('Projecten'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('<none>'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
