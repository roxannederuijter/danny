<?php
/**
 * @file
 * bean_banner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bean_banner_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
