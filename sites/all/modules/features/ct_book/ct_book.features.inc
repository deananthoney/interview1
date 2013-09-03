<?php
/**
 * @file
 * ct_book.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ct_book_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Book'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Book Title'),
      'help' => '',
    ),
  );
  return $items;
}
