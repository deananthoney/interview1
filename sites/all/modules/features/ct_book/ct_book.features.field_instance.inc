<?php
/**
 * @file
 * ct_book.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ct_book_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-book-field_description'
  $field_instances['node-book-field_description'] = array(
    'bundle' => 'book',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A description of the book with a Summary (Short Descrition) field.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A description of the book with a Summary (Short Descrition) field.');
  t('Description');

  return $field_instances;
}
