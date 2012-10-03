<?php
/**
 * @file
 * bibliotouris_book.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bibliotouris_book_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'menu-menu-navigation-custom' => array(
      'delta' => 'menu-navigation-custom',
      'module' => 'menu',
    ),
    'system-navigation' => array(
      'delta' => 'navigation',
      'module' => 'system',
    ),
    'views--exp-view_all_books-page' => array(
      'delta' => '-exp-view_all_books-page',
      'module' => 'views',
    ),
  );

  // bartik
  $theme = array();

  $theme['menu-menu-navigation-custom'] = array(
    'module' => 'menu',
    'delta' => 'menu-navigation-custom',
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

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '',
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

  $export['theme']['bartik'] = $theme;

  // bibliotheme
  $theme = array();

  $theme['menu-menu-navigation-custom'] = array(
    'module' => 'menu',
    'delta' => 'menu-navigation-custom',
    'theme' => 'bibliotheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'bibliotheme',
    'status' => 0,
    'weight' => '-6',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '',
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

  $export['theme']['bibliotheme'] = $theme;

  // seven
  $theme = array();

  $theme['menu-menu-navigation-custom'] = array(
    'module' => 'menu',
    'delta' => 'menu-navigation-custom',
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

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '',
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

  $export['theme']['seven'] = $theme;

  // zen
  $theme = array();

  $theme['menu-menu-navigation-custom'] = array(
    'module' => 'menu',
    'delta' => 'menu-navigation-custom',
    'theme' => 'zen',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'zen',
    'status' => 0,
    'weight' => '-6',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-view_all_books-page'] = array(
    'module' => 'views',
    'delta' => '-exp-view_all_books-page',
    'theme' => 'zen',
    'status' => '1',
    'weight' => '-13',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'view-all-books',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['zen'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
