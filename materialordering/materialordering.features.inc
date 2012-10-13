<?php
  /**
   * @file
   * materialordering.features.inc
   */

  /**
   * Implements hook_views_api().
   */
  function materialordering_views_api()
  {
    list($module, $api) = func_get_args();
    if ($module == "views" && $api == "views_default") {
      return array("version" => "3.0");
    }
  }

  /**
   * Implements hook_node_info().
   */
  function materialordering_node_info()
  {
    $items = array(
      'materials' => array(
        'name' => t('Materiaalit'),
        'base' => 'node_content',
        'description' => '',
        'has_title' => '1',
        'title_label' => t('Title'),
        'help' => '',
      ),
    );
    return $items;
  }
