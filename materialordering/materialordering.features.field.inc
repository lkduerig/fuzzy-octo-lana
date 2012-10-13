<?php
  /**
   * @file
   * materialordering.features.field.inc
   */

  /**
   * Implements hook_field_default_fields().
   */
  function materialordering_field_default_fields()
  {
    $fields = array();

    // Exported field: 'node-materials-body'
    $fields['node-materials-body'] = array(
      'field_config' => array(
        'active' => '1',
        'cardinality' => '1',
        'deleted' => '0',
        'entity_types' => array(
          0 => 'node',
        ),
        'field_name' => 'body',
        'foreign keys' => array(
          'format' => array(
            'columns' => array(
              'format' => 'format',
            ),
            'table' => 'filter_format',
          ),
        ),
        'indexes' => array(
          'format' => array(
            0 => 'format',
          ),
        ),
        'module' => 'text',
        'settings' => array(),
        'translatable' => '0',
        'type' => 'text_with_summary',
      ),
      'field_instance' => array(
        'bundle' => 'materials',
        'default_value' => NULL,
        'deleted' => '0',
        'description' => '',
        'display' => array(
          'cck_blocks' => array(
            'label' => 'above',
            'settings' => array(),
            'type' => 'hidden',
            'weight' => 0,
          ),
          'default' => array(
            'label' => 'above',
            'module' => 'text',
            'settings' => array(),
            'type' => 'text_default',
            'weight' => '1',
          ),
          'teaser' => array(
            'label' => 'hidden',
            'module' => 'text',
            'settings' => array(
              'trim_length' => 600,
            ),
            'type' => 'text_summary_or_trimmed',
            'weight' => 0,
          ),
        ),
        'entity_type' => 'node',
        'field_name' => 'body',
        'label' => 'Description',
        'required' => 1,
        'settings' => array(
          'display_summary' => 1,
          'text_processing' => '1',
          'user_register_form' => FALSE,
        ),
        'widget' => array(
          'active' => 1,
          'module' => 'text',
          'settings' => array(
            'rows' => '20',
            'summary_rows' => 5,
          ),
          'type' => 'text_textarea_with_summary',
          'weight' => '31',
        ),
      ),
    );

    // Exported field: 'node-materials-field_download'
    $fields['node-materials-field_download'] = array(
      'field_config' => array(
        'active' => '1',
        'cardinality' => '1',
        'deleted' => '0',
        'entity_types' => array(),
        'field_name' => 'field_download',
        'foreign keys' => array(
          'fid' => array(
            'columns' => array(
              'fid' => 'fid',
            ),
            'table' => 'file_managed',
          ),
        ),
        'global_block_settings' => '1',
        'indexes' => array(
          'fid' => array(
            0 => 'fid',
          ),
        ),
        'module' => 'file',
        'settings' => array(
          'display_default' => 0,
          'display_field' => 0,
          'uri_scheme' => 'public',
        ),
        'translatable' => '0',
        'type' => 'file',
      ),
      'field_instance' => array(
        'bundle' => 'materials',
        'deleted' => '0',
        'description' => '',
        'display' => array(
          'cck_blocks' => array(
            'label' => 'above',
            'settings' => array(),
            'type' => 'hidden',
            'weight' => 0,
          ),
          'default' => array(
            'label' => 'above',
            'module' => 'file',
            'settings' => array(),
            'type' => 'file_default',
            'weight' => '2',
          ),
          'teaser' => array(
            'label' => 'above',
            'settings' => array(),
            'type' => 'hidden',
            'weight' => 0,
          ),
        ),
        'entity_type' => 'node',
        'field_name' => 'field_download',
        'label' => 'Download file',
        'required' => 0,
        'settings' => array(
          'description_field' => 0,
          'file_directory' => 'file',
          'file_extensions' => 'txt pdf',
          'max_filesize' => '',
          'user_register_form' => FALSE,
        ),
        'widget' => array(
          'active' => 1,
          'module' => 'file',
          'settings' => array(
            'filefield_sources' => array(
              'filefield_sources' => array(),
              'source_attach' => array(
                'absolute' => 0,
                'attach_mode' => 'move',
                'path' => 'file_attach',
              ),
              'source_reference' => array(
                'autocomplete' => '0',
              ),
            ),
            'progress_indicator' => 'throbber',
          ),
          'type' => 'file_generic',
          'weight' => '33',
        ),
      ),
    );

    // Exported field: 'node-materials-field_thumbnail'
    $fields['node-materials-field_thumbnail'] = array(
      'field_config' => array(
        'active' => '1',
        'cardinality' => '1',
        'deleted' => '0',
        'entity_types' => array(),
        'field_name' => 'field_thumbnail',
        'foreign keys' => array(
          'fid' => array(
            'columns' => array(
              'fid' => 'fid',
            ),
            'table' => 'file_managed',
          ),
        ),
        'global_block_settings' => '1',
        'indexes' => array(
          'fid' => array(
            0 => 'fid',
          ),
        ),
        'module' => 'image',
        'settings' => array(
          'default_image' => 0,
          'uri_scheme' => 'public',
        ),
        'translatable' => '0',
        'type' => 'image',
      ),
      'field_instance' => array(
        'bundle' => 'materials',
        'deleted' => '0',
        'description' => '',
        'display' => array(
          'cck_blocks' => array(
            'label' => 'above',
            'settings' => array(),
            'type' => 'hidden',
            'weight' => 0,
          ),
          'default' => array(
            'label' => 'above',
            'module' => 'image',
            'settings' => array(
              'image_link' => '',
              'image_style' => '',
            ),
            'type' => 'image',
            'weight' => '0',
          ),
          'teaser' => array(
            'label' => 'above',
            'settings' => array(),
            'type' => 'hidden',
            'weight' => 0,
          ),
        ),
        'entity_type' => 'node',
        'field_name' => 'field_thumbnail',
        'label' => 'Thumbnail',
        'required' => 0,
        'settings' => array(
          'alt_field' => 0,
          'file_directory' => 'image/materials',
          'file_extensions' => 'png gif jpg jpeg',
          'max_filesize' => '',
          'max_resolution' => '',
          'min_resolution' => '',
          'title_field' => 0,
          'user_register_form' => FALSE,
        ),
        'widget' => array(
          'active' => 1,
          'module' => 'image',
          'settings' => array(
            'filefield_sources' => array(
              'filefield_sources' => array(),
              'source_attach' => array(
                'absolute' => 0,
                'attach_mode' => 'move',
                'path' => 'file_attach',
              ),
              'source_reference' => array(
                'autocomplete' => '0',
              ),
            ),
            'preview_image_style' => 'thumbnail',
            'progress_indicator' => 'throbber',
          ),
          'type' => 'image_image',
          'weight' => '32',
        ),
      ),
    );

    // Translatables
    // Included for use with string extractors like potx.
    t('Description');
    t('Download file');
    t('Thumbnail');

    return $fields;
  }
