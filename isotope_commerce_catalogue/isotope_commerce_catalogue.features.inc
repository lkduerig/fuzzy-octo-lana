<?php
/**
 * @file
 * isotope_commerce_catalogue.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function isotope_commerce_catalogue_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function isotope_commerce_catalogue_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function isotope_commerce_catalogue_node_info() {
  $items = array(
    'product_display' => array(
      'name' => t('Product display'),
      'base' => 'node_content',
      'description' => t('Use <em>product displays</em> to present Add to Cart form for products to your customers.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
