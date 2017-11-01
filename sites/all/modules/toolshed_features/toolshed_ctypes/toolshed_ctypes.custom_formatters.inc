<?php
/**
 * @file
 * toolshed_ctypes.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function toolshed_ctypes_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'clone_of_example_token_image';
  $formatter->label = 'File as linked image';
  $formatter->description = '';
  $formatter->mode = 'token';
  $formatter->field_types = 'file';
  $formatter->code = '<a href="[node:field_program_photos]"><img src="[node:field_program_photos]" height="220px" width="220px"></a>';
  $formatter->fapi = '';
  $export['clone_of_example_token_image'] = $formatter;

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'file_type';
  $formatter->label = 'File Type';
  $formatter->description = '';
  $formatter->mode = 'token';
  $formatter->field_types = 'file';
  $formatter->code = '<a href="[file:url]" class="file-download">[file:extension] File</a>';
  $formatter->fapi = '';
  $export['file_type'] = $formatter;

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'more_resources';
  $formatter->label = 'More Resources';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'taxonomy_term_reference';
  $formatter->code = '$term = taxonomy_term_load($variables[\'#items\'][0][\'tid\']);
$term_uri = taxonomy_term_uri($term);
$term_title = taxonomy_term_title($term);
$term_path = $term_uri[\'path\'];
$link = l(\'More Resources From \' . $term_title,$term_path);
echo $link;';
  $formatter->fapi = '';
  $export['more_resources'] = $formatter;

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'web_link';
  $formatter->label = 'Web Link';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'url';
  $formatter->code = 'echo \'<a href="\' . $variables[\'#items\'][0][\'value\'] . \'" class="ext" target="_blank">Web Resource</a>\';';
  $formatter->fapi = '';
  $export['web_link'] = $formatter;

  return $export;
}
