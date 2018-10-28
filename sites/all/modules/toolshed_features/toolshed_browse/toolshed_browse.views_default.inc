<?php
/**
 * @file
 * toolshed_browse.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function toolshed_browse_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'browse';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_node_index';
  $view->human_name = 'Browse';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Browse All Policies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Your search did not return any results. Please <a href="/solr-test/">try again</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Primary Audience */
  $handler->display->display_options['fields']['field_primary_audience']['id'] = 'field_primary_audience';
  $handler->display->display_options['fields']['field_primary_audience']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_primary_audience']['field'] = 'field_primary_audience';
  $handler->display->display_options['fields']['field_primary_audience']['delta_offset'] = '0';
  /* Field: Indexed Node: Length of program session */
  $handler->display->display_options['fields']['field_length_of_program_session2']['id'] = 'field_length_of_program_session2';
  $handler->display->display_options['fields']['field_length_of_program_session2']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_length_of_program_session2']['field'] = 'field_length_of_program_session2';
  /* Field: Indexed Node: Frequency */
  $handler->display->display_options['fields']['field_session_frequency']['id'] = 'field_session_frequency';
  $handler->display->display_options['fields']['field_session_frequency']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_session_frequency']['field'] = 'field_session_frequency';
  /* Field: Indexed Node: Submitting Library */
  $handler->display->display_options['fields']['field_source_library_region']['id'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_source_library_region']['field'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_source_library_region']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_source_library_region']['bypass_access'] = 0;
  /* Field: Indexed Node: Audience */
  $handler->display->display_options['fields']['field_policy_audience']['id'] = 'field_policy_audience';
  $handler->display->display_options['fields']['field_policy_audience']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_policy_audience']['field'] = 'field_policy_audience';
  $handler->display->display_options['fields']['field_policy_audience']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_policy_audience']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_policy_audience']['bypass_access'] = 0;
  /* Field: Indexed Node: Policy Focused On */
  $handler->display->display_options['fields']['field_audience']['id'] = 'field_audience';
  $handler->display->display_options['fields']['field_audience']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_audience']['field'] = 'field_audience';
  $handler->display->display_options['fields']['field_audience']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_audience']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_audience']['bypass_access'] = 0;
  /* Field: Indexed Node: Policy Type */
  $handler->display->display_options['fields']['field_policy_type']['id'] = 'field_policy_type';
  $handler->display->display_options['fields']['field_policy_type']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_policy_type']['field'] = 'field_policy_type';
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program_info' => 'program_info',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Filter by Keyword';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'author:field_first_name' => 'author:field_first_name',
    'author:field_last_name' => 'author:field_last_name',
    'field_community_partners_' => 'field_community_partners_',
    'field_conference_name:name' => 'field_conference_name:name',
    'field_conference_name:parent:name' => 'field_conference_name:parent:name',
    'field_funding_grants_foundations' => 'field_funding_grants_foundations',
    'field_guest_speakers' => 'field_guest_speakers',
    'field_highlights' => 'field_highlights',
    'field_presenter_s_' => 'field_presenter_s_',
    'field_program_description' => 'field_program_description',
    'field_program_goals' => 'field_program_goals',
    'field_project_description' => 'field_project_description',
    'field_resources_required_materia' => 'field_resources_required_materia',
    'field_source_library_region:name' => 'field_source_library_region:name',
    'field_source_library_region:parents_all:name' => 'field_source_library_region:parents_all:name',
    'title' => 'title',
  );

  /* Display: Programs */
  $handler = $view->new_display('page', 'Programs', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse All Programs';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'url' => 'url',
    'title' => 'title',
    'field_primary_audience' => 'field_primary_audience',
    'field_length_of_program_session2' => 'field_length_of_program_session2',
    'field_session_frequency' => 'field_session_frequency',
    'field_prog_rating' => 'field_prog_rating',
    'field_source_library_region' => 'field_source_library_region',
    'field_authot' => 'field_authot',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_primary_audience' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_length_of_program_session2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_frequency' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_prog_rating' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_source_library_region' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_authot' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Primary Audience */
  $handler->display->display_options['fields']['field_primary_audience']['id'] = 'field_primary_audience';
  $handler->display->display_options['fields']['field_primary_audience']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_primary_audience']['field'] = 'field_primary_audience';
  $handler->display->display_options['fields']['field_primary_audience']['delta_offset'] = '0';
  /* Field: Indexed Node: Length of program session */
  $handler->display->display_options['fields']['field_length_of_program_session2']['id'] = 'field_length_of_program_session2';
  $handler->display->display_options['fields']['field_length_of_program_session2']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_length_of_program_session2']['field'] = 'field_length_of_program_session2';
  /* Field: Indexed Node: Frequency */
  $handler->display->display_options['fields']['field_session_frequency']['id'] = 'field_session_frequency';
  $handler->display->display_options['fields']['field_session_frequency']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_session_frequency']['field'] = 'field_session_frequency';
  /* Field: Indexed Node: Rating */
  $handler->display->display_options['fields']['field_prog_rating']['id'] = 'field_prog_rating';
  $handler->display->display_options['fields']['field_prog_rating']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_prog_rating']['field'] = 'field_prog_rating';
  $handler->display->display_options['fields']['field_prog_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_prog_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Indexed Node: Submitting Library */
  $handler->display->display_options['fields']['field_source_library_region']['id'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_source_library_region']['field'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['label'] = 'Source Library';
  $handler->display->display_options['fields']['field_source_library_region']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_source_library_region']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_source_library_region']['bypass_access'] = 0;
  /* Field: Indexed Node: Author */
  $handler->display->display_options['fields']['field_authot']['id'] = 'field_authot';
  $handler->display->display_options['fields']['field_authot']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_authot']['field'] = 'field_authot';
  $handler->display->display_options['path'] = 'browse/programs';

  /* Display: Training Resources */
  $handler = $view->new_display('page', 'Training Resources', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse All Training Resources';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'url' => 'url',
    'title' => 'title',
    'field_training_topic' => 'field_training_topic',
    'field_rating' => 'field_rating',
    'field_resource_type' => 'field_resource_type',
    'created' => 'created',
    'field_source_library_region' => 'field_source_library_region',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_topic' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rating' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_source_library_region' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Training Topic */
  $handler->display->display_options['fields']['field_training_topic']['id'] = 'field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_training_topic']['field'] = 'field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['delta_offset'] = '0';
  /* Field: Indexed Node: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Indexed Node: Resource Type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = 'Type';
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Age';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: Submitting Library */
  $handler->display->display_options['fields']['field_source_library_region']['id'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_source_library_region']['field'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_source_library_region']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_source_library_region']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_resource' => 'training_resource',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Filter by Keyword';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'author:field_first_name' => 'author:field_first_name',
    'author:field_last_name' => 'author:field_last_name',
    'field_community_partners_' => 'field_community_partners_',
    'field_conference_name:name' => 'field_conference_name:name',
    'field_conference_name:parent:name' => 'field_conference_name:parent:name',
    'field_funding_grants_foundations' => 'field_funding_grants_foundations',
    'field_guest_speakers' => 'field_guest_speakers',
    'field_highlights' => 'field_highlights',
    'field_presenter_s_' => 'field_presenter_s_',
    'field_program_description' => 'field_program_description',
    'field_program_goals' => 'field_program_goals',
    'field_project_description' => 'field_project_description',
    'field_resources_required_materia' => 'field_resources_required_materia',
    'field_source_library_region:name' => 'field_source_library_region:name',
    'field_source_library_region:parents_all:name' => 'field_source_library_region:parents_all:name',
    'title' => 'title',
  );
  $handler->display->display_options['path'] = 'browse/resources';

  /* Display: Conference Presentations */
  $handler = $view->new_display('page', 'Conference Presentations', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse Conference Presentations';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'url' => 'url',
    'title' => 'title',
    'field_authot' => 'field_authot',
    'field_training_topic' => 'field_training_topic',
    'field_source_library_region' => 'field_source_library_region',
    'field_conference_name' => 'field_conference_name',
    'field_conference_year' => 'field_conference_year',
  );
  $handler->display->display_options['style_options']['default'] = 'field_conference_year';
  $handler->display->display_options['style_options']['info'] = array(
    'url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_authot' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_topic' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_source_library_region' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conference_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conference_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Author */
  $handler->display->display_options['fields']['field_authot']['id'] = 'field_authot';
  $handler->display->display_options['fields']['field_authot']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_authot']['field'] = 'field_authot';
  $handler->display->display_options['fields']['field_authot']['label'] = 'Presenter';
  /* Field: Indexed Node: Training Topic */
  $handler->display->display_options['fields']['field_training_topic']['id'] = 'field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_training_topic']['field'] = 'field_training_topic';
  /* Field: Indexed Node: Submitting Library */
  $handler->display->display_options['fields']['field_source_library_region']['id'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_source_library_region']['field'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_source_library_region']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_source_library_region']['bypass_access'] = 0;
  /* Field: Indexed Node: Conference */
  $handler->display->display_options['fields']['field_conference_name']['id'] = 'field_conference_name';
  $handler->display->display_options['fields']['field_conference_name']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_conference_name']['field'] = 'field_conference_name';
  $handler->display->display_options['fields']['field_conference_name']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_conference_name']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_conference_name']['bypass_access'] = 0;
  /* Field: Indexed Node: Conference Year */
  $handler->display->display_options['fields']['field_conference_year']['id'] = 'field_conference_year';
  $handler->display->display_options['fields']['field_conference_year']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_conference_year']['field'] = 'field_conference_year';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_presentation' => 'conference_presentation',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Filter by Keyword';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'author:field_first_name' => 'author:field_first_name',
    'author:field_last_name' => 'author:field_last_name',
    'field_community_partners_' => 'field_community_partners_',
    'field_conference_name:name' => 'field_conference_name:name',
    'field_conference_name:parent:name' => 'field_conference_name:parent:name',
    'field_funding_grants_foundations' => 'field_funding_grants_foundations',
    'field_guest_speakers' => 'field_guest_speakers',
    'field_highlights' => 'field_highlights',
    'field_presenter_s_' => 'field_presenter_s_',
    'field_program_description' => 'field_program_description',
    'field_program_goals' => 'field_program_goals',
    'field_project_description' => 'field_project_description',
    'field_resources_required_materia' => 'field_resources_required_materia',
    'field_source_library_region:name' => 'field_source_library_region:name',
    'field_source_library_region:parents_all:name' => 'field_source_library_region:parents_all:name',
    'title' => 'title',
  );
  $handler->display->display_options['path'] = 'browse/presentations';

  /* Display: Policies */
  $handler = $view->new_display('page', 'Policies', 'policies');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Policy Description';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Indexed Node: Policy Type */
  $handler->display->display_options['fields']['field_policy_type']['id'] = 'field_policy_type';
  $handler->display->display_options['fields']['field_policy_type']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_policy_type']['field'] = 'field_policy_type';
  $handler->display->display_options['fields']['field_policy_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_policy_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_policy_type']['bypass_access'] = 0;
  /* Field: Indexed Node: Policy Focused On */
  $handler->display->display_options['fields']['field_audience']['id'] = 'field_audience';
  $handler->display->display_options['fields']['field_audience']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_audience']['field'] = 'field_audience';
  $handler->display->display_options['fields']['field_audience']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_audience']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_audience']['bypass_access'] = 0;
  /* Field: Indexed Node: Audience */
  $handler->display->display_options['fields']['field_policy_audience']['id'] = 'field_policy_audience';
  $handler->display->display_options['fields']['field_policy_audience']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_policy_audience']['field'] = 'field_policy_audience';
  $handler->display->display_options['fields']['field_policy_audience']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_policy_audience']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_policy_audience']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'policy' => 'policy',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Filter by Keyword';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'author:field_first_name' => 'author:field_first_name',
    'author:field_last_name' => 'author:field_last_name',
    'field_policy_author' => 'field_policy_author',
    'field_source_library_region:name' => 'field_source_library_region:name',
    'field_source_library_region:parents_all:name' => 'field_source_library_region:parents_all:name',
    'title' => 'title',
  );
  $handler->display->display_options['path'] = 'browse/policies';
  $export['browse'] = $view;

  return $export;
}
