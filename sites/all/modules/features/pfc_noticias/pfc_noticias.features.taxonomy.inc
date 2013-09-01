<?php
/**
 * @file
 * pfc_noticias.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pfc_noticias_taxonomy_default_vocabularies() {
  return array(
    'categorias' => array(
      'name' => 'categorías',
      'machine_name' => 'categorias',
      'description' => 'categorías que relacionarán contenidos',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
