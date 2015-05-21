<?php
/**
 * @file
 * contenttype_diensten.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function contenttype_diensten_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function contenttype_diensten_node_info() {
  $items = array(
    'diensten' => array(
      'name' => t('Diensten'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
