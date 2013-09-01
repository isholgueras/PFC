<?php
/**
 * @file
 * pfc_controller.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pfc_controller_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'toda_la_web';
  $context->description = '';
  $context->tag = 'PFC';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'pfc_messages-messages_form' => array(
          'module' => 'pfc_messages',
          'delta' => 'messages_form',
          'region' => 'full_sidebar',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('PFC');
  $export['toda_la_web'] = $context;

  return $export;
}
