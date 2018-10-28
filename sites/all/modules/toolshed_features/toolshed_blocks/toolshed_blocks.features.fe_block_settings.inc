<?php
/**
 * @file
 * toolshed_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function toolshed_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-account_link'] = array(
    'cache' => -1,
    'css_class' => 'login-link account',
    'custom' => 0,
    'machine_name' => 'account_link',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'toolshed' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'toolshed',
        'weight' => -45,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-copyright'] = array(
    'cache' => -1,
    'css_class' => 'copyright',
    'custom' => 0,
    'machine_name' => 'copyright',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'toolshed' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'toolshed',
        'weight' => -42,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-creative_commons'] = array(
    'cache' => -1,
    'css_class' => 'creativec',
    'custom' => 0,
    'machine_name' => 'creative_commons',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'toolshed' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'toolshed',
        'weight' => -43,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-custom_search_block'] = array(
    'cache' => -1,
    'css_class' => 'search-bar',
    'custom' => 0,
    'machine_name' => 'custom_search_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'toolshed' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'toolshed',
        'weight' => -39,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-login_link'] = array(
    'cache' => -1,
    'css_class' => 'login-link',
    'custom' => 0,
    'machine_name' => 'login_link',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'toolshed' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'toolshed',
        'weight' => -27,
      ),
    ),
    'title' => 'Login link',
    'visibility' => 0,
  );

  $export['block-sponsor_logos'] = array(
    'cache' => -1,
    'css_class' => 'brought-to',
    'custom' => 0,
    'machine_name' => 'sponsor_logos',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'toolshed' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'toolshed',
        'weight' => -44,
      ),
    ),
    'title' => 'Brought to you by: ',
    'visibility' => 0,
  );

  $export['block-toolshed_logo'] = array(
    'cache' => -1,
    'css_class' => 'front-logo',
    'custom' => 0,
    'machine_name' => 'toolshed_logo',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'toolshed' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'toolshed',
        'weight' => -40,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['superfish-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'toolshed' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'toolshed',
        'weight' => -38,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['superfish-2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 2,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'toolshed' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'toolshed',
        'weight' => -7,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 3,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'toolshed' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'toolshed',
        'weight' => -6,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 4,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'toolshed' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'toolshed',
        'weight' => -5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-browse-page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-browse-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'browse/programs',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'toolshed' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'toolshed',
        'weight' => -44,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views--exp-browse-page_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-browse-page_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'browse/resources',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'toolshed' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'toolshed',
        'weight' => -43,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views--exp-browse-page_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-browse-page_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'browse/presentations',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'toolshed' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'toolshed',
        'weight' => -42,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views--exp-browse-policies'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-browse-policies',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'browse/policies',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'toolshed' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'toolshed',
        'weight' => -41,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views--exp-frontpage-page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-frontpage-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'toolshed' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'toolshed',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
