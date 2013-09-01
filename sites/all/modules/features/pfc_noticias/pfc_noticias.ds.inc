<?php
/**
 * @file
 * pfc_noticias.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pfc_noticias_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|noticias|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'noticias';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|noticias|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pfc_noticias_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|noticias|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'noticias';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'two_col_teasered';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'field_noticia_imagen',
      ),
      'right' => array(
        2 => 'body',
      ),
      'bottom' => array(
        3 => 'field_noticia_categorias',
      ),
    ),
    'fields' => array(
      'title' => 'top',
      'field_noticia_imagen' => 'left',
      'body' => 'right',
      'field_noticia_categorias' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|noticias|teaser'] = $ds_layout;

  return $export;
}
