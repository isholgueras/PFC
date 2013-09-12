<?php
/**
 * @file
 * pfc_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pfc_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
