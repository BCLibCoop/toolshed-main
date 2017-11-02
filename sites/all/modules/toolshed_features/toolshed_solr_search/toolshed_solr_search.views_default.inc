<?php
/**
 * @file
 * toolshed_solr_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function toolshed_solr_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_source_library_region' => 'field_source_library_region',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There were no results for the provided query.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Presentation Topic */
  $handler->display->display_options['fields']['field_training_topic']['id'] = 'field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['table'] = 'field_data_field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['field'] = 'field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Age';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Field: Source Library */
  $handler->display->display_options['fields']['field_source_library_region']['id'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['field'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['label'] = 'Source Library Region';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_value']['id'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_value']['field'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_resource_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['operator_id'] = 'field_resource_type_value_op';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['operator'] = 'field_resource_type_value_op';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['identifier'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Presentation Topic (field_training_topic) */
  $handler->display->display_options['filters']['field_training_topic_value']['id'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['field_training_topic_value']['table'] = 'field_data_field_training_topic';
  $handler->display->display_options['filters']['field_training_topic_value']['field'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['field_training_topic_value']['group'] = 1;
  $handler->display->display_options['filters']['field_training_topic_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['operator_id'] = 'field_training_topic_value_op';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['operator'] = 'field_training_topic_value_op';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['identifier'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: library region */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['ui_name'] = 'library region';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    40 => '40',
    25 => '25',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';
  /* Filter criterion: ab_libraries */
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['id'] = 'field_source_library_region_tid_1';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['ui_name'] = 'ab_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['value'] = array(
    41 => '41',
    183 => '183',
    178 => '178',
    181 => '181',
    174 => '174',
    43 => '43',
    44 => '44',
    186 => '186',
    176 => '176',
    184 => '184',
    45 => '45',
    180 => '180',
    47 => '47',
    48 => '48',
    49 => '49',
    35 => '35',
    182 => '182',
    179 => '179',
    177 => '177',
    173 => '173',
    185 => '185',
    175 => '175',
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['operator_id'] = 'field_source_library_region_tid_1_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['operator'] = 'field_source_library_region_tid_1_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['identifier'] = 'tid_ab_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['hierarchy'] = 1;
  /* Filter criterion: bc_libraries */
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['id'] = 'field_source_library_region_tid_2';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['ui_name'] = 'bc_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['value'] = array(
    82 => '82',
    172 => '172',
    87 => '87',
    67 => '67',
    110 => '110',
    63 => '63',
    57 => '57',
    59 => '59',
    100 => '100',
    90 => '90',
    124 => '124',
    140 => '140',
    150 => '150',
    141 => '141',
    71 => '71',
    137 => '137',
    81 => '81',
    146 => '146',
    117 => '117',
    61 => '61',
    70 => '70',
    171 => '171',
    69 => '69',
    170 => '170',
    120 => '120',
    121 => '121',
    103 => '103',
    79 => '79',
    136 => '136',
    151 => '151',
    149 => '149',
    131 => '131',
    127 => '127',
    53 => '53',
    115 => '115',
    134 => '134',
    167 => '167',
    101 => '101',
    168 => '168',
    169 => '169',
    164 => '164',
    122 => '122',
    78 => '78',
    165 => '165',
    139 => '139',
    118 => '118',
    116 => '116',
    99 => '99',
    86 => '86',
    126 => '126',
    73 => '73',
    113 => '113',
    58 => '58',
    132 => '132',
    166 => '166',
    107 => '107',
    108 => '108',
    109 => '109',
    114 => '114',
    111 => '111',
    91 => '91',
    162 => '162',
    72 => '72',
    102 => '102',
    148 => '148',
    85 => '85',
    83 => '83',
    119 => '119',
    112 => '112',
    163 => '163',
    95 => '95',
    105 => '105',
    77 => '77',
    96 => '96',
    74 => '74',
    80 => '80',
    161 => '161',
    142 => '142',
    123 => '123',
    138 => '138',
    157 => '157',
    158 => '158',
    135 => '135',
    143 => '143',
    129 => '129',
    64 => '64',
    159 => '159',
    93 => '93',
    97 => '97',
    133 => '133',
    160 => '160',
    68 => '68',
    62 => '62',
    94 => '94',
    89 => '89',
    52 => '52',
    55 => '55',
    54 => '54',
    76 => '76',
    154 => '154',
    51 => '51',
    66 => '66',
    56 => '56',
    155 => '155',
    144 => '144',
    156 => '156',
    65 => '65',
    130 => '130',
    50 => '50',
    128 => '128',
    104 => '104',
    106 => '106',
    92 => '92',
    153 => '153',
    145 => '145',
    125 => '125',
    147 => '147',
    75 => '75',
    88 => '88',
    60 => '60',
    98 => '98',
    84 => '84',
    152 => '152',
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['operator_id'] = 'field_source_library_region_tid_2_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['operator'] = 'field_source_library_region_tid_2_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['identifier'] = 'tid_bc_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'keys' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'type' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'views_dependent_filter' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'views_dependent_filter_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'views_dependent_filter_2' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'term_node_tid_depth' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_source_library_region_tid_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_source_library_region_tid_2' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_source_library_region_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_source_library_region_tid_3' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_resource_type_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_training_topic_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_primary_audience_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_length_of_program_session2_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: site-search */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['ui_name'] = 'site-search';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_presentation' => 'conference_presentation',
    'program_info' => 'program_info',
    'training_resource' => 'training_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'field_content_type_selector';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Training Resource filter controller */
  $handler->display->display_options['filters']['views_dependent_filter']['id'] = 'views_dependent_filter';
  $handler->display->display_options['filters']['views_dependent_filter']['table'] = 'views';
  $handler->display->display_options['filters']['views_dependent_filter']['field'] = 'views_dependent_filter';
  $handler->display->display_options['filters']['views_dependent_filter']['ui_name'] = 'Training Resource filter controller';
  $handler->display->display_options['filters']['views_dependent_filter']['group'] = 1;
  $handler->display->display_options['filters']['views_dependent_filter']['controller_filter'] = 'type';
  $handler->display->display_options['filters']['views_dependent_filter']['controller_values'] = array(
    'training_resource' => 'training_resource',
    'answer' => 0,
    'article' => 0,
    'page' => 0,
    'booking_resource' => 0,
    'date' => 0,
    'home_page_news' => 0,
    'image' => 0,
    'main_page_slides' => 0,
    'new_tal_online_info' => 0,
    'program_info' => 0,
    'question' => 0,
    'agc_page_content' => 0,
    'regional_projects' => 0,
    'webform' => 0,
  );
  $handler->display->display_options['filters']['views_dependent_filter']['dependent_filters'] = array(
    'field_resource_type_value' => 'field_resource_type_value',
    'field_training_topic_value' => 'field_training_topic_value',
    'term_node_tid_depth' => 0,
    'field_source_library_region_tid_1' => 0,
    'field_source_library_region_tid_2' => 0,
    'field_primary_audience_value' => 0,
    'field_length_of_program_session2_value' => 0,
  );
  /* Filter criterion: Program Info filter controller */
  $handler->display->display_options['filters']['views_dependent_filter_1']['id'] = 'views_dependent_filter_1';
  $handler->display->display_options['filters']['views_dependent_filter_1']['table'] = 'views';
  $handler->display->display_options['filters']['views_dependent_filter_1']['field'] = 'views_dependent_filter';
  $handler->display->display_options['filters']['views_dependent_filter_1']['ui_name'] = 'Program Info filter controller';
  $handler->display->display_options['filters']['views_dependent_filter_1']['group'] = 1;
  $handler->display->display_options['filters']['views_dependent_filter_1']['controller_filter'] = 'type';
  $handler->display->display_options['filters']['views_dependent_filter_1']['controller_values'] = array(
    'program_info' => 'program_info',
    'answer' => 0,
    'article' => 0,
    'page' => 0,
    'booking_resource' => 0,
    'date' => 0,
    'home_page_news' => 0,
    'image' => 0,
    'main_page_slides' => 0,
    'new_tal_online_info' => 0,
    'question' => 0,
    'agc_page_content' => 0,
    'regional_projects' => 0,
    'training_resource' => 0,
    'webform' => 0,
  );
  $handler->display->display_options['filters']['views_dependent_filter_1']['dependent_filters'] = array(
    'field_primary_audience_value' => 'field_primary_audience_value',
    'field_length_of_program_session2_value' => 'field_length_of_program_session2_value',
    'term_node_tid_depth' => 0,
    'field_source_library_region_tid_1' => 0,
    'field_source_library_region_tid_2' => 0,
    'field_resource_type_value' => 0,
    'field_training_topic_value' => 0,
  );
  /* Filter criterion: Source Library filter controller */
  $handler->display->display_options['filters']['views_dependent_filter_2']['id'] = 'views_dependent_filter_2';
  $handler->display->display_options['filters']['views_dependent_filter_2']['table'] = 'views';
  $handler->display->display_options['filters']['views_dependent_filter_2']['field'] = 'views_dependent_filter';
  $handler->display->display_options['filters']['views_dependent_filter_2']['ui_name'] = 'Source Library filter controller';
  $handler->display->display_options['filters']['views_dependent_filter_2']['group'] = 1;
  $handler->display->display_options['filters']['views_dependent_filter_2']['controller_filter'] = 'type';
  $handler->display->display_options['filters']['views_dependent_filter_2']['controller_values'] = array(
    'answer' => 0,
    'article' => 0,
    'page' => 0,
    'booking_resource' => 0,
    'date' => 0,
    'home_page_news' => 0,
    'image' => 0,
    'main_page_slides' => 0,
    'new_tal_online_info' => 0,
    'program_info' => 0,
    'question' => 0,
    'agc_page_content' => 0,
    'regional_projects' => 0,
    'toolshed_blog_post' => 0,
    'training_resource' => 0,
    'webform' => 0,
  );
  $handler->display->display_options['filters']['views_dependent_filter_2']['dependent_filters'] = array(
    'term_node_tid_depth' => 0,
    'field_source_library_region_tid_1' => 0,
    'field_source_library_region_tid_2' => 0,
    'field_source_library_region_tid' => 0,
    'field_source_library_region_tid_3' => 0,
    'field_resource_type_value' => 0,
    'field_training_topic_value' => 0,
    'field_primary_audience_value' => 0,
    'field_length_of_program_session2_value' => 0,
  );
  /* Filter criterion: library region */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['ui_name'] = 'library region';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    40 => '40',
    25 => '25',
    305 => '305',
    221 => '221',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';
  /* Filter criterion: ab_libraries */
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['id'] = 'field_source_library_region_tid_1';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['ui_name'] = 'ab_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['value'] = array(
    41 => '41',
    183 => '183',
    178 => '178',
    181 => '181',
    174 => '174',
    43 => '43',
    44 => '44',
    186 => '186',
    176 => '176',
    184 => '184',
    45 => '45',
    180 => '180',
    47 => '47',
    48 => '48',
    49 => '49',
    35 => '35',
    182 => '182',
    179 => '179',
    177 => '177',
    173 => '173',
    185 => '185',
    175 => '175',
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['operator_id'] = 'field_source_library_region_tid_1_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['operator'] = 'field_source_library_region_tid_1_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['identifier'] = 'tid_ab_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['hierarchy'] = 1;
  /* Filter criterion: bc_libraries */
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['id'] = 'field_source_library_region_tid_2';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['ui_name'] = 'bc_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['value'] = array(
    82 => '82',
    172 => '172',
    87 => '87',
    67 => '67',
    110 => '110',
    63 => '63',
    57 => '57',
    59 => '59',
    100 => '100',
    90 => '90',
    124 => '124',
    140 => '140',
    150 => '150',
    141 => '141',
    71 => '71',
    137 => '137',
    81 => '81',
    146 => '146',
    117 => '117',
    61 => '61',
    70 => '70',
    171 => '171',
    69 => '69',
    170 => '170',
    120 => '120',
    121 => '121',
    103 => '103',
    79 => '79',
    136 => '136',
    151 => '151',
    149 => '149',
    131 => '131',
    127 => '127',
    53 => '53',
    115 => '115',
    134 => '134',
    167 => '167',
    101 => '101',
    168 => '168',
    169 => '169',
    164 => '164',
    122 => '122',
    78 => '78',
    165 => '165',
    139 => '139',
    118 => '118',
    116 => '116',
    99 => '99',
    86 => '86',
    126 => '126',
    73 => '73',
    113 => '113',
    58 => '58',
    132 => '132',
    166 => '166',
    107 => '107',
    108 => '108',
    109 => '109',
    114 => '114',
    111 => '111',
    91 => '91',
    162 => '162',
    72 => '72',
    102 => '102',
    148 => '148',
    85 => '85',
    83 => '83',
    119 => '119',
    112 => '112',
    163 => '163',
    95 => '95',
    105 => '105',
    77 => '77',
    96 => '96',
    74 => '74',
    80 => '80',
    161 => '161',
    142 => '142',
    123 => '123',
    138 => '138',
    157 => '157',
    158 => '158',
    135 => '135',
    143 => '143',
    129 => '129',
    64 => '64',
    159 => '159',
    93 => '93',
    97 => '97',
    133 => '133',
    160 => '160',
    68 => '68',
    62 => '62',
    94 => '94',
    89 => '89',
    52 => '52',
    55 => '55',
    54 => '54',
    76 => '76',
    154 => '154',
    51 => '51',
    66 => '66',
    56 => '56',
    155 => '155',
    144 => '144',
    156 => '156',
    65 => '65',
    130 => '130',
    50 => '50',
    128 => '128',
    104 => '104',
    106 => '106',
    92 => '92',
    153 => '153',
    145 => '145',
    125 => '125',
    147 => '147',
    75 => '75',
    88 => '88',
    60 => '60',
    98 => '98',
    84 => '84',
    152 => '152',
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['operator_id'] = 'field_source_library_region_tid_2_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['operator'] = 'field_source_library_region_tid_2_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['identifier'] = 'tid_bc_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['hierarchy'] = 1;
  /* Filter criterion: MB_libraries */
  $handler->display->display_options['filters']['field_source_library_region_tid']['id'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['ui_name'] = 'MB_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid']['value'] = array(
    59 => '59',
    90 => '90',
    53 => '53',
    115 => '115',
    113 => '113',
    58 => '58',
    80 => '80',
    64 => '64',
    62 => '62',
    55 => '55',
    51 => '51',
    52 => '52',
    54 => '54',
    56 => '56',
    92 => '92',
    60 => '60',
  );
  $handler->display->display_options['filters']['field_source_library_region_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator_id'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['identifier'] = 'tid-mb-libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid']['hierarchy'] = 1;
  /* Filter criterion: SK_libraries */
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['id'] = 'field_source_library_region_tid_3';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['ui_name'] = 'SK_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['value'] = array(
    275 => '275',
    269 => '269',
    272 => '272',
    284 => '284',
    266 => '266',
    224 => '224',
    290 => '290',
    287 => '287',
    281 => '281',
    299 => '299',
    260 => '260',
    296 => '296',
    293 => '293',
    263 => '263',
    278 => '278',
    227 => '227',
    233 => '233',
    236 => '236',
    239 => '239',
    242 => '242',
    245 => '245',
    248 => '248',
    251 => '251',
    254 => '254',
    257 => '257',
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['expose']['operator_id'] = 'field_source_library_region_tid_3_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['expose']['operator'] = 'field_source_library_region_tid_3_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['expose']['identifier'] = 'tid-sk-libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['hierarchy'] = 1;
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_value']['id'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_value']['field'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['group'] = 2;
  $handler->display->display_options['filters']['field_resource_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['operator_id'] = 'field_resource_type_value_op';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['operator'] = 'field_resource_type_value_op';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['identifier'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Presentation Topic (field_training_topic) */
  $handler->display->display_options['filters']['field_training_topic_value']['id'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['field_training_topic_value']['table'] = 'field_data_field_training_topic';
  $handler->display->display_options['filters']['field_training_topic_value']['field'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['field_training_topic_value']['group'] = 2;
  $handler->display->display_options['filters']['field_training_topic_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['operator_id'] = 'field_training_topic_value_op';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['operator'] = 'field_training_topic_value_op';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['identifier'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Primary Audience (field_primary_audience) */
  $handler->display->display_options['filters']['field_primary_audience_value']['id'] = 'field_primary_audience_value';
  $handler->display->display_options['filters']['field_primary_audience_value']['table'] = 'field_data_field_primary_audience';
  $handler->display->display_options['filters']['field_primary_audience_value']['field'] = 'field_primary_audience_value';
  $handler->display->display_options['filters']['field_primary_audience_value']['group'] = 3;
  $handler->display->display_options['filters']['field_primary_audience_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_primary_audience_value']['expose']['operator_id'] = 'field_primary_audience_value_op';
  $handler->display->display_options['filters']['field_primary_audience_value']['expose']['operator'] = 'field_primary_audience_value_op';
  $handler->display->display_options['filters']['field_primary_audience_value']['expose']['identifier'] = 'field_primary_audience_value';
  $handler->display->display_options['filters']['field_primary_audience_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_primary_audience_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Length of program session (field_length_of_program_session2) */
  $handler->display->display_options['filters']['field_length_of_program_session2_value']['id'] = 'field_length_of_program_session2_value';
  $handler->display->display_options['filters']['field_length_of_program_session2_value']['table'] = 'field_data_field_length_of_program_session2';
  $handler->display->display_options['filters']['field_length_of_program_session2_value']['field'] = 'field_length_of_program_session2_value';
  $handler->display->display_options['filters']['field_length_of_program_session2_value']['group'] = 3;
  $handler->display->display_options['filters']['field_length_of_program_session2_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_length_of_program_session2_value']['expose']['operator_id'] = 'field_length_of_program_session2_value_op';
  $handler->display->display_options['filters']['field_length_of_program_session2_value']['expose']['operator'] = 'field_length_of_program_session2_value_op';
  $handler->display->display_options['filters']['field_length_of_program_session2_value']['expose']['identifier'] = 'field_length_of_program_session2_value';
  $handler->display->display_options['filters']['field_length_of_program_session2_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_length_of_program_session2_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'search-old';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['search'] = $view;

  $view = new view();
  $view->name = 'search_solr';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_toolshed_content';
  $view->human_name = 'Toolshed Solr Content Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Toolshed Solr Content Search';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, we couldn\'t find anything in Toolshed that matched your query.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Indexed Multiple types: Node */
  $handler->display->display_options['relationships']['node']['id'] = 'node';
  $handler->display->display_options['relationships']['node']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['relationships']['node']['field'] = 'node';
  /* Field: Indexed Multiple types: ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  /* Sort criterion: Node: Date created (indexed) */
  $handler->display->display_options['sorts']['node_created']['id'] = 'node_created';
  $handler->display->display_options['sorts']['node_created']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['sorts']['node_created']['field'] = 'node_created';
  $handler->display->display_options['sorts']['node_created']['order'] = 'DESC';
  /* Filter criterion: Node: Status (indexed) */
  $handler->display->display_options['filters']['node_status']['id'] = 'node_status';
  $handler->display->display_options['filters']['node_status']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_status']['field'] = 'node_status';
  $handler->display->display_options['filters']['node_status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search Tterms';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '3';
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'node:field_conference_name:name' => 'node:field_conference_name:name',
    'node:field_project_description' => 'node:field_project_description',
    'node:title' => 'node:title',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_type' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'views_dependent_filter' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'views_dependent_filter_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'views_dependent_filter_3' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'views_dependent_filter_2' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_field_source_library_region' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_field_resource_type' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_field_training_topic' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_field_primary_audience' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_field_length_of_program_session2' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_field_conference_name' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_field_conference_year' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Multiple types: ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['link_to_entity'] = 0;
  /* Field: Node: Title (indexed) */
  $handler->display->display_options['fields']['node_title']['id'] = 'node_title';
  $handler->display->display_options['fields']['node_title']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['fields']['node_title']['field'] = 'node_title';
  $handler->display->display_options['fields']['node_title']['label'] = 'Title';
  $handler->display->display_options['fields']['node_title']['link_to_entity'] = 0;
  /* Field: Node: Training Topic */
  $handler->display->display_options['fields']['field_training_topic']['id'] = 'field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_training_topic']['field'] = 'field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['relationship'] = 'node';
  $handler->display->display_options['fields']['field_training_topic']['delta_offset'] = '0';
  /* Field: Node: Content type (indexed) */
  $handler->display->display_options['fields']['node_type']['id'] = 'node_type';
  $handler->display->display_options['fields']['node_type']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['fields']['node_type']['field'] = 'node_type';
  $handler->display->display_options['fields']['node_type']['label'] = 'Type';
  $handler->display->display_options['fields']['node_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['node_type']['format_name'] = 1;
  /* Field: Node: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['relationship'] = 'node';
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entity_node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'node';
  $handler->display->display_options['fields']['created']['label'] = 'Age';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Node: Source Library (indexed) */
  $handler->display->display_options['fields']['node_field_source_library_region']['id'] = 'node_field_source_library_region';
  $handler->display->display_options['fields']['node_field_source_library_region']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['fields']['node_field_source_library_region']['field'] = 'node_field_source_library_region';
  $handler->display->display_options['fields']['node_field_source_library_region']['label'] = 'Source Library Region';
  $handler->display->display_options['fields']['node_field_source_library_region']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['node_field_source_library_region']['view_mode'] = 'full';
  $handler->display->display_options['fields']['node_field_source_library_region']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
    4 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node: Status (indexed) */
  $handler->display->display_options['filters']['node_status']['id'] = 'node_status';
  $handler->display->display_options['filters']['node_status']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_status']['field'] = 'node_status';
  $handler->display->display_options['filters']['node_status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['node_status']['group'] = 1;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '3';
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'node:body:value' => 'node:body:value',
    'node:field_conference_name:name' => 'node:field_conference_name:name',
    'node:field_project_description' => 'node:field_project_description',
    'node:field_source_library_region:name' => 'node:field_source_library_region:name',
    'node:title' => 'node:title',
  );
  /* Filter criterion: Node: Content type (indexed) */
  $handler->display->display_options['filters']['node_type']['id'] = 'node_type';
  $handler->display->display_options['filters']['node_type']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_type']['field'] = 'node_type';
  $handler->display->display_options['filters']['node_type']['value'] = array(
    'conference_presentation' => 'conference_presentation',
    'program_info' => 'program_info',
    'training_resource' => 'training_resource',
  );
  $handler->display->display_options['filters']['node_type']['group'] = 1;
  $handler->display->display_options['filters']['node_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_type']['expose']['operator_id'] = 'node_type_op';
  $handler->display->display_options['filters']['node_type']['expose']['operator'] = 'node_type_op';
  $handler->display->display_options['filters']['node_type']['expose']['identifier'] = 'field_content_type_selector';
  $handler->display->display_options['filters']['node_type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['node_type']['expose']['reduce'] = 1;
  /* Filter criterion: library region */
  $handler->display->display_options['filters']['node_field_source_library_region']['id'] = 'node_field_source_library_region';
  $handler->display->display_options['filters']['node_field_source_library_region']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_field_source_library_region']['field'] = 'node_field_source_library_region';
  $handler->display->display_options['filters']['node_field_source_library_region']['ui_name'] = 'library region';
  $handler->display->display_options['filters']['node_field_source_library_region']['value'] = array(
    40 => '40',
    25 => '25',
    205 => '205',
    199 => '199',
  );
  $handler->display->display_options['filters']['node_field_source_library_region']['group'] = 1;
  $handler->display->display_options['filters']['node_field_source_library_region']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_field_source_library_region']['expose']['operator_id'] = 'node_field_source_library_region_op';
  $handler->display->display_options['filters']['node_field_source_library_region']['expose']['operator'] = 'node_field_source_library_region_op';
  $handler->display->display_options['filters']['node_field_source_library_region']['expose']['identifier'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['node_field_source_library_region']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_field_source_library_region']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['node_field_source_library_region']['expose']['reduce'] = 1;
  /* Filter criterion: Node: Resource Type (indexed) */
  $handler->display->display_options['filters']['node_field_resource_type']['id'] = 'node_field_resource_type';
  $handler->display->display_options['filters']['node_field_resource_type']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_field_resource_type']['field'] = 'node_field_resource_type';
  $handler->display->display_options['filters']['node_field_resource_type']['value'] = array();
  $handler->display->display_options['filters']['node_field_resource_type']['group'] = 2;
  $handler->display->display_options['filters']['node_field_resource_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_field_resource_type']['expose']['operator_id'] = 'node_field_resource_type_op';
  $handler->display->display_options['filters']['node_field_resource_type']['expose']['operator'] = 'node_field_resource_type_op';
  $handler->display->display_options['filters']['node_field_resource_type']['expose']['identifier'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['node_field_resource_type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_field_resource_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Node: Training Topic (indexed) */
  $handler->display->display_options['filters']['node_field_training_topic']['id'] = 'node_field_training_topic';
  $handler->display->display_options['filters']['node_field_training_topic']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_field_training_topic']['field'] = 'node_field_training_topic';
  $handler->display->display_options['filters']['node_field_training_topic']['value'] = array();
  $handler->display->display_options['filters']['node_field_training_topic']['group'] = 2;
  $handler->display->display_options['filters']['node_field_training_topic']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_field_training_topic']['expose']['operator_id'] = 'node_field_training_topic_op';
  $handler->display->display_options['filters']['node_field_training_topic']['expose']['operator'] = 'node_field_training_topic_op';
  $handler->display->display_options['filters']['node_field_training_topic']['expose']['identifier'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['node_field_training_topic']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_field_training_topic']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['node_field_training_topic']['expose']['reduce'] = 0;
  /* Filter criterion: Node: Primary Audience (indexed) */
  $handler->display->display_options['filters']['node_field_primary_audience']['id'] = 'node_field_primary_audience';
  $handler->display->display_options['filters']['node_field_primary_audience']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_field_primary_audience']['field'] = 'node_field_primary_audience';
  $handler->display->display_options['filters']['node_field_primary_audience']['value'] = array();
  $handler->display->display_options['filters']['node_field_primary_audience']['group'] = 3;
  $handler->display->display_options['filters']['node_field_primary_audience']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_field_primary_audience']['expose']['operator_id'] = 'node_field_primary_audience_op';
  $handler->display->display_options['filters']['node_field_primary_audience']['expose']['operator'] = 'node_field_primary_audience_op';
  $handler->display->display_options['filters']['node_field_primary_audience']['expose']['identifier'] = 'field_primary_audience_value';
  $handler->display->display_options['filters']['node_field_primary_audience']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_field_primary_audience']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['node_field_primary_audience']['expose']['reduce'] = 0;
  /* Filter criterion: Node: Length of program session (indexed) */
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['id'] = 'node_field_length_of_program_session2';
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['field'] = 'node_field_length_of_program_session2';
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['value'] = array();
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['group'] = 3;
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['expose']['operator_id'] = 'node_field_length_of_program_session2_op';
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['expose']['operator'] = 'node_field_length_of_program_session2_op';
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['expose']['identifier'] = 'field_length_of_program_session2_value';
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['expose']['reduce'] = 0;
  /* Filter criterion: Node: Conference (indexed) */
  $handler->display->display_options['filters']['node_field_conference_name']['id'] = 'node_field_conference_name';
  $handler->display->display_options['filters']['node_field_conference_name']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_field_conference_name']['field'] = 'node_field_conference_name';
  $handler->display->display_options['filters']['node_field_conference_name']['value'] = array();
  $handler->display->display_options['filters']['node_field_conference_name']['group'] = 4;
  $handler->display->display_options['filters']['node_field_conference_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_field_conference_name']['expose']['operator_id'] = 'node_field_conference_name_op';
  $handler->display->display_options['filters']['node_field_conference_name']['expose']['label'] = 'Conference';
  $handler->display->display_options['filters']['node_field_conference_name']['expose']['operator'] = 'node_field_conference_name_op';
  $handler->display->display_options['filters']['node_field_conference_name']['expose']['identifier'] = 'node_field_conference_name';
  $handler->display->display_options['filters']['node_field_conference_name']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_field_conference_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['node_field_conference_name']['expose']['reduce'] = 0;
  /* Filter criterion: Node: Conference Year (indexed) */
  $handler->display->display_options['filters']['node_field_conference_year']['id'] = 'node_field_conference_year';
  $handler->display->display_options['filters']['node_field_conference_year']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_field_conference_year']['field'] = 'node_field_conference_year';
  $handler->display->display_options['filters']['node_field_conference_year']['value'] = array();
  $handler->display->display_options['filters']['node_field_conference_year']['group'] = 4;
  $handler->display->display_options['filters']['node_field_conference_year']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_field_conference_year']['expose']['operator_id'] = 'node_field_conference_year_op';
  $handler->display->display_options['filters']['node_field_conference_year']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['node_field_conference_year']['expose']['operator'] = 'node_field_conference_year_op';
  $handler->display->display_options['filters']['node_field_conference_year']['expose']['identifier'] = 'node_field_conference_year';
  $handler->display->display_options['filters']['node_field_conference_year']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_field_conference_year']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['node_field_conference_year']['expose']['reduce'] = 0;
  $handler->display->display_options['path'] = 'toolshed-solr-content-search';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Search */
  $handler = $view->new_display('page', 'Search', 'solr');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Toolshed Search';
  $handler->display->display_options['display_description'] = 'Solr search view (page) for the content index';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 1,
      'secondary_label' => 'More options',
      'secondary_collapse_override' => '0',
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_field_source_library_region_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_type' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_field_training_topic' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => 'Training Resources, Conference Presentations',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_field_primary_audience' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => 'Programs',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_field_length_of_program_session2' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => 'Programs',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_field_conference_name' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => 'Conference Presentations',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_field_conference_year' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => 'Conference Presentations',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Multiple types: Node */
  $handler->display->display_options['relationships']['node']['id'] = 'node';
  $handler->display->display_options['relationships']['node']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['relationships']['node']['field'] = 'node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Multiple types: ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['link_to_entity'] = 0;
  /* Field: Node: Title (indexed) */
  $handler->display->display_options['fields']['node_title']['id'] = 'node_title';
  $handler->display->display_options['fields']['node_title']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['fields']['node_title']['field'] = 'node_title';
  $handler->display->display_options['fields']['node_title']['label'] = 'Title';
  $handler->display->display_options['fields']['node_title']['link_to_entity'] = 1;
  /* Field: Node: Training Topic */
  $handler->display->display_options['fields']['field_training_topic']['id'] = 'field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_training_topic']['field'] = 'field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['relationship'] = 'node';
  $handler->display->display_options['fields']['field_training_topic']['delta_offset'] = '0';
  /* Field: Node: Content type (indexed) */
  $handler->display->display_options['fields']['node_type']['id'] = 'node_type';
  $handler->display->display_options['fields']['node_type']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['fields']['node_type']['field'] = 'node_type';
  $handler->display->display_options['fields']['node_type']['label'] = 'Type';
  $handler->display->display_options['fields']['node_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['node_type']['format_name'] = 1;
  /* Field: Node: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['relationship'] = 'node';
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entity_node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'node';
  $handler->display->display_options['fields']['created']['label'] = 'Age';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Node: Source Library (indexed) */
  $handler->display->display_options['fields']['node_field_source_library_region']['id'] = 'node_field_source_library_region';
  $handler->display->display_options['fields']['node_field_source_library_region']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['fields']['node_field_source_library_region']['field'] = 'node_field_source_library_region';
  $handler->display->display_options['fields']['node_field_source_library_region']['label'] = 'Source Library Region';
  $handler->display->display_options['fields']['node_field_source_library_region']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['node_field_source_library_region']['view_mode'] = 'full';
  $handler->display->display_options['fields']['node_field_source_library_region']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node: Status (indexed) */
  $handler->display->display_options['filters']['node_status']['id'] = 'node_status';
  $handler->display->display_options['filters']['node_status']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_status']['field'] = 'node_status';
  $handler->display->display_options['filters']['node_status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['node_status']['group'] = 1;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search terms';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '3';
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'node:field_conference_name:name' => 'node:field_conference_name:name',
    'node:field_project_description' => 'node:field_project_description',
    'node:title' => 'node:title',
  );
  /* Filter criterion: Node » Source Library: All parent terms (indexed) */
  $handler->display->display_options['filters']['node_field_source_library_region_parents_all']['id'] = 'node_field_source_library_region_parents_all';
  $handler->display->display_options['filters']['node_field_source_library_region_parents_all']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_field_source_library_region_parents_all']['field'] = 'node_field_source_library_region_parents_all';
  $handler->display->display_options['filters']['node_field_source_library_region_parents_all']['value'] = array();
  $handler->display->display_options['filters']['node_field_source_library_region_parents_all']['group'] = 1;
  $handler->display->display_options['filters']['node_field_source_library_region_parents_all']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_field_source_library_region_parents_all']['expose']['operator_id'] = 'node_field_source_library_region_parents_all_op';
  $handler->display->display_options['filters']['node_field_source_library_region_parents_all']['expose']['operator'] = 'node_field_source_library_region_parents_all_op';
  $handler->display->display_options['filters']['node_field_source_library_region_parents_all']['expose']['identifier'] = 'field_source_library_region';
  $handler->display->display_options['filters']['node_field_source_library_region_parents_all']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_field_source_library_region_parents_all']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['node_field_source_library_region_parents_all']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['node_field_source_library_region_parents_all']['type'] = 'select';
  $handler->display->display_options['filters']['node_field_source_library_region_parents_all']['hierarchy'] = 1;
  /* Filter criterion: Node: Content type (indexed) */
  $handler->display->display_options['filters']['node_type']['id'] = 'node_type';
  $handler->display->display_options['filters']['node_type']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_type']['field'] = 'node_type';
  $handler->display->display_options['filters']['node_type']['value'] = array(
    'conference_presentation' => 'conference_presentation',
    'program_info' => 'program_info',
    'training_resource' => 'training_resource',
  );
  $handler->display->display_options['filters']['node_type']['group'] = 1;
  $handler->display->display_options['filters']['node_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_type']['expose']['operator_id'] = 'node_type_op';
  $handler->display->display_options['filters']['node_type']['expose']['operator'] = 'node_type_op';
  $handler->display->display_options['filters']['node_type']['expose']['identifier'] = 'field_content_type_selector';
  $handler->display->display_options['filters']['node_type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['node_type']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['node_type']['group_info']['label'] = 'Content type (indexed)';
  $handler->display->display_options['filters']['node_type']['group_info']['identifier'] = 'node_type';
  $handler->display->display_options['filters']['node_type']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['node_type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Node: Training Topic (indexed) */
  $handler->display->display_options['filters']['node_field_training_topic']['id'] = 'node_field_training_topic';
  $handler->display->display_options['filters']['node_field_training_topic']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_field_training_topic']['field'] = 'node_field_training_topic';
  $handler->display->display_options['filters']['node_field_training_topic']['value'] = array();
  $handler->display->display_options['filters']['node_field_training_topic']['group'] = 1;
  $handler->display->display_options['filters']['node_field_training_topic']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_field_training_topic']['expose']['operator_id'] = 'node_field_training_topic_op';
  $handler->display->display_options['filters']['node_field_training_topic']['expose']['operator'] = 'node_field_training_topic_op';
  $handler->display->display_options['filters']['node_field_training_topic']['expose']['identifier'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['node_field_training_topic']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_field_training_topic']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['node_field_training_topic']['expose']['reduce'] = 0;
  /* Filter criterion: Node: Primary Audience (indexed) */
  $handler->display->display_options['filters']['node_field_primary_audience']['id'] = 'node_field_primary_audience';
  $handler->display->display_options['filters']['node_field_primary_audience']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_field_primary_audience']['field'] = 'node_field_primary_audience';
  $handler->display->display_options['filters']['node_field_primary_audience']['value'] = array();
  $handler->display->display_options['filters']['node_field_primary_audience']['group'] = 1;
  $handler->display->display_options['filters']['node_field_primary_audience']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_field_primary_audience']['expose']['operator_id'] = 'node_field_primary_audience_op';
  $handler->display->display_options['filters']['node_field_primary_audience']['expose']['operator'] = 'node_field_primary_audience_op';
  $handler->display->display_options['filters']['node_field_primary_audience']['expose']['identifier'] = 'field_primary_audience_value';
  $handler->display->display_options['filters']['node_field_primary_audience']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_field_primary_audience']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['node_field_primary_audience']['expose']['reduce'] = 0;
  /* Filter criterion: Node: Length of program session (indexed) */
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['id'] = 'node_field_length_of_program_session2';
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['field'] = 'node_field_length_of_program_session2';
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['value'] = array();
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['group'] = 1;
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['expose']['operator_id'] = 'node_field_length_of_program_session2_op';
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['expose']['operator'] = 'node_field_length_of_program_session2_op';
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['expose']['identifier'] = 'field_length_of_program_session2_value';
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['node_field_length_of_program_session2']['expose']['reduce'] = 0;
  /* Filter criterion: Node: Conference (indexed) */
  $handler->display->display_options['filters']['node_field_conference_name']['id'] = 'node_field_conference_name';
  $handler->display->display_options['filters']['node_field_conference_name']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_field_conference_name']['field'] = 'node_field_conference_name';
  $handler->display->display_options['filters']['node_field_conference_name']['value'] = array(
    206 => '206',
    207 => '207',
    208 => '208',
    209 => '209',
  );
  $handler->display->display_options['filters']['node_field_conference_name']['group'] = 1;
  $handler->display->display_options['filters']['node_field_conference_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_field_conference_name']['expose']['operator_id'] = 'node_field_conference_name_op';
  $handler->display->display_options['filters']['node_field_conference_name']['expose']['operator'] = 'node_field_conference_name_op';
  $handler->display->display_options['filters']['node_field_conference_name']['expose']['identifier'] = 'field_conference_name_value';
  $handler->display->display_options['filters']['node_field_conference_name']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_field_conference_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['node_field_conference_name']['expose']['reduce'] = 0;
  /* Filter criterion: Node: Conference Year (indexed) */
  $handler->display->display_options['filters']['node_field_conference_year']['id'] = 'node_field_conference_year';
  $handler->display->display_options['filters']['node_field_conference_year']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['filters']['node_field_conference_year']['field'] = 'node_field_conference_year';
  $handler->display->display_options['filters']['node_field_conference_year']['value'] = array();
  $handler->display->display_options['filters']['node_field_conference_year']['group'] = 1;
  $handler->display->display_options['filters']['node_field_conference_year']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_field_conference_year']['expose']['operator_id'] = 'node_field_conference_year_op';
  $handler->display->display_options['filters']['node_field_conference_year']['expose']['operator'] = 'node_field_conference_year_op';
  $handler->display->display_options['filters']['node_field_conference_year']['expose']['identifier'] = 'field_conference_year_value';
  $handler->display->display_options['filters']['node_field_conference_year']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_field_conference_year']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['node_field_conference_year']['expose']['reduce'] = 0;
  $handler->display->display_options['path'] = 'search';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title (indexed) */
  $handler->display->display_options['fields']['node_title']['id'] = 'node_title';
  $handler->display->display_options['fields']['node_title']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['fields']['node_title']['field'] = 'node_title';
  $handler->display->display_options['fields']['node_title']['label'] = 'Title';
  $handler->display->display_options['fields']['node_title']['link_to_entity'] = 0;
  /* Field: Node: Training Topic (indexed) */
  $handler->display->display_options['fields']['node_field_training_topic']['id'] = 'node_field_training_topic';
  $handler->display->display_options['fields']['node_field_training_topic']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['fields']['node_field_training_topic']['field'] = 'node_field_training_topic';
  $handler->display->display_options['fields']['node_field_training_topic']['label'] = 'Topic';
  $handler->display->display_options['fields']['node_field_training_topic']['delta_offset'] = '0';
  /* Field: Node: Content type (indexed) */
  $handler->display->display_options['fields']['node_type']['id'] = 'node_type';
  $handler->display->display_options['fields']['node_type']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['fields']['node_type']['field'] = 'node_type';
  $handler->display->display_options['fields']['node_type']['label'] = 'Type';
  $handler->display->display_options['fields']['node_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['node_type']['format_name'] = 1;
  /* Field: Node: Source Library (indexed) */
  $handler->display->display_options['fields']['node_field_source_library_region']['id'] = 'node_field_source_library_region';
  $handler->display->display_options['fields']['node_field_source_library_region']['table'] = 'search_api_index_toolshed_content';
  $handler->display->display_options['fields']['node_field_source_library_region']['field'] = 'node_field_source_library_region';
  $export['search_solr'] = $view;

  return $export;
}
