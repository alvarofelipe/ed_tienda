<?php
/**
 * @file
 * escuela_digital_tienda_b_sica.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function escuela_digital_tienda_b_sica_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function escuela_digital_tienda_b_sica_image_default_styles() {
  $styles = array();

  // Exported image style: micro.
  $styles['micro'] = array(
    'name' => 'micro',
    'label' => 'micro',
    'effects' => array(
      5 => array(
        'label' => 'Escala',
        'help' => 'El escalado mantiene la relación de proporciones de la imagen original. Si sólo se especifica una dimensión, la otra se calculará.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 80,
          'height' => 80,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
