<?php
/**
 * @file
 * pfizerbasic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pfizerbasic_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function pfizerbasic_image_default_styles() {
  $styles = array();

  // Exported image style: sidebar
  $styles['sidebar'] = array(
    'name' => 'sidebar',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '210',
          'height' => '160',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function pfizerbasic_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Perussivu'),
      'base' => 'node_content',
      'description' => t('Käytä <em>perussivuja</em> staattiseen sisältöösi kuten esimerkiksi "Tietoa meistä" sivu.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
