<?php
/**
 * @file
 * escuela_digital_tienda_b_sica.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function escuela_digital_tienda_b_sica_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-tipo-de-producto.
  $menus['menu-tipo-de-producto'] = array(
    'menu_name' => 'menu-tipo-de-producto',
    'title' => 'Tipo de producto',
    'description' => 'Este menú recrea el vocabulario Tipo de producto.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Este menú recrea el vocabulario Tipo de producto.');
  t('Tipo de producto');


  return $menus;
}
