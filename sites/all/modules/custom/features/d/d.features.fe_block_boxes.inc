<?php
/**
 * @file
 * d.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function d_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contactgegevens';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'contact';
  $fe_block_boxes->body = '<p>Muddy Watersstraat 2<br />
4337WK Middelburg</p>

<p>info@lissenburgdaktechniek.nl<br />
&nbsp;06 43 23 33 13</p>
';

  $export['contact'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'header block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'headerblock';
  $fe_block_boxes->body = '<ul>
	<li>Vertrouwd adres voor daktechniek in Zeeland</li>
	<li>Jarenlange ervaring</li>
	<li>Vrijblijvende offerte op aanvraag</li>
</ul>
';

  $export['headerblock'] = $fe_block_boxes;

  return $export;
}
