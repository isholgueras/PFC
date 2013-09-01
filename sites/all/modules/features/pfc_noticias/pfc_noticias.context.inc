<?php
/**
 * @file
 * pfc_noticias.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pfc_noticias_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'noticias';
  $context->description = 'Este contexto es para todo lo que tenga que ver con noticias';
  $context->tag = 'Contenido';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'noticias' => 'noticias',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'noticias' => 'noticias',
        'noticias/*' => 'noticias/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-noticias-block' => array(
          'module' => 'views',
          'delta' => 'noticias-block',
          'region' => 'first_sidebar',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contenido');
  t('Este contexto es para todo lo que tenga que ver con noticias');
  $export['noticias'] = $context;

  return $export;
}
