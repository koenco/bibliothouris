<?php
/**
 * @file
 * bibliothouris_views.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bibliothouris_views_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-main-menu-custom:<front>
  $menu_links['menu-main-menu-custom:<front>'] = array(
    'menu_name' => 'menu-main-menu-custom',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-main-menu-custom:view-all-books
  $menu_links['menu-main-menu-custom:view-all-books'] = array(
    'menu_name' => 'menu-main-menu-custom',
    'link_path' => 'view-all-books',
    'router_path' => 'view-all-books',
    'link_title' => 'Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-navigation-custom:overdue-books
  $menu_links['menu-navigation-custom:overdue-books'] = array(
    'menu_name' => 'menu-navigation-custom',
    'link_path' => 'overdue-books',
    'router_path' => 'overdue-books',
    'link_title' => 'Overdue books',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-navigation-custom:show-all-members
  $menu_links['menu-navigation-custom:show-all-members'] = array(
    'menu_name' => 'menu-navigation-custom',
    'link_path' => 'show-all-members',
    'router_path' => 'show-all-members',
    'link_title' => 'Show all members',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Books');
  t('Home');
  t('Overdue books');
  t('Show all members');


  return $menu_links;
}
