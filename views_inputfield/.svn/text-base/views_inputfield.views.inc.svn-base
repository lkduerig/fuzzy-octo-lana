<?php

/**
 * Implementation of hook_views_data_alter().
 */
function views_inputfield_views_data_alter(&$data) {
  foreach (entity_get_info() as $entity_type => $info) {
    if (isset($info['base table']) && isset($data[$info['base table']])) {
      $data[$info['base table']]['views_inputfield'] = array(
        'title' => t('Form input field'),
        'help' => t('Provide a textfield to be used in a form.'),
        'real field' => $info['entity keys']['id'],
        'field' => array(
          'handler' => 'views_inputfield_handler_field',
          'click sortable' => FALSE,
        ),
      );
    }
  }
}

/**
 * Implementation of hook_views_handlers().
 */
function views_inputfield_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'views_inputfield'),
    ),
    'handlers' => array(
      'views_inputfield_handler_field' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
}
