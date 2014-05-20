<?php
/**
 * @file
 * escuela_digital_tienda_b_sica.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function escuela_digital_tienda_b_sica_taxonomy_default_vocabularies() {
  return array(
    'size' => array(
      'name' => 'Tamaño o talla',
      'machine_name' => 'size',
      'description' => 'Sirve para clasificar los productos por tamaño o talla',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tipo_de_producto' => array(
      'name' => 'Tipo de producto',
      'machine_name' => 'tipo_de_producto',
      'description' => 'Vocabulario para categorizar productos',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
