<?php
/**
 * @file
 * escuela_digital_tienda_b_sica.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function escuela_digital_tienda_b_sica_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_precio_producto|node|producto|default';
  $field_group->group_name = 'group_precio_producto';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'producto';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_producto_fila_1';
  $field_group->data = array(
    'label' => 'Precio de producto',
    'weight' => '4',
    'children' => array(
      0 => 'field_producto',
      1 => 'product:commerce_price',
      2 => 'easy_social_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Precio de producto',
      'instance_settings' => array(
        'classes' => 'large-4 columns',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_precio_producto|node|producto|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_producto_fila_1|node|producto|default';
  $field_group->group_name = 'group_producto_fila_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'producto';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Producto fila 1',
    'weight' => '0',
    'children' => array(
      0 => 'group_producto_imagen',
      1 => 'group_precio_producto',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Producto fila 1',
      'instance_settings' => array(
        'classes' => 'row fila-1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_producto_fila_1|node|producto|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_producto_fila_2|node|producto|default';
  $field_group->group_name = 'group_producto_fila_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'producto';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Producto fila 2',
    'weight' => '1',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Producto fila 2',
      'instance_settings' => array(
        'classes' => 'row fila-2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_producto_fila_2|node|producto|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_producto_imagen|node|producto|default';
  $field_group->group_name = 'group_producto_imagen';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'producto';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_producto_fila_1';
  $field_group->data = array(
    'label' => 'Imagen de producto',
    'weight' => '3',
    'children' => array(
      0 => 'product:field_imagen_de_producto',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Imagen de producto',
      'instance_settings' => array(
        'classes' => 'large-8 columns',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_producto_imagen|node|producto|default'] = $field_group;

  return $export;
}
