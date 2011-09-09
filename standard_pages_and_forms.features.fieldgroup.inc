<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function standard_pages_and_forms_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_media
  $groups['page-group_media'] = array(
    'group_type' => 'standard',
    'type_name' => 'page',
    'group_name' => 'group_media',
    'label' => 'Slideshows, images, videos and galleries',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_vertical_tab',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-3',
    'fields' => array(
      '0' => 'field_add_slideshow',
      '1' => 'field_video',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Slideshows, images, videos and galleries');

  return $groups;
}
