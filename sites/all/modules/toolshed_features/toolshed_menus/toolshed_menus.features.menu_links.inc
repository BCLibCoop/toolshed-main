<?php
/**
 * @file
 * toolshed_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function toolshed_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:about.
  $menu_links['main-menu_about:about'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_about:about',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_add-a-conference-presentation:node/add/conference-presentation.
  $menu_links['main-menu_add-a-conference-presentation:node/add/conference-presentation'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/conference-presentation',
    'router_path' => 'node/add/conference-presentation',
    'link_title' => 'Add a Conference Presentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_add-a-conference-presentation:node/add/conference-presentation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_add-content:<nolink>',
  );
  // Exported menu link: main-menu_add-a-policy:node/add/policy.
  $menu_links['main-menu_add-a-policy:node/add/policy'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/policy',
    'router_path' => 'node/add/policy',
    'link_title' => 'Add a Policy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_add-a-policy:node/add/policy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_add-content:<nolink>',
  );
  // Exported menu link: main-menu_add-a-program:node/add/program-info.
  $menu_links['main-menu_add-a-program:node/add/program-info'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/program-info',
    'router_path' => 'node/add/program-info',
    'link_title' => 'Add a Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_add-a-program:node/add/program-info',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_add-content:<nolink>',
  );
  // Exported menu link: main-menu_add-content:<nolink>.
  $menu_links['main-menu_add-content:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Add content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_add-content:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_add-resource:node/add/training-resource.
  $menu_links['main-menu_add-resource:node/add/training-resource'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/training-resource',
    'router_path' => 'node/add/training-resource',
    'link_title' => 'Add Resource',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_add-resource:node/add/training-resource',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_add-content:<nolink>',
  );
  // Exported menu link: main-menu_all-policies:browse/policies.
  $menu_links['main-menu_all-policies:browse/policies'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'browse/policies',
    'router_path' => 'browse/policies',
    'link_title' => 'All Policies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_all-policies:browse/policies',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_browse:<nolink>',
  );
  // Exported menu link: main-menu_all-presentations:browse/presentations.
  $menu_links['main-menu_all-presentations:browse/presentations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'browse/presentations',
    'router_path' => 'browse/presentations',
    'link_title' => 'All Presentations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_all-presentations:browse/presentations',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_browse:<nolink>',
  );
  // Exported menu link: main-menu_all-programs:browse/programs.
  $menu_links['main-menu_all-programs:browse/programs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'browse/programs',
    'router_path' => 'browse/programs',
    'link_title' => 'All Programs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_all-programs:browse/programs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_browse:<nolink>',
  );
  // Exported menu link: main-menu_all-resources:browse/resources.
  $menu_links['main-menu_all-resources:browse/resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'browse/resources',
    'router_path' => 'browse/resources',
    'link_title' => 'All Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_all-resources:browse/resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_browse:<nolink>',
  );
  // Exported menu link: main-menu_browse:<nolink>.
  $menu_links['main-menu_browse:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Browse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_browse:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_log-in:user/login.
  $menu_links['main-menu_log-in:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log In',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_log-in:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
  );
  // Exported menu link: main-menu_log-out:user/logout.
  $menu_links['main-menu_log-out:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log Out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_log-out:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
  );
  // Exported menu link: main-menu_toolshed-blog:toolshed-blog.
  $menu_links['main-menu_toolshed-blog:toolshed-blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'toolshed-blog',
    'router_path' => 'toolshed-blog',
    'link_title' => 'Toolshed Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_toolshed-blog:toolshed-blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Add Resource');
  t('Add a Conference Presentation');
  t('Add a Policy');
  t('Add a Program');
  t('Add content');
  t('All Policies');
  t('All Presentations');
  t('All Programs');
  t('All Resources');
  t('Browse');
  t('Log In');
  t('Log Out');
  t('Toolshed Blog');

  return $menu_links;
}
