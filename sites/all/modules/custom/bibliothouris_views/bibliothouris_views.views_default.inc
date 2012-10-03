<?php
/**
 * @file
 * bibliothouris_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bibliothouris_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'borrowed_books';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Borrowed books';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Borrowed books';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Book (field_book) */
  $handler->display->display_options['relationships']['field_book_nid']['id'] = 'field_book_nid';
  $handler->display->display_options['relationships']['field_book_nid']['table'] = 'field_data_field_book';
  $handler->display->display_options['relationships']['field_book_nid']['field'] = 'field_book_nid';
  $handler->display->display_options['relationships']['field_book_nid']['delta'] = '-1';
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['relationship'] = 'field_book_nid';
  /* Field: Content: Book */
  $handler->display->display_options['fields']['field_book']['id'] = 'field_book';
  $handler->display->display_options['fields']['field_book']['table'] = 'field_data_field_book';
  $handler->display->display_options['fields']['field_book']['field'] = 'field_book';
  /* Field: Content: Author First name */
  $handler->display->display_options['fields']['field_author_first_name']['id'] = 'field_author_first_name';
  $handler->display->display_options['fields']['field_author_first_name']['table'] = 'field_data_field_author_first_name';
  $handler->display->display_options['fields']['field_author_first_name']['field'] = 'field_author_first_name';
  $handler->display->display_options['fields']['field_author_first_name']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_author_first_name']['exclude'] = TRUE;
  /* Field: Content: Author Last name */
  $handler->display->display_options['fields']['field_author_last_name']['id'] = 'field_author_last_name';
  $handler->display->display_options['fields']['field_author_last_name']['table'] = 'field_data_field_author_last_name';
  $handler->display->display_options['fields']['field_author_last_name']['field'] = 'field_author_last_name';
  $handler->display->display_options['fields']['field_author_last_name']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_author_last_name']['label'] = 'Author';
  $handler->display->display_options['fields']['field_author_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_author_last_name']['alter']['text'] = '[field_author_last_name] [field_author_first_name]';
  /* Field: Content: Start date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = 'Lend date';
  $handler->display->display_options['fields']['field_start_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Return date */
  $handler->display->display_options['fields']['field_return_date']['id'] = 'field_return_date';
  $handler->display->display_options['fields']['field_return_date']['table'] = 'field_data_field_return_date';
  $handler->display->display_options['fields']['field_return_date']['field'] = 'field_return_date';
  $handler->display->display_options['fields']['field_return_date']['label'] = 'Due date';
  $handler->display->display_options['fields']['field_return_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Fine */
  $handler->display->display_options['fields']['field_fine']['id'] = 'field_fine';
  $handler->display->display_options['fields']['field_fine']['table'] = 'field_data_field_fine';
  $handler->display->display_options['fields']['field_fine']['field'] = 'field_fine';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'X';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'bringbookback/[nid]/[bib:uid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: User (field_user) */
  $handler->display->display_options['arguments']['field_user_uid']['id'] = 'field_user_uid';
  $handler->display->display_options['arguments']['field_user_uid']['table'] = 'field_data_field_user';
  $handler->display->display_options['arguments']['field_user_uid']['field'] = 'field_user_uid';
  $handler->display->display_options['arguments']['field_user_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_user_uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_user_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lended_book' => 'lended_book',
  );
  /* Filter criterion: Content: Return date (field_return_date) */
  $handler->display->display_options['filters']['field_return_date_value']['id'] = 'field_return_date_value';
  $handler->display->display_options['filters']['field_return_date_value']['table'] = 'field_data_field_return_date';
  $handler->display->display_options['filters']['field_return_date_value']['field'] = 'field_return_date_value';
  $handler->display->display_options['filters']['field_return_date_value']['operator'] = 'empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['borrowed_books'] = $view;

  $view = new view();
  $view->name = 'enter_a_new_book';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Enter a new book';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Enter a new book';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author First name */
  $handler->display->display_options['fields']['field_author_first_name']['id'] = 'field_author_first_name';
  $handler->display->display_options['fields']['field_author_first_name']['table'] = 'field_data_field_author_first_name';
  $handler->display->display_options['fields']['field_author_first_name']['field'] = 'field_author_first_name';
  $handler->display->display_options['fields']['field_author_first_name']['exclude'] = TRUE;
  /* Field: Content: Author Last name */
  $handler->display->display_options['fields']['field_author_last_name']['id'] = 'field_author_last_name';
  $handler->display->display_options['fields']['field_author_last_name']['table'] = 'field_data_field_author_last_name';
  $handler->display->display_options['fields']['field_author_last_name']['field'] = 'field_author_last_name';
  $handler->display->display_options['fields']['field_author_last_name']['label'] = 'Author';
  $handler->display->display_options['fields']['field_author_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_author_last_name']['alter']['text'] = '[field_author_last_name] [field_author_first_name]';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '+';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'lendabook/[nid]/[bib:uid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Content: ISBN (field_isbn) */
  $handler->display->display_options['filters']['field_isbn_value']['id'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['filters']['field_isbn_value']['field'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_isbn_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_isbn_value']['expose']['operator_id'] = 'field_isbn_value_op';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['label'] = 'ISBN';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['operator'] = 'field_isbn_value_op';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['identifier'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['enter_a_new_book'] = $view;

  $view = new view();
  $view->name = 'overdue_books';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Overdue books';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Overdue books';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Book (field_book) */
  $handler->display->display_options['relationships']['field_book_nid']['id'] = 'field_book_nid';
  $handler->display->display_options['relationships']['field_book_nid']['table'] = 'field_data_field_book';
  $handler->display->display_options['relationships']['field_book_nid']['field'] = 'field_book_nid';
  $handler->display->display_options['relationships']['field_book_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_book_nid']['delta'] = '-1';
  /* Relationship: Content: User (field_user) */
  $handler->display->display_options['relationships']['field_user_uid']['id'] = 'field_user_uid';
  $handler->display->display_options['relationships']['field_user_uid']['table'] = 'field_data_field_user';
  $handler->display->display_options['relationships']['field_user_uid']['field'] = 'field_user_uid';
  $handler->display->display_options['relationships']['field_user_uid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_user_uid']['delta'] = '-1';
  /* Relationship: Content: User (field_user) */
  $handler->display->display_options['relationships']['field_user_uid_1']['id'] = 'field_user_uid_1';
  $handler->display->display_options['relationships']['field_user_uid_1']['table'] = 'field_data_field_user';
  $handler->display->display_options['relationships']['field_user_uid_1']['field'] = 'field_user_uid';
  $handler->display->display_options['relationships']['field_user_uid_1']['label'] = 'field_user2';
  $handler->display->display_options['relationships']['field_user_uid_1']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_user_uid_1']['delta'] = '-1';
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['relationship'] = 'field_book_nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_book_nid';
  /* Field: Content: Author First name */
  $handler->display->display_options['fields']['field_author_first_name']['id'] = 'field_author_first_name';
  $handler->display->display_options['fields']['field_author_first_name']['table'] = 'field_data_field_author_first_name';
  $handler->display->display_options['fields']['field_author_first_name']['field'] = 'field_author_first_name';
  $handler->display->display_options['fields']['field_author_first_name']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_author_first_name']['exclude'] = TRUE;
  /* Field: Content: Author Last name */
  $handler->display->display_options['fields']['field_author_last_name']['id'] = 'field_author_last_name';
  $handler->display->display_options['fields']['field_author_last_name']['table'] = 'field_data_field_author_last_name';
  $handler->display->display_options['fields']['field_author_last_name']['field'] = 'field_author_last_name';
  $handler->display->display_options['fields']['field_author_last_name']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_author_last_name']['label'] = 'Author';
  $handler->display->display_options['fields']['field_author_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_author_last_name']['alter']['text'] = '[field_author_last_name] [field_author_first_name]';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_user_uid';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_user_uid';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_user_uid';
  $handler->display->display_options['fields']['uid']['label'] = 'User';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_last_name] [field_first_name] ([uid])';
  /* Field: Content: Start date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Return date */
  $handler->display->display_options['fields']['field_return_date']['id'] = 'field_return_date';
  $handler->display->display_options['fields']['field_return_date']['table'] = 'field_data_field_return_date';
  $handler->display->display_options['fields']['field_return_date']['field'] = 'field_return_date';
  $handler->display->display_options['fields']['field_return_date']['label'] = 'Due date';
  $handler->display->display_options['fields']['field_return_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Fine */
  $handler->display->display_options['fields']['field_fine']['id'] = 'field_fine';
  $handler->display->display_options['fields']['field_fine']['table'] = 'field_data_field_fine';
  $handler->display->display_options['fields']['field_fine']['field'] = 'field_fine';
  $handler->display->display_options['fields']['field_fine']['label'] = 'Overdue (in days)';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_book_nid';
  /* Filter criterion: Content: Return date (field_return_date) */
  $handler->display->display_options['filters']['field_return_date_value']['id'] = 'field_return_date_value';
  $handler->display->display_options['filters']['field_return_date_value']['table'] = 'field_data_field_return_date';
  $handler->display->display_options['filters']['field_return_date_value']['field'] = 'field_return_date_value';
  $handler->display->display_options['filters']['field_return_date_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_return_date_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lended_book' => 'lended_book',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'overdue-books';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Overdue books';
  $handler->display->display_options['menu']['name'] = 'menu-navigation-custom';
  $export['overdue_books'] = $view;

  $view = new view();
  $view->name = 'show_all_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Show all members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Show all members';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'field_last_name' => 'field_last_name',
    'field_first_name' => 'field_first_name',
    'field_date_of_birth' => 'field_date_of_birth',
    'field_street_number' => 'field_street_number',
    'field_city' => 'field_city',
  );
  $handler->display->display_options['style_options']['default'] = 'uid';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_of_birth' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_street_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'ID';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: User: Date of birth */
  $handler->display->display_options['fields']['field_date_of_birth']['id'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['table'] = 'field_data_field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['field'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Street + number */
  $handler->display->display_options['fields']['field_street_number']['id'] = 'field_street_number';
  $handler->display->display_options['fields']['field_street_number']['table'] = 'field_data_field_street_number';
  $handler->display->display_options['fields']['field_street_number']['field'] = 'field_street_number';
  $handler->display->display_options['fields']['field_street_number']['label'] = 'Street';
  /* Field: User: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: First name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: User: Last name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid_raw']['expose']['operator_id'] = 'uid_raw_op';
  $handler->display->display_options['filters']['uid_raw']['expose']['label'] = 'ID';
  $handler->display->display_options['filters']['uid_raw']['expose']['operator'] = 'uid_raw_op';
  $handler->display->display_options['filters']['uid_raw']['expose']['identifier'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'show-all-members';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Show all members';
  $handler->display->display_options['menu']['name'] = 'menu-navigation-custom';
  $export['show_all_members'] = $view;

  $view = new view();
  $view->name = 'top_10_borrowed_books';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Top 10 borrowed books';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Top 10 borrowed books';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'teaser-grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Content: Book (field_book) */
  $handler->display->display_options['relationships']['field_book_nid']['id'] = 'field_book_nid';
  $handler->display->display_options['relationships']['field_book_nid']['table'] = 'field_data_field_book';
  $handler->display->display_options['relationships']['field_book_nid']['field'] = 'field_book_nid';
  $handler->display->display_options['relationships']['field_book_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['top_10_borrowed_books'] = $view;

  $view = new view();
  $view->name = 'top_10_viewed_books';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Top 10 viewed books';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Top 10 viewed books';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'teaser-grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['top_10_viewed_books'] = $view;

  return $export;
}
