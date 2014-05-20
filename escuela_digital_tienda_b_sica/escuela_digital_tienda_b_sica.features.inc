<?php
/**
 * @file
 * escuela_digital_tienda_b_sica.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function escuela_digital_tienda_b_sica_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function escuela_digital_tienda_b_sica_node_info() {
  $items = array(
    'producto' => array(
      'name' => t('Producto'),
      'base' => 'node_content',
      'description' => t('Publicar productos en la tienda'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
  );
  return $items;
}
