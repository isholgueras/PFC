<?php
/**
 * @file
 * pfc_noticias.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pfc_noticias_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pfc_noticias_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pfc_noticias_node_info() {
  $items = array(
    'noticias' => array(
      'name' => t('Noticias'),
      'base' => 'node_content',
      'description' => t('Noticias será un tipo de contenido para mostrar contenidos de actualidad.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
