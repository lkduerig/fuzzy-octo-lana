<?php
/**
 * @file
 * pfizerbasic.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pfizerbasic_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|page|default';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar area',
    'weight' => '2',
    'children' => array(
      0 => 'field_link_list',
      1 => 'field_image_list',
      2 => 'field_node',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'Sidebar area',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sidebar|node|page|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|page|form';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar area',
    'weight' => '1',
    'children' => array(
      0 => 'field_link_list',
      1 => 'field_image_list',
      2 => 'field_node',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sidebar area',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_sidebar|node|page|form'] = $field_group;

  return $export;
}
