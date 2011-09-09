<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function standard_pages_and_forms_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-links:node/157
  $menu_links['menu-footer-links:node/157'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => 'node/157',
    'router_path' => 'node/%',
    'link_title' => 'Terms and Conditions',
    'options' => array(
      'attributes' => array(
        'title' => 'Terms and Conditions',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-footer-links:node/158
  $menu_links['menu-footer-links:node/158'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => 'node/158',
    'router_path' => 'node/%',
    'link_title' => 'Privacy policy',
    'options' => array(
      'attributes' => array(
        'title' => 'Privacy policy',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-footer-links:node/159
  $menu_links['menu-footer-links:node/159'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => 'node/159',
    'router_path' => 'node/%',
    'link_title' => 'Disclaimer',
    'options' => array(
      'attributes' => array(
        'title' => 'Disclaimer',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:node/156
  $menu_links['primary-links:node/156'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/156',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => 'About Us',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:node/160
  $menu_links['primary-links:node/160'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/160',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact Us',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Contact Us');
  t('Disclaimer');
  t('Privacy policy');
  t('Terms and Conditions');


  return $menu_links;
}
