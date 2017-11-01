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
    'weight' => -43,
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
    'weight' => -47,
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
  // Exported menu link: main-menu_all-presentations:conference-presentations.
  $menu_links['main-menu_all-presentations:conference-presentations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'conference-presentations',
    'router_path' => 'conference-presentations',
    'link_title' => 'All Presentations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_all-presentations:conference-presentations',
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
  // Exported menu link: main-menu_all-programs:all-programs.
  $menu_links['main-menu_all-programs:all-programs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'all-programs',
    'router_path' => 'all-programs',
    'link_title' => 'All Programs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_all-programs:all-programs',
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
  // Exported menu link: main-menu_all-resources:allresources.
  $menu_links['main-menu_all-resources:allresources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'allresources',
    'router_path' => 'allresources',
    'link_title' => 'All Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_all-resources:allresources',
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
  // Exported menu link: main-menu_blog:toolshed-blog.
  $menu_links['main-menu_blog:toolshed-blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'toolshed-blog',
    'router_path' => 'toolshed-blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_blog:toolshed-blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
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
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_guides:guides.
  $menu_links['main-menu_guides:guides'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'guides',
    'router_path' => 'guides',
    'link_title' => 'Guides',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_guides:guides',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_browse:<nolink>',
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_new-tal-online:node/264.
  $menu_links['main-menu_new-tal-online:node/264'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/264',
    'router_path' => 'node/%',
    'link_title' => 'New TAL Online',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_new-tal-online:node/264',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_q--a:questions.
  $menu_links['main-menu_q--a:questions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'questions',
    'router_path' => 'questions',
    'link_title' => 'Q & A',
    'options' => array(
      'attributes' => array(
        'title' => 'Have a question? Get and answer.',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_q--a:questions',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_regional-projects:regional-projects .
  $menu_links['main-menu_regional-projects:regional-projects '] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'regional-projects ',
    'router_path' => 'regional-projects',
    'link_title' => 'Regional Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_regional-projects:regional-projects ',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_summer-reading-contest-2016:http://librarytoolshed.ca/content/library-toolshed-src-2016-contest.
  $menu_links['main-menu_summer-reading-contest-2016:http://librarytoolshed.ca/content/library-toolshed-src-2016-contest'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://librarytoolshed.ca/content/library-toolshed-src-2016-contest',
    'router_path' => '',
    'link_title' => 'Summer Reading Contest 2016',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_summer-reading-contest-2016:http://librarytoolshed.ca/content/library-toolshed-src-2016-contest',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_videos:videos.
  $menu_links['main-menu_videos:videos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'videos',
    'router_path' => 'videos',
    'link_title' => 'Videos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_videos:videos',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_browse:<nolink>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Add Resource');
  t('Add a Conference Presentation');
  t('Add a Program');
  t('Add content');
  t('All Presentations');
  t('All Programs');
  t('All Resources');
  t('Blog');
  t('Browse');
  t('Guides');
  t('Home');
  t('New TAL Online');
  t('Q & A');
  t('Regional Projects');
  t('Summer Reading Contest 2016');
  t('Videos');

  return $menu_links;
}
