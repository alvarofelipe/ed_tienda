<?php
/**
 * @file
 * escuela_digital_tienda_b_sica.features.hierarchical_select.inc
 */

/**
 * Implements hook_hierarchical_select_default_configs().
 */
function escuela_digital_tienda_b_sica_hierarchical_select_default_configs() {
$configs = array();
$config = array(
  'config_id'       => 'taxonomy-3',
  'save_lineage'    => 1,
  'enforce_deepest' => 1,
  'entity_count'    => 0,
  'require_entity'  => 0,
  'resizable'       => 1,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      0 => '',
    ),
  ),
  'dropbox' => array(
    'status'    => 0,
    'title'     => 'Todas las selecciones',
    'limit'     => 0,
    'reset_hs'  => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
      0 => '',
    ),
    'allowed_levels' => array(
      0 => 1,
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 0,
  ),
);

$configs['taxonomy-3'] = $config;
return $configs;
}
