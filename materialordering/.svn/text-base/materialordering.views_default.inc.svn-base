<?php
/**
 * @file
 * materialordering.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function materialordering_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'materials';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Materials';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'materialordering-form';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    7 => '7',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_thumbnail' => 'field_thumbnail',
    'title' => 'body',
    'body' => 'body',
    'field_download' => 'field_download',
    'views_inputfield' => 'views_inputfield',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_thumbnail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_download' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_inputfield' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_thumbnail']['id'] = 'field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['table'] = 'field_data_field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['field'] = 'field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_thumbnail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_thumbnail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_thumbnail']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_thumbnail']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Form input field */
  $handler->display->display_options['fields']['views_inputfield']['id'] = 'views_inputfield';
  $handler->display->display_options['fields']['views_inputfield']['table'] = 'node';
  $handler->display->display_options['fields']['views_inputfield']['field'] = 'views_inputfield';
  $handler->display->display_options['fields']['views_inputfield']['label'] = 'Quantity';
  $handler->display->display_options['fields']['views_inputfield']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_inputfield']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_inputfield']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_inputfield']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_inputfield']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_inputfield']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_inputfield']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_inputfield']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_inputfield']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_inputfield']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_inputfield']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_inputfield']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_inputfield']['element_class'] = '[title]';
  $handler->display->display_options['fields']['views_inputfield']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['views_inputfield']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_inputfield']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_inputfield']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_inputfield']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_inputfield']['inputfield']['size'] = '2';
  $handler->display->display_options['fields']['views_inputfield']['inputfield']['maxlength'] = '128';
  $handler->display->display_options['fields']['views_inputfield']['inputfield']['description'] = '(max. 10)';
  /* Field: Content: Download file */
  $handler->display->display_options['fields']['field_download']['id'] = 'field_download';
  $handler->display->display_options['fields']['field_download']['table'] = 'field_data_field_download';
  $handler->display->display_options['fields']['field_download']['field'] = 'field_download';
  $handler->display->display_options['fields']['field_download']['label'] = '';
  $handler->display->display_options['fields']['field_download']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_download']['alter']['text'] = '<div class=\'file\'><a href=\'field_download\'>Download</a></div>';
  $handler->display->display_options['fields']['field_download']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_download']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_download']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_download']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_download']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_download']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_download']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_download']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_download']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_download']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'file_default',
  );
  $handler->display->display_options['fields']['field_download']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'materials' => 'materials',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tilaa';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tilaa';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['materials'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Quantity'),
    t('<div class=\'file\'><a href=\'field_download\'>Download</a></div>'),
    t('All'),
    t('Page'),
  );
  $export['materials'] = $view;

  return $export;
}
