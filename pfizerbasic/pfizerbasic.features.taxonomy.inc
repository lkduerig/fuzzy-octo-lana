<?php
/**
 * @file
 * pfizerbasic.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pfizerbasic_taxonomy_default_vocabularies() {
  return array(
    'tags' => array(
      'name' => 'Tagit',
      'machine_name' => 'tags',
      'description' => 'Käytä tageja samantyyppisten artikkeleiden luokittelussa kategorioihin.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
