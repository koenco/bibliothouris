<?php
/**
 * @file
 * bibliotouris_book.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bibliotouris_book_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'view_all_books';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View all books';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View all books';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_isbn' => 'field_isbn',
    'title' => 'title',
    'field_author_last_name' => 'field_author_last_name',
    'field_author_first_name' => 'field_author_first_name',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_isbn' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author Last name */
  $handler->display->display_options['fields']['field_author_last_name']['id'] = 'field_author_last_name';
  $handler->display->display_options['fields']['field_author_last_name']['table'] = 'field_data_field_author_last_name';
  $handler->display->display_options['fields']['field_author_last_name']['field'] = 'field_author_last_name';
  $handler->display->display_options['fields']['field_author_last_name']['label'] = 'Last name';
  $handler->display->display_options['fields']['field_author_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Author First name */
  $handler->display->display_options['fields']['field_author_first_name']['id'] = 'field_author_first_name';
  $handler->display->display_options['fields']['field_author_first_name']['table'] = 'field_data_field_author_first_name';
  $handler->display->display_options['fields']['field_author_first_name']['field'] = 'field_author_first_name';
  $handler->display->display_options['fields']['field_author_first_name']['label'] = 'First name';
  $handler->display->display_options['fields']['field_author_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
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
    'book' => 'book',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: ISBN (field_isbn) */
  $handler->display->display_options['filters']['field_isbn_value']['id'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['filters']['field_isbn_value']['field'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_isbn_value']['group'] = 1;
  $handler->display->display_options['filters']['field_isbn_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_isbn_value']['expose']['operator_id'] = 'field_isbn_value_op';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['label'] = 'ISBN';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['operator'] = 'field_isbn_value_op';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['identifier'] = 'field_isbn_value';
  /* Filter criterion: Content: Author First name (field_author_first_name) */
  $handler->display->display_options['filters']['field_author_first_name_value']['id'] = 'field_author_first_name_value';
  $handler->display->display_options['filters']['field_author_first_name_value']['table'] = 'field_data_field_author_first_name';
  $handler->display->display_options['filters']['field_author_first_name_value']['field'] = 'field_author_first_name_value';
  $handler->display->display_options['filters']['field_author_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_author_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_author_first_name_value']['expose']['operator_id'] = 'field_author_first_name_value_op';
  $handler->display->display_options['filters']['field_author_first_name_value']['expose']['label'] = 'Author First name';
  $handler->display->display_options['filters']['field_author_first_name_value']['expose']['operator'] = 'field_author_first_name_value_op';
  $handler->display->display_options['filters']['field_author_first_name_value']['expose']['identifier'] = 'field_author_first_name_value';
  /* Filter criterion: Content: Author Last name (field_author_last_name) */
  $handler->display->display_options['filters']['field_author_last_name_value']['id'] = 'field_author_last_name_value';
  $handler->display->display_options['filters']['field_author_last_name_value']['table'] = 'field_data_field_author_last_name';
  $handler->display->display_options['filters']['field_author_last_name_value']['field'] = 'field_author_last_name_value';
  $handler->display->display_options['filters']['field_author_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_author_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_author_last_name_value']['expose']['operator_id'] = 'field_author_last_name_value_op';
  $handler->display->display_options['filters']['field_author_last_name_value']['expose']['label'] = 'Author Last name';
  $handler->display->display_options['filters']['field_author_last_name_value']['expose']['operator'] = 'field_author_last_name_value_op';
  $handler->display->display_options['filters']['field_author_last_name_value']['expose']['identifier'] = 'field_author_last_name_value';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'view-all-books';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'View all books';
  $export['view_all_books'] = $view;

  return $export;
}
