<?php
/**
 * @file
 * bibliothouris_views.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function bibliothouris_views_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-main-menu-custom.
  $menus['menu-main-menu-custom'] = array(
    'menu_name' => 'menu-main-menu-custom',
    'title' => 'Main menu custom',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu custom');


  return $menus;
}
