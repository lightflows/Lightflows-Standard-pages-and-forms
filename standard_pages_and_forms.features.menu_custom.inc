<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function standard_pages_and_forms_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-links
  $menus['menu-footer-links'] = array(
    'menu_name' => 'menu-footer-links',
    'title' => 'Footer links',
    'description' => 'A collection of useful links for the footer region of the page',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A collection of useful links for the footer region of the page');
  t('Footer links');


  return $menus;
}
