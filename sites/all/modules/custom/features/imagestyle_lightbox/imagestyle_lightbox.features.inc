<?php
/**
 * @file
 * imagestyle_lightbox.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function imagestyle_lightbox_image_default_styles() {
  $styles = array();

  // Exported image style: dienst.
  $styles['dienst'] = array(
    'label' => 'Dienst',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: lightbox.
  $styles['lightbox'] = array(
    'label' => 'Lightbox',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 258,
          'height' => 135,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
