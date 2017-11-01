<?php
/**
 * @file
 * toolshed_ctypes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function toolshed_ctypes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function toolshed_ctypes_node_info() {
  $items = array(
    'conference_presentation' => array(
      'name' => t('Conference Presentation'),
      'base' => 'node_content',
      'description' => t('Presentation and other materials from Provincial and regional conferences'),
      'has_title' => '1',
      'title_label' => t('Presentation Title'),
      'help' => t('Please be aware that any content uploaded to the Library Toolshed will be shared using a Creative Commons Attribution-Non Commercial 3.0 Unported License. This means that anyone downloading content from the Library Toolshed will be free to modify any resources. 

You are able to upload the following document types: .doc, .docx, .ppt, .pptx, .pdf, .txt. You are also able to embed YouTube and Vimeo videos. 
When uploading content, please do not include any personal information in the resource [e.g. screen shots of account information]. '),
    ),
    'program_info' => array(
      'name' => t('Program Info'),
      'base' => 'node_content',
      'description' => t('Use this form to add information about programs at your library which others may want to replicate'),
      'has_title' => '1',
      'title_label' => t('Title of Program'),
      'help' => t('Please be aware that any content uploaded to the Library Toolshed will be shared using a Creative Commons Attribution-Non Commercial 3.0 Unported License. This means that anyone downloading content from the Library Toolshed will be free to modify any resources. 

You are able to upload the following document types: .doc, .docx, .ppt, .pptx, .pdf, .txt as well as images in the format of .gif, .png, .jpg or .tif. You are also able to embed YouTube and Vimeo videos. 

When uploading content, please do not include any personal information in the resource [e.g. screen shots of account information]. '),
    ),
    'toolshed_blog_post' => array(
      'name' => t('Toolshed Blog Post'),
      'base' => 'node_content',
      'description' => t('Blog posts for Library toolshed to get pushed out to Library community member to drive traffic back to Library Toolshed.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'training_resource' => array(
      'name' => t('Training Resource'),
      'base' => 'node_content',
      'description' => t('The records for all training resources available in the Library Toolshed including word, .pdf, video links etc....'),
      'has_title' => '1',
      'title_label' => t('Training Resource Title'),
      'help' => t('Please be aware that any content uploaded to the Library Toolshed will be shared using a Creative Commons Attribution-Non Commercial 3.0 Unported License. This means that anyone downloading content from the Library Toolshed will be free to modify any resources. 

You are able to upload the following document types: .doc, .docx, .ppt, .pptx, .pdf, .txt. You are also able to embed YouTube and Vimeo videos. 
When uploading content, please do not include any personal information in the resource [e.g. screen shots of account information]. '),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
