<?php
/**
 * @file
 * bibliothouris_views.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bibliothouris_views_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'menu-menu-main-menu-custom' => array(
      'delta' => 'menu-main-menu-custom',
      'module' => 'menu',
    ),
    'search-form' => array(
      'delta' => 'form',
      'module' => 'search',
    ),
    'system-main' => array(
      'delta' => 'main',
      'module' => 'system',
    ),
    'system-powered-by' => array(
      'delta' => 'powered-by',
      'module' => 'system',
    ),
    'views--exp-show_all_members-page' => array(
      'delta' => '-exp-show_all_members-page',
      'module' => 'views',
    ),
    'views--exp-view_all_books-page' => array(
      'delta' => '-exp-view_all_books-page',
      'module' => 'views',
    ),
    'views-borrowed_books-block' => array(
      'delta' => 'borrowed_books-block',
      'module' => 'views',
    ),
    'views-enter_a_new_book-block' => array(
      'delta' => 'enter_a_new_book-block',
      'module' => 'views',
    ),
    'views-top_10_borrowed_books-block' => array(
      'delta' => 'top_10_borrowed_books-block',
      'module' => 'views',
    ),
    'views-top_10_viewed_books-block' => array(
      'delta' => 'top_10_viewed_books-block',
      'module' => 'views',
    ),
  );

  // bartik
  $theme = array();

  $theme['menu-menu-main-menu-custom'] = array(
    'module' => 'menu',
    'delta' => 'menu-main-menu-custom',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '-1',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '10',
    'region' => 'footer',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-show_all_members-page'] = array(
    'module' => 'views',
    'delta' => '-exp-show_all_members-page',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'show-all-members',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-view_all_books-page'] = array(
    'module' => 'views',
    'delta' => '-exp-view_all_books-page',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'view-all-books',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-borrowed_books-block'] = array(
    'module' => 'views',
    'delta' => 'borrowed_books-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'user/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-enter_a_new_book-block'] = array(
    'module' => 'views',
    'delta' => 'enter_a_new_book-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'user/%user',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-top_10_borrowed_books-block'] = array(
    'module' => 'views',
    'delta' => 'top_10_borrowed_books-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-top_10_viewed_books-block'] = array(
    'module' => 'views',
    'delta' => 'top_10_viewed_books-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['bartik'] = $theme;

  // bibliotheme
  $theme = array();

  $theme['menu-menu-main-menu-custom'] = array(
    'module' => 'menu',
    'delta' => 'menu-main-menu-custom',
    'theme' => 'bibliotheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'bibliotheme',
    'status' => 0,
    'weight' => '-1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'bibliotheme',
    'status' => '1',
    'weight' => '-12',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'bibliotheme',
    'status' => 0,
    'weight' => '-6',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-show_all_members-page'] = array(
    'module' => 'views',
    'delta' => '-exp-show_all_members-page',
    'theme' => 'bibliotheme',
    'status' => '1',
    'weight' => '-14',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'show-all-members',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-view_all_books-page'] = array(
    'module' => 'views',
    'delta' => '-exp-view_all_books-page',
    'theme' => 'bibliotheme',
    'status' => '1',
    'weight' => '-13',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'view-all-books',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-borrowed_books-block'] = array(
    'module' => 'views',
    'delta' => 'borrowed_books-block',
    'theme' => 'bibliotheme',
    'status' => '1',
    'weight' => '-11',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'user/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-enter_a_new_book-block'] = array(
    'module' => 'views',
    'delta' => 'enter_a_new_book-block',
    'theme' => 'bibliotheme',
    'status' => '1',
    'weight' => '-10',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'user/%user',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-top_10_borrowed_books-block'] = array(
    'module' => 'views',
    'delta' => 'top_10_borrowed_books-block',
    'theme' => 'bibliotheme',
    'status' => '1',
    'weight' => '-8',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-top_10_viewed_books-block'] = array(
    'module' => 'views',
    'delta' => 'top_10_viewed_books-block',
    'theme' => 'bibliotheme',
    'status' => '1',
    'weight' => '-9',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['bibliotheme'] = $theme;

  // seven
  $theme = array();

  $theme['menu-menu-main-menu-custom'] = array(
    'module' => 'menu',
    'delta' => 'menu-main-menu-custom',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '-10',
    'region' => 'dashboard_sidebar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '10',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-show_all_members-page'] = array(
    'module' => 'views',
    'delta' => '-exp-show_all_members-page',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'show-all-members',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-view_all_books-page'] = array(
    'module' => 'views',
    'delta' => '-exp-view_all_books-page',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'view-all-books',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-borrowed_books-block'] = array(
    'module' => 'views',
    'delta' => 'borrowed_books-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'user/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-enter_a_new_book-block'] = array(
    'module' => 'views',
    'delta' => 'enter_a_new_book-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'user/%user',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-top_10_borrowed_books-block'] = array(
    'module' => 'views',
    'delta' => 'top_10_borrowed_books-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-top_10_viewed_books-block'] = array(
    'module' => 'views',
    'delta' => 'top_10_viewed_books-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
