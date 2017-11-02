<?php
/**
 * @file
 * toolshed_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function toolshed_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'aboutview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AboutView / All Resources Widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'About Us';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p>Resources on the Library Toolshed are open to all. Anyone wishing to access these resources can simply select the resources and download them. Users wishing to add content need to sign up for an account here: <a href="http://librarytoolshed.ca/user/register">http://librarytoolshed.ca/user/register.</a></p>

<p><strong>About</strong></p>
<p>The Toolshed is a  collaborative initiative supported by The Alberta Library, The Association of BC Public Library Directors, Saskatchewan’s Multitype Library Board and the Manitoba Public Library Services Branch. The platform is hosted by our shared-service partner the BC Libraries Cooperative. It is a place of community knowledge and experience. It is where library staff share, access, and comment on training, instructional and programming resources created by library staff.</p>
<p>The collection, including its relevancy, currency and authority, is developed by the library community. The collection focus is on materials that support training and programming, including but not limited to, scripts, templates, outlines, and links to webinars and toolkits. Where possible, file formats that make sharing and building on the work easy are greatly appreciated. Materials for the collection have been developed by a library staff member and have been approved by the owning home library for uploading.</p>
<p>If you work for a library and would like to share your resources on the Toolshed, please sign up for an account and begin sharing.</p>

<p><strong>More about <a href="http://www.thealbertalibrary.ab.ca/">The Alberta Library</a></strong></p>
<p><strong>More about <a href="http://abcpld.org/">The Association of BC Public Library Directors</a></strong></p>
<p><strong>More about the <a href="http://sils.sk.ca.campusguides.com/mlb/index">Saskatchewan Multitype Library Board</a></strong></p>
<p><strong>More about the <a href="http://www.gov.mb.ca/chc/pls">Manitoba Public Library Services Branch</a></strong></p>



<p><strong>More about <a href="http://bc.libraries.coop/">The BC Libraries Cooperative</a></strong></p>

<p><strong>Accessing and Uploading Content</strong></p>
<p>Anyone can come to the Toolshed and access our resources. But if you would like to upload resources, please request an account at the user page. </p>
<p>You are able to upload the following document types: .doc, .docx, .ppt, .pptx, .pdf, .txt.</p>
<p>Video should be uploaded to a publicly visible streaming service like Vimeo or Youtube. The toolshed will allow you to then share YouTube and Vimeo links which will cause the videos to embed in this site. For others, simply link to the appropriate video page.</p>
<p>When uploading content, please do not include any personal information in the resource [e.g. screen shots of account information].</p>
<p><strong>Using Toolshed Content</strong></p>
<p>All content on the Toolshed is shared using a Creative Common Attribution-Non Commercial 3.0 Unported License. This means that anyone downloading content from the Toolshed is free to modify any resources in order to better suit their local library\'s needs as long as credit is given to the library and resource modified.</p>
<p>For example, a library using or modifying a Toolshed resource on how to download eBooks from a library website would include a note at the bottom of their modified resource giving credit in the following way.</p>
<p>"Portions of this resource were adapted from [document name] produced by [library name] found at the Toolshed."</p>
<p>For more information please consult the <a href="http://librarytoolshed.ca/sites/default/files/Toolshed_Collection_Policy-mar102014.pdf">Toolshed Collection Development Policy</a>.</p>
<p><strong>Contact Us</strong></p>
<p>If you have any questions, comments or suggestions regarding the TAL Toolshed, please contact us at: <a href="mailto:support@librarytoolshed.ca">support@librarytoolshed.ca</a></p>

<p><strong>Show the latest resources on your website</strong></p>
<p>Use the embed code below to embed the latest training resources on your website.</p>
';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Resource Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Presentation Topic */
  $handler->display->display_options['fields']['field_training_topic']['id'] = 'field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['table'] = 'field_data_field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['field'] = 'field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['label'] = 'Training Topic';
  $handler->display->display_options['fields']['field_training_topic']['delta_offset'] = '0';
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
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['value'] = 'asdfasdf';
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_value']['id'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_value']['field'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'about';

  /* Display: Web widget */
  $handler = $view->new_display('web_widgets', 'Web widget', 'web_widgets_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_value']['id'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_value']['field'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'w';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['width'] = '400';
  $handler->display->display_options['height'] = '400';
  $export['aboutview'] = $view;

  $view = new view();
  $view->name = 'admin_user_search';
  $view->description = 'Administrator User Search';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'access' => 'access',
    'login' => 'login',
    'name' => 'name',
    'uid' => 'uid',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'access' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'login' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'uid' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'medium';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['granularity'] = 'day';
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = '0';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Part of a User\'s name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = '0';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'Part of a User\'s E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/usersearch';
  $export['admin_user_search'] = $view;

  $view = new view();
  $view->name = 'alberta_group_catalogue';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Alberta Group Catalogue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Topics:';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Select';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'nid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'agc_page_content' => 'agc_page_content',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'NewTALOnline';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['alberta_group_catalogue'] = $view;

  $view = new view();
  $view->name = 'all_content_by_author_detailed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Content By Author - Detailed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uuid' => 'uuid',
    'title' => 'title',
    'type' => 'type',
    'field_authot' => 'field_authot',
    'uid' => 'uid',
    'created' => 'created',
    'changed' => 'changed',
    'promote' => 'promote',
    'views_bulk_operations' => 'views_bulk_operations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uuid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_authot' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'promote' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_authot']['id'] = 'field_authot';
  $handler->display->display_options['fields']['field_authot']['table'] = 'field_data_field_authot';
  $handler->display->display_options['fields']['field_authot']['field'] = 'field_authot';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* Field: Content: Promoted to front page */
  $handler->display->display_options['fields']['promote']['id'] = 'promote';
  $handler->display->display_options['fields']['promote']['table'] = 'node';
  $handler->display->display_options['fields']['promote']['field'] = 'promote';
  $handler->display->display_options['fields']['promote']['not'] = 0;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_promote_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
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
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['exposed'] = TRUE;
  $handler->display->display_options['filters']['promote']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['promote']['expose']['label'] = 'Front?';
  $handler->display->display_options['filters']['promote']['expose']['operator'] = 'promote_op';
  $handler->display->display_options['filters']['promote']['expose']['identifier'] = 'promote';
  $handler->display->display_options['filters']['promote']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
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
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'uuid-all-content';
  $export['all_content_by_author_detailed'] = $view;

  $view = new view();
  $view->name = 'all_programs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Programs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Programs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_primary_audience' => 'field_primary_audience',
    'field_length_of_program_session2' => 'field_length_of_program_session2',
    'field_session_frequency' => 'field_session_frequency',
    'field_rating' => 'field_rating',
    'field_source_library_region' => 'field_source_library_region',
    'field_piwik_node_views_nb_hits' => 'field_piwik_node_views_nb_hits',
    'field_piwik_node_views_nb_visits' => 'field_piwik_node_views_nb_visits',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'field_rating' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
    'field_piwik_node_views_nb_hits' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_piwik_node_views_nb_visits' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Primary Audience */
  $handler->display->display_options['fields']['field_primary_audience']['id'] = 'field_primary_audience';
  $handler->display->display_options['fields']['field_primary_audience']['table'] = 'field_data_field_primary_audience';
  $handler->display->display_options['fields']['field_primary_audience']['field'] = 'field_primary_audience';
  $handler->display->display_options['fields']['field_primary_audience']['delta_offset'] = '0';
  /* Field: Content: Length of program session */
  $handler->display->display_options['fields']['field_length_of_program_session2']['id'] = 'field_length_of_program_session2';
  $handler->display->display_options['fields']['field_length_of_program_session2']['table'] = 'field_data_field_length_of_program_session2';
  $handler->display->display_options['fields']['field_length_of_program_session2']['field'] = 'field_length_of_program_session2';
  /* Field: Content: Frequency */
  $handler->display->display_options['fields']['field_session_frequency']['id'] = 'field_session_frequency';
  $handler->display->display_options['fields']['field_session_frequency']['table'] = 'field_data_field_session_frequency';
  $handler->display->display_options['fields']['field_session_frequency']['field'] = 'field_session_frequency';
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Field: Source Library */
  $handler->display->display_options['fields']['field_source_library_region']['id'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['field'] = 'field_source_library_region';
  /* Field: Content: Piwik Node Views (Visits) */
  $handler->display->display_options['fields']['field_piwik_node_views_nb_visits']['id'] = 'field_piwik_node_views_nb_visits';
  $handler->display->display_options['fields']['field_piwik_node_views_nb_visits']['table'] = 'field_data_field_piwik_node_views';
  $handler->display->display_options['fields']['field_piwik_node_views_nb_visits']['field'] = 'field_piwik_node_views_nb_visits';
  $handler->display->display_options['fields']['field_piwik_node_views_nb_visits']['label'] = 'Visits';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program_info' => 'program_info',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
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
  /* Filter criterion: Content: Primary Audience (field_primary_audience) */
  $handler->display->display_options['filters']['field_primary_audience_value']['id'] = 'field_primary_audience_value';
  $handler->display->display_options['filters']['field_primary_audience_value']['table'] = 'field_data_field_primary_audience';
  $handler->display->display_options['filters']['field_primary_audience_value']['field'] = 'field_primary_audience_value';
  $handler->display->display_options['filters']['field_primary_audience_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_primary_audience_value']['expose']['operator_id'] = 'field_primary_audience_value_op';
  $handler->display->display_options['filters']['field_primary_audience_value']['expose']['label'] = 'Primary Audience (field_primary_audience)';
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
  /* Filter criterion: library provinces */
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['id'] = 'field_source_library_region_tid_1';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['ui_name'] = 'library provinces';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['value'] = array(
    40 => '40',
    25 => '25',
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['operator_id'] = 'field_source_library_region_tid_1_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['label'] = 'Source Library (field_source_library_region)';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['operator'] = 'field_source_library_region_tid_1_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['identifier'] = 'field_source_library_region_tid_1';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['hierarchy'] = 1;
  /* Filter criterion: ab_libraries */
  $handler->display->display_options['filters']['field_source_library_region_tid']['id'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['ui_name'] = 'ab_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid']['value'] = array(
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
  $handler->display->display_options['filters']['field_source_library_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator_id'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['identifier'] = 'tid-ab-libraries';
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
  /* Filter criterion: BC_libraries */
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['id'] = 'field_source_library_region_tid_2';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['ui_name'] = 'BC_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['value'] = array(
    93 => '93',
    97 => '97',
    133 => '133',
    159 => '159',
    64 => '64',
    143 => '143',
    129 => '129',
    160 => '160',
    68 => '68',
    55 => '55',
    54 => '54',
    52 => '52',
    89 => '89',
    62 => '62',
    94 => '94',
    135 => '135',
    158 => '158',
    105 => '105',
    77 => '77',
    163 => '163',
    112 => '112',
    83 => '83',
    119 => '119',
    96 => '96',
    74 => '74',
    138 => '138',
    157 => '157',
    123 => '123',
    142 => '142',
    80 => '80',
    161 => '161',
    76 => '76',
    154 => '154',
    98 => '98',
    84 => '84',
    152 => '152',
    60 => '60',
    88 => '88',
    147 => '147',
    75 => '75',
    125 => '125',
    145 => '145',
    144 => '144',
    156 => '156',
    155 => '155',
    56 => '56',
    51 => '51',
    66 => '66',
    65 => '65',
    130 => '130',
    92 => '92',
    153 => '153',
    106 => '106',
    104 => '104',
    50 => '50',
    128 => '128',
    85 => '85',
    95 => '95',
    70 => '70',
    171 => '171',
    69 => '69',
    61 => '61',
    117 => '117',
    81 => '81',
    146 => '146',
    170 => '170',
    120 => '120',
    151 => '151',
    149 => '149',
    136 => '136',
    148 => '148',
    121 => '121',
    103 => '103',
    137 => '137',
    71 => '71',
    110 => '110',
    63 => '63',
    67 => '67',
    87 => '87',
    82 => '82',
    172 => '172',
    57 => '57',
    59 => '59',
    150 => '150',
    141 => '141',
    140 => '140',
    124 => '124',
    100 => '100',
    90 => '90',
    131 => '131',
    79 => '79',
    127 => '127',
    166 => '166',
    107 => '107',
    58 => '58',
    113 => '113',
    126 => '126',
    73 => '73',
    108 => '108',
    109 => '109',
    72 => '72',
    102 => '102',
    162 => '162',
    91 => '91',
    114 => '114',
    111 => '111',
    86 => '86',
    132 => '132',
    53 => '53',
    99 => '99',
    115 => '115',
    134 => '134',
    101 => '101',
    167 => '167',
    168 => '168',
    169 => '169',
    165 => '165',
    139 => '139',
    118 => '118',
    116 => '116',
    78 => '78',
    122 => '122',
    164 => '164',
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['operator_id'] = 'field_source_library_region_tid_2_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['operator'] = 'field_source_library_region_tid_2_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['identifier'] = 'tid-bc-libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['hierarchy'] = 1;

  /* Display: All Programs */
  $handler = $view->new_display('page', 'All Programs', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program_info' => 'program_info',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by Keyword ';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Primary Audience (field_primary_audience) */
  $handler->display->display_options['filters']['field_primary_audience_value']['id'] = 'field_primary_audience_value';
  $handler->display->display_options['filters']['field_primary_audience_value']['table'] = 'field_data_field_primary_audience';
  $handler->display->display_options['filters']['field_primary_audience_value']['field'] = 'field_primary_audience_value';
  $handler->display->display_options['filters']['field_primary_audience_value']['group'] = 1;
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
  $handler->display->display_options['filters']['field_length_of_program_session2_value']['group'] = 1;
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
  /* Filter criterion: library provinces */
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['id'] = 'field_source_library_region_tid_1';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['ui_name'] = 'library provinces';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['value'] = array(
    40 => '40',
    25 => '25',
    305 => '305',
    221 => '221',
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['operator_id'] = 'field_source_library_region_tid_1_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['operator'] = 'field_source_library_region_tid_1_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['identifier'] = 'field-source-library-region-tid';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['hierarchy'] = 1;
  /* Filter criterion: ab_libraries */
  $handler->display->display_options['filters']['field_source_library_region_tid']['id'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['ui_name'] = 'ab_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid']['value'] = array(
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
  $handler->display->display_options['filters']['field_source_library_region_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator_id'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['identifier'] = 'tid-ab-libraries';
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
  /* Filter criterion: BC_libraries */
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['id'] = 'field_source_library_region_tid_2';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['ui_name'] = 'BC_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['value'] = array(
    172 => '172',
    87 => '87',
    67 => '67',
    100 => '100',
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
    132 => '132',
    166 => '166',
    107 => '107',
    108 => '108',
    114 => '114',
    91 => '91',
    162 => '162',
    72 => '72',
    102 => '102',
    148 => '148',
    85 => '85',
    163 => '163',
    95 => '95',
    105 => '105',
    77 => '77',
    96 => '96',
    74 => '74',
    161 => '161',
    142 => '142',
    123 => '123',
    138 => '138',
    157 => '157',
    158 => '158',
    135 => '135',
    143 => '143',
    129 => '129',
    159 => '159',
    93 => '93',
    133 => '133',
    160 => '160',
    68 => '68',
    94 => '94',
    89 => '89',
    76 => '76',
    154 => '154',
    66 => '66',
    155 => '155',
    144 => '144',
    156 => '156',
    65 => '65',
    50 => '50',
    128 => '128',
    104 => '104',
    106 => '106',
    153 => '153',
    145 => '145',
    125 => '125',
    147 => '147',
    75 => '75',
    88 => '88',
    98 => '98',
    84 => '84',
    152 => '152',
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['operator_id'] = 'field_source_library_region_tid_2_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['operator'] = 'field_source_library_region_tid_2_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['identifier'] = 'tid-bc-libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['hierarchy'] = 1;
  /* Filter criterion: MB_libraries */
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['id'] = 'field_source_library_region_tid_3';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['ui_name'] = 'MB_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['value'] = array(
    308 => '308',
    313 => '313',
    316 => '316',
    319 => '319',
    553 => '553',
    322 => '322',
    325 => '325',
    328 => '328',
    331 => '331',
    334 => '334',
    337 => '337',
    340 => '340',
    343 => '343',
    346 => '346',
    349 => '349',
    352 => '352',
    355 => '355',
    358 => '358',
    361 => '361',
    364 => '364',
    367 => '367',
    370 => '370',
    373 => '373',
    376 => '376',
    379 => '379',
    382 => '382',
    385 => '385',
    388 => '388',
    391 => '391',
    394 => '394',
    397 => '397',
    400 => '400',
    403 => '403',
    406 => '406',
    409 => '409',
    412 => '412',
    415 => '415',
    418 => '418',
    421 => '421',
    424 => '424',
    427 => '427',
    430 => '430',
    433 => '433',
    436 => '436',
    439 => '439',
    442 => '442',
    445 => '445',
    448 => '448',
    451 => '451',
    454 => '454',
    457 => '457',
    460 => '460',
    463 => '463',
    466 => '466',
    469 => '469',
    472 => '472',
    556 => '556',
    475 => '475',
    478 => '478',
    481 => '481',
    484 => '484',
    487 => '487',
    490 => '490',
    493 => '493',
    496 => '496',
    499 => '499',
    502 => '502',
    505 => '505',
    508 => '508',
    511 => '511',
    514 => '514',
    517 => '517',
    520 => '520',
    523 => '523',
    526 => '526',
    529 => '529',
    532 => '532',
    535 => '535',
    538 => '538',
    541 => '541',
    544 => '544',
    547 => '547',
    550 => '550',
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['expose']['operator_id'] = 'field_source_library_region_tid_3_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['expose']['operator'] = 'field_source_library_region_tid_3_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['expose']['identifier'] = 'tid-mb-libraries';
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
  /* Filter criterion: SK_libraries */
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['id'] = 'field_source_library_region_tid_4';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['ui_name'] = 'SK_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['value'] = array(
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
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['expose']['operator_id'] = 'field_source_library_region_tid_4_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['expose']['operator'] = 'field_source_library_region_tid_4_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['expose']['identifier'] = 'tid-sk-libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'all-programs';

  /* Display: Programs Feed */
  $handler = $view->new_display('feed', 'Programs Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'programsfeed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Web widget */
  $handler = $view->new_display('web_widgets', 'Web widget', 'web_widgets_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'progwidg';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['width'] = '400';
  $handler->display->display_options['height'] = '600';
  $export['all_programs'] = $view;

  $view = new view();
  $view->name = 'blog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'The Toolshed Blog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'blog';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => '',
        'language' => '',
        'category' => '',
        'image' => '',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => '',
        'link' => '',
        'description' => '',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => '',
        'pubDate' => '',
      ),
    ),
    'dc' => array(
      'views_rss_dc' => array(
        'title' => '',
        'creator' => '',
        'subject' => '',
        'description' => '',
        'publisher' => '',
        'contributor' => '',
        'date' => '',
        'type' => '',
        'format' => '',
        'identifier' => '',
        'source' => '',
        'language' => '',
        'relation' => '',
        'coverage' => '',
        'rights' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['path'] = 'blog.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $export['blog'] = $view;

  $view = new view();
  $view->name = 'calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-date/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-date/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-date/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-date/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  $export['calendar'] = $view;

  $view = new view();
  $view->name = 'clone_of_stats_programs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stats-Programs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Stats';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1000';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_conference_name' => 'field_conference_name',
    'field_library_region_' => 'field_library_region_',
    'field_source_library_region' => 'field_source_library_region',
    'totalcount' => 'totalcount',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = 'totalcount';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
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
    'field_library_region_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'totalcount' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Source Library */
  $handler->display->display_options['fields']['field_source_library_region']['id'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['field'] = 'field_source_library_region';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Field: Source Library (field_source_library_region) */
  $handler->display->display_options['sorts']['field_source_library_region_tid']['id'] = 'field_source_library_region_tid';
  $handler->display->display_options['sorts']['field_source_library_region_tid']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['sorts']['field_source_library_region_tid']['field'] = 'field_source_library_region_tid';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program_info' => 'program_info',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'stats-programs';
  $export['clone_of_stats_programs'] = $view;

  $view = new view();
  $view->name = 'conference_presentations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference Presentations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Conference Presentations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_authot' => 'field_authot',
    'field_training_topic' => 'field_training_topic',
    'field_source_library_region' => 'field_source_library_region',
    'field_conference_name' => 'field_conference_name',
    'field_conference_year' => 'field_conference_year',
    'field_piwik_node_views_nb_visits' => 'field_piwik_node_views_nb_visits',
    'field_piwik_node_views_nb_hits' => 'field_piwik_node_views_nb_hits',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_authot' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conference_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conference_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_piwik_node_views_nb_visits' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_piwik_node_views_nb_hits' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_authot']['id'] = 'field_authot';
  $handler->display->display_options['fields']['field_authot']['table'] = 'field_data_field_authot';
  $handler->display->display_options['fields']['field_authot']['field'] = 'field_authot';
  $handler->display->display_options['fields']['field_authot']['label'] = 'Presenter';
  $handler->display->display_options['fields']['field_authot']['click_sort_column'] = 'format';
  /* Field: Content: Presentation Topic */
  $handler->display->display_options['fields']['field_training_topic']['id'] = 'field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['table'] = 'field_data_field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['field'] = 'field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['delta_offset'] = '0';
  /* Field: Field: Source Library */
  $handler->display->display_options['fields']['field_source_library_region']['id'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['field'] = 'field_source_library_region';
  /* Field: Content: Conference */
  $handler->display->display_options['fields']['field_conference_name']['id'] = 'field_conference_name';
  $handler->display->display_options['fields']['field_conference_name']['table'] = 'field_data_field_conference_name';
  $handler->display->display_options['fields']['field_conference_name']['field'] = 'field_conference_name';
  /* Field: Content: Conference Year */
  $handler->display->display_options['fields']['field_conference_year']['id'] = 'field_conference_year';
  $handler->display->display_options['fields']['field_conference_year']['table'] = 'field_data_field_conference_year';
  $handler->display->display_options['fields']['field_conference_year']['field'] = 'field_conference_year';
  /* Field: Content: Piwik Node Views (Visits) */
  $handler->display->display_options['fields']['field_piwik_node_views_nb_visits']['id'] = 'field_piwik_node_views_nb_visits';
  $handler->display->display_options['fields']['field_piwik_node_views_nb_visits']['table'] = 'field_data_field_piwik_node_views';
  $handler->display->display_options['fields']['field_piwik_node_views_nb_visits']['field'] = 'field_piwik_node_views_nb_visits';
  $handler->display->display_options['fields']['field_piwik_node_views_nb_visits']['label'] = 'Visits';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Piwik Node Views (Visits) */
  $handler->display->display_options['sorts']['field_piwik_node_views_nb_visits']['id'] = 'field_piwik_node_views_nb_visits';
  $handler->display->display_options['sorts']['field_piwik_node_views_nb_visits']['table'] = 'field_data_field_piwik_node_views';
  $handler->display->display_options['sorts']['field_piwik_node_views_nb_visits']['field'] = 'field_piwik_node_views_nb_visits';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_presentation' => 'conference_presentation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by Keyword';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Conference (field_conference_name) */
  $handler->display->display_options['filters']['field_conference_name_tid']['id'] = 'field_conference_name_tid';
  $handler->display->display_options['filters']['field_conference_name_tid']['table'] = 'field_data_field_conference_name';
  $handler->display->display_options['filters']['field_conference_name_tid']['field'] = 'field_conference_name_tid';
  $handler->display->display_options['filters']['field_conference_name_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_conference_name_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_conference_name_tid']['expose']['operator_id'] = 'field_conference_name_tid_op';
  $handler->display->display_options['filters']['field_conference_name_tid']['expose']['label'] = 'Conference';
  $handler->display->display_options['filters']['field_conference_name_tid']['expose']['operator'] = 'field_conference_name_tid_op';
  $handler->display->display_options['filters']['field_conference_name_tid']['expose']['identifier'] = 'field_conference_name_tid';
  $handler->display->display_options['filters']['field_conference_name_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_conference_name_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_conference_name_tid']['group_info']['label'] = 'Conference (field_conference_name)';
  $handler->display->display_options['filters']['field_conference_name_tid']['group_info']['identifier'] = 'field_conference_name_tid';
  $handler->display->display_options['filters']['field_conference_name_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_conference_name_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_conference_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_conference_name_tid']['vocabulary'] = 'conferences';
  $handler->display->display_options['filters']['field_conference_name_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_conference_name_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Conference Year (field_conference_year) */
  $handler->display->display_options['filters']['field_conference_year_value']['id'] = 'field_conference_year_value';
  $handler->display->display_options['filters']['field_conference_year_value']['table'] = 'field_data_field_conference_year';
  $handler->display->display_options['filters']['field_conference_year_value']['field'] = 'field_conference_year_value';
  $handler->display->display_options['filters']['field_conference_year_value']['group'] = 1;
  $handler->display->display_options['filters']['field_conference_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_conference_year_value']['expose']['operator_id'] = 'field_conference_year_value_op';
  $handler->display->display_options['filters']['field_conference_year_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_conference_year_value']['expose']['operator'] = 'field_conference_year_value_op';
  $handler->display->display_options['filters']['field_conference_year_value']['expose']['identifier'] = 'field_conference_year_value';
  $handler->display->display_options['filters']['field_conference_year_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_conference_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Field: Source Library (field_source_library_region) */
  $handler->display->display_options['filters']['field_source_library_region_tid']['id'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator_id'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['label'] = 'Source Library';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['identifier'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_presentation' => 'conference_presentation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by Keyword';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Conference (field_conference_name) */
  $handler->display->display_options['filters']['field_conference_name_tid']['id'] = 'field_conference_name_tid';
  $handler->display->display_options['filters']['field_conference_name_tid']['table'] = 'field_data_field_conference_name';
  $handler->display->display_options['filters']['field_conference_name_tid']['field'] = 'field_conference_name_tid';
  $handler->display->display_options['filters']['field_conference_name_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_conference_name_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_conference_name_tid']['expose']['operator_id'] = 'field_conference_name_tid_op';
  $handler->display->display_options['filters']['field_conference_name_tid']['expose']['label'] = 'Conference';
  $handler->display->display_options['filters']['field_conference_name_tid']['expose']['operator'] = 'field_conference_name_tid_op';
  $handler->display->display_options['filters']['field_conference_name_tid']['expose']['identifier'] = 'field_conference_name_tid';
  $handler->display->display_options['filters']['field_conference_name_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_conference_name_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_conference_name_tid']['group_info']['label'] = 'Conference (field_conference_name)';
  $handler->display->display_options['filters']['field_conference_name_tid']['group_info']['identifier'] = 'field_conference_name_tid';
  $handler->display->display_options['filters']['field_conference_name_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_conference_name_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_conference_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_conference_name_tid']['vocabulary'] = 'conferences';
  $handler->display->display_options['filters']['field_conference_name_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_conference_name_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Conference Year (field_conference_year) */
  $handler->display->display_options['filters']['field_conference_year_value']['id'] = 'field_conference_year_value';
  $handler->display->display_options['filters']['field_conference_year_value']['table'] = 'field_data_field_conference_year';
  $handler->display->display_options['filters']['field_conference_year_value']['field'] = 'field_conference_year_value';
  $handler->display->display_options['filters']['field_conference_year_value']['group'] = 1;
  $handler->display->display_options['filters']['field_conference_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_conference_year_value']['expose']['operator_id'] = 'field_conference_year_value_op';
  $handler->display->display_options['filters']['field_conference_year_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_conference_year_value']['expose']['operator'] = 'field_conference_year_value_op';
  $handler->display->display_options['filters']['field_conference_year_value']['expose']['identifier'] = 'field_conference_year_value';
  $handler->display->display_options['filters']['field_conference_year_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_conference_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Presentation Topic */
  $handler->display->display_options['filters']['field_training_topic_value']['id'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['field_training_topic_value']['table'] = 'field_data_field_training_topic';
  $handler->display->display_options['filters']['field_training_topic_value']['field'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['field_training_topic_value']['ui_name'] = 'Presentation Topic';
  $handler->display->display_options['filters']['field_training_topic_value']['group'] = 1;
  $handler->display->display_options['filters']['field_training_topic_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['operator_id'] = 'field_training_topic_value_op';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['operator'] = 'field_training_topic_value_op';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['identifier'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Field: Source Library (field_source_library_region) */
  $handler->display->display_options['filters']['field_source_library_region_tid']['id'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator_id'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['label'] = 'Source Library';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['identifier'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'conference-presentations';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'conference-presentations.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $export['conference_presentations'] = $view;

  $view = new view();
  $view->name = 'current_and_upcoming_bookings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Current and Upcoming Bookings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Current and Upcoming Bookings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Resource Booking Date */
  $handler->display->display_options['fields']['field_resource_booking_date']['id'] = 'field_resource_booking_date';
  $handler->display->display_options['fields']['field_resource_booking_date']['table'] = 'field_data_field_resource_booking_date';
  $handler->display->display_options['fields']['field_resource_booking_date']['field'] = 'field_resource_booking_date';
  $handler->display->display_options['fields']['field_resource_booking_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_resource_booking_date']['delta_offset'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'booking_resource' => 'booking_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'available_resources';

  /* Display: Digital Media Lab 1 Bookings */
  $handler = $view->new_display('block', 'Digital Media Lab 1 Bookings', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Digital Media Lab 1 Current and Upcoming Bookings ';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'booking_resource' => 'booking_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'available_resources';

  /* Display: Digital Media Lab 3 Bookings */
  $handler = $view->new_display('block', 'Digital Media Lab 3 Bookings', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Digital Media Lab 3 Current and Upcoming Bookings';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'booking_resource' => 'booking_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'available_resources';
  $export['current_and_upcoming_bookings'] = $view;

  $view = new view();
  $view->name = 'featured';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Front Page Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="featured-title">Featured</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_program_description']['id'] = 'field_program_description';
  $handler->display->display_options['fields']['field_program_description']['table'] = 'field_data_field_program_description';
  $handler->display->display_options['fields']['field_program_description']['field'] = 'field_program_description';
  $handler->display->display_options['fields']['field_program_description']['label'] = '';
  $handler->display->display_options['fields']['field_program_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_program_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_program_description']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="all-buttons browse-all">
<a href="/conference-presentations" class="button presentation">Browse All Presentations</a> <a href="/all-programs" class="button programs">Browse All Programs</a> <a href="/allresources" class="button resources">Browse All Resources</a>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program_info' => 'program_info',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: Featured Programs */
  $handler = $view->new_display('block', 'Featured Programs', 'programs');

  /* Display: Featured Resources */
  $handler = $view->new_display('block', 'Featured Resources', 'resources');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_resource' => 'training_resource',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: Featured Presentations */
  $handler = $view->new_display('block', 'Featured Presentations', 'presentations');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_presentation' => 'conference_presentation',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $export['featured'] = $view;

  $view = new view();
  $view->name = 'main_page_slide_show';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Main Page Slide Show';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Main Page Slide Show';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Slide Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_page_slides' => 'main_page_slides',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Main Page Slides';
  $export['main_page_slide_show'] = $view;

  $view = new view();
  $view->name = 'mobile_technology_training_labs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Mobile Technology Training Labs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mobile Technology Labs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'available_resources' => 'available_resources',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area_1']['id'] = 'area_1';
  $handler->display->display_options['footer']['area_1']['table'] = 'views';
  $handler->display->display_options['footer']['area_1']['field'] = 'area';
  $handler->display->display_options['footer']['area_1']['label'] = 'Webform link';
  $handler->display->display_options['footer']['area_1']['content'] = '<p><a class="button" href="node/170">Request a Mobile Technology Training Lab</a></p>';
  $handler->display->display_options['footer']['area_1']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<h2>Mobile Technology Training Labs Booking Calendar</h2>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'resources_calendar:page_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['path'] = 'mobile-technology-training-labs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Mobile Training Labs';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['mobile_technology_training_labs'] = $view;

  $view = new view();
  $view->name = 'new_tal_online_faq';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New TAL Online FAQ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'New TAL Online FAQ Contents';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_content' => 'field_content',
  );
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'new_tal_online_info' => 'new_tal_online_info',
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    0 => '15',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'new_tal_online_info_pages';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view_1']['id'] = 'view_1';
  $handler->display->display_options['header']['view_1']['table'] = 'views';
  $handler->display->display_options['header']['view_1']['field'] = 'view';
  $handler->display->display_options['header']['view_1']['view_to_insert'] = 'new_tal_online_faq:block_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Content */
  $handler->display->display_options['fields']['field_content']['id'] = 'field_content';
  $handler->display->display_options['fields']['field_content']['table'] = 'field_data_field_content';
  $handler->display->display_options['fields']['field_content']['field'] = 'field_content';
  $handler->display->display_options['fields']['field_content']['label'] = '';
  $handler->display->display_options['fields']['field_content']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['label'] = '';
  $handler->display->display_options['fields']['field_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Type (field_type) */
  $handler->display->display_options['sorts']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['sorts']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['sorts']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['path'] = 'new-tal-online-faq';

  /* Display: FAQ Contents */
  $handler = $view->new_display('block', 'FAQ Contents', 'block_1');
  $export['new_tal_online_faq'] = $view;

  $view = new view();
  $view->name = 'regiona_stats';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Regional Stats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Regional Stats';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'tid' => 'tid',
    'name' => 'name',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'tid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'term_on_node';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'source_library' => 'source_library',
    'available_resources' => 0,
    'tags' => 0,
    'forums' => 0,
    'conferences' => 0,
    'library_region' => 0,
    'new_tal_online_info_pages' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['relationships']['parent']['label'] = 'parent_term';
  $handler->display->display_options['relationships']['parent']['required'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'parent';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = 'Count';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_presentation' => 'conference_presentation',
    'program_info' => 'program_info',
    'training_resource' => 'training_resource',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'regional-stats';
  $export['regiona_stats'] = $view;

  $view = new view();
  $view->name = 'regional_project';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Regional Project Topics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Regional Project';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Select';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'nothing';
  $handler->display->display_options['style_options']['choose'] = '- Menu -';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'regional_projects:page';
  $handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
  /* Relationship: Content: Regional Project (field_regional_project) */
  $handler->display->display_options['relationships']['field_regional_project_nid']['id'] = 'field_regional_project_nid';
  $handler->display->display_options['relationships']['field_regional_project_nid']['table'] = 'field_data_field_regional_project';
  $handler->display->display_options['relationships']['field_regional_project_nid']['field'] = 'field_regional_project_nid';
  $handler->display->display_options['relationships']['field_regional_project_nid']['delta'] = '-1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Regional Project */
  $handler->display->display_options['fields']['field_regional_project']['id'] = 'field_regional_project';
  $handler->display->display_options['fields']['field_regional_project']['table'] = 'field_data_field_regional_project';
  $handler->display->display_options['fields']['field_regional_project']['field'] = 'field_regional_project';
  $handler->display->display_options['fields']['field_regional_project']['label'] = '';
  $handler->display->display_options['fields']['field_regional_project']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_regional_project']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_regional_project']['type'] = 'node_reference_nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = '/regional_project/[field_regional_project]/topic/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'regional_project/[field_regional_project]/topic/[nid]';
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'regional_project/[field_regional_project]/topic/[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Regional Project (field_regional_project) */
  $handler->display->display_options['arguments']['field_regional_project_nid']['id'] = 'field_regional_project_nid';
  $handler->display->display_options['arguments']['field_regional_project_nid']['table'] = 'field_data_field_regional_project';
  $handler->display->display_options['arguments']['field_regional_project_nid']['field'] = 'field_regional_project_nid';
  $handler->display->display_options['arguments']['field_regional_project_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_regional_project_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_regional_project_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_regional_project_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_regional_project_nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'agc_page_content' => 'agc_page_content',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'regional_project';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['regional_project'] = $view;

  $view = new view();
  $view->name = 'regional_project_topic';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Regional Project Topic';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Regional Project Topic';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Select';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'regional_project:page';
  $handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Regional Project (field_regional_project) */
  $handler->display->display_options['arguments']['field_regional_project_nid']['id'] = 'field_regional_project_nid';
  $handler->display->display_options['arguments']['field_regional_project_nid']['table'] = 'field_data_field_regional_project';
  $handler->display->display_options['arguments']['field_regional_project_nid']['field'] = 'field_regional_project_nid';
  $handler->display->display_options['arguments']['field_regional_project_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_regional_project_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_regional_project_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_regional_project_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_regional_project_nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'agc_page_content' => 'agc_page_content',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'regional_project/%/topic/%';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['regional_project_topic'] = $view;

  $view = new view();
  $view->name = 'regional_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Regional Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Regional Projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Regional Project (field_regional_project) */
  $handler->display->display_options['relationships']['field_regional_project_nid']['id'] = 'field_regional_project_nid';
  $handler->display->display_options['relationships']['field_regional_project_nid']['table'] = 'field_data_field_regional_project';
  $handler->display->display_options['relationships']['field_regional_project_nid']['field'] = 'field_regional_project_nid';
  $handler->display->display_options['relationships']['field_regional_project_nid']['delta'] = '-1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'regional_project/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_project_description']['id'] = 'field_project_description';
  $handler->display->display_options['fields']['field_project_description']['table'] = 'field_data_field_project_description';
  $handler->display->display_options['fields']['field_project_description']['field'] = 'field_project_description';
  $handler->display->display_options['fields']['field_project_description']['label'] = '';
  $handler->display->display_options['fields']['field_project_description']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'regional_projects' => 'regional_projects',
  );

  /* Display: Regional Projects */
  $handler = $view->new_display('page', 'Regional Projects', 'page');
  $handler->display->display_options['path'] = 'regional-projects';
  $export['regional_projects'] = $view;

  $view = new view();
  $view->name = 'resources_calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Resources Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Resource Booking Date */
  $handler->display->display_options['fields']['field_resource_booking_date']['id'] = 'field_resource_booking_date';
  $handler->display->display_options['fields']['field_resource_booking_date']['table'] = 'field_data_field_resource_booking_date';
  $handler->display->display_options['fields']['field_resource_booking_date']['field'] = 'field_resource_booking_date';
  $handler->display->display_options['fields']['field_resource_booking_date']['label'] = '';
  $handler->display->display_options['fields']['field_resource_booking_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_booking_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_resource_booking_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_resource_booking_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_resource_booking_date']['delta_offset'] = '0';
  /* Sort criterion: Content: Resource Booking Date -  start date (field_resource_booking_date) */
  $handler->display->display_options['sorts']['field_resource_booking_date_value']['id'] = 'field_resource_booking_date_value';
  $handler->display->display_options['sorts']['field_resource_booking_date_value']['table'] = 'field_data_field_resource_booking_date';
  $handler->display->display_options['sorts']['field_resource_booking_date_value']['field'] = 'field_resource_booking_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_resource_booking_date.field_resource_booking_date_value' => 'field_data_field_resource_booking_date.field_resource_booking_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-resource-booking-date/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_resource_booking_date.field_resource_booking_date_value' => 'field_data_field_resource_booking_date.field_resource_booking_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-resource-booking-date/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_resource_booking_date.field_resource_booking_date_value' => 'field_data_field_resource_booking_date.field_resource_booking_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-resource-booking-date/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Resource Booking Date */
  $handler->display->display_options['fields']['field_resource_booking_date']['id'] = 'field_resource_booking_date';
  $handler->display->display_options['fields']['field_resource_booking_date']['table'] = 'field_data_field_resource_booking_date';
  $handler->display->display_options['fields']['field_resource_booking_date']['field'] = 'field_resource_booking_date';
  $handler->display->display_options['fields']['field_resource_booking_date']['label'] = '';
  $handler->display->display_options['fields']['field_resource_booking_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_booking_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_resource_booking_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_resource_booking_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_resource_booking_date']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_resource_booking_date.field_resource_booking_date_value' => 'field_data_field_resource_booking_date.field_resource_booking_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-resource-booking-date/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_resource_booking_date.field_resource_booking_date_value' => 'field_data_field_resource_booking_date.field_resource_booking_date_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_resource_booking_date.field_resource_booking_date_value' => 'field_data_field_resource_booking_date.field_resource_booking_date_value',
  );
  $export['resources_calendar'] = $view;

  $view = new view();
  $view->name = 'stats';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Stats';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1000';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_conference_name' => 'field_conference_name',
    'field_library_region_' => 'field_library_region_',
    'field_source_library_region' => 'field_source_library_region',
    'totalcount' => 'totalcount',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = 'totalcount';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
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
    'field_library_region_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'totalcount' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Source Library */
  $handler->display->display_options['fields']['field_source_library_region']['id'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['field'] = 'field_source_library_region';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Field: Source Library (field_source_library_region) */
  $handler->display->display_options['sorts']['field_source_library_region_tid']['id'] = 'field_source_library_region_tid';
  $handler->display->display_options['sorts']['field_source_library_region_tid']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['sorts']['field_source_library_region_tid']['field'] = 'field_source_library_region_tid';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_resource' => 'training_resource',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'stats';
  $export['stats'] = $view;

  $view = new view();
  $view->name = 'stats_presentations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stats-Presentations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Stats';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1000';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_conference_name' => 'field_conference_name',
    'field_library_region_' => 'field_library_region_',
    'field_source_library_region' => 'field_source_library_region',
    'totalcount' => 'totalcount',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = 'totalcount';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
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
    'field_library_region_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'totalcount' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Conference */
  $handler->display->display_options['fields']['field_conference_name']['id'] = 'field_conference_name';
  $handler->display->display_options['fields']['field_conference_name']['table'] = 'field_data_field_conference_name';
  $handler->display->display_options['fields']['field_conference_name']['field'] = 'field_conference_name';
  /* Field: Field: Source Library */
  $handler->display->display_options['fields']['field_source_library_region']['id'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['field'] = 'field_source_library_region';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Field: Source Library (field_source_library_region) */
  $handler->display->display_options['sorts']['field_source_library_region_tid']['id'] = 'field_source_library_region_tid';
  $handler->display->display_options['sorts']['field_source_library_region_tid']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['sorts']['field_source_library_region_tid']['field'] = 'field_source_library_region_tid';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_presentation' => 'conference_presentation',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'stats-presentations';
  $export['stats_presentations'] = $view;

  $view = new view();
  $view->name = 'toolshed_blog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Toolshed Blog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Toolshed Blog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'toolshed_blog_post' => 'toolshed_blog_post',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'toolshed-blog';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'blog/rss.xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['toolshed_blog'] = $view;

  $view = new view();
  $view->name = 'training_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Training Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Training Documents';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_training_topic' => 'field_training_topic',
    'field_rating' => 'field_rating',
    'field_resource_type' => 'field_resource_type',
    'created' => 'created',
    'field_source_library_region' => 'field_source_library_region',
    'field_piwik_node_views_nb_visits' => 'field_piwik_node_views_nb_visits',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
    'field_piwik_node_views_nb_visits' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
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
  $handler->display->display_options['fields']['field_training_topic']['label'] = 'Training Topic';
  $handler->display->display_options['fields']['field_training_topic']['delta_offset'] = '0';
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Content: Resource Type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = 'Type';
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
  /* Field: Content: Piwik Node Views (Visits) */
  $handler->display->display_options['fields']['field_piwik_node_views_nb_visits']['id'] = 'field_piwik_node_views_nb_visits';
  $handler->display->display_options['fields']['field_piwik_node_views_nb_visits']['table'] = 'field_data_field_piwik_node_views';
  $handler->display->display_options['fields']['field_piwik_node_views_nb_visits']['field'] = 'field_piwik_node_views_nb_visits';
  $handler->display->display_options['fields']['field_piwik_node_views_nb_visits']['label'] = 'Visits';
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
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by Keyword';
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
  $handler->display->display_options['filters']['field_resource_type_value']['value'] = array(
    'PDF' => 'PDF',
    'Web Resource' => 'Web Resource',
    'Word' => 'Word',
  );
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
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['reduce'] = TRUE;
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
  /* Filter criterion: library province */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['ui_name'] = 'library province';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    221 => '221',
    40 => '40',
    25 => '25',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'field-source-library-region-tid';
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
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';
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
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['identifier'] = 'tid-ab-libraries';
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
  $handler->display->display_options['filters']['field_source_library_region_tid']['id'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['ui_name'] = 'bc_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid']['value'] = array(
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
  $handler->display->display_options['filters']['field_source_library_region_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator_id'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['identifier'] = 'tid-bc-libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_value_1']['id'] = 'field_resource_type_value_1';
  $handler->display->display_options['filters']['field_resource_type_value_1']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_value_1']['field'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value_1']['operator'] = 'not empty';

  /* Display: Training Resource Page */
  $handler = $view->new_display('page', 'Training Resource Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse All - Training Resources';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<em>Sorry, no results found at this time.</em>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by Keyword';
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
  $handler->display->display_options['filters']['field_resource_type_value']['value'] = array(
    'PDF' => 'PDF',
    'Web Resource' => 'Web Resource',
    'Word' => 'Word',
  );
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
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['reduce'] = TRUE;
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
    6 => 0,
  );
  /* Filter criterion: library province */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['ui_name'] = 'library province';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    40 => '40',
    25 => '25',
    305 => '305',
    221 => '221',
    1053 => '1053',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'field-source-library-region-tid';
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
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';
  /* Filter criterion: ab_libraries */
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['id'] = 'field_source_library_region_tid_1';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['ui_name'] = 'ab_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['value'] = array(
    188 => '188',
    173 => '173',
    189 => '189',
    41 => '41',
    190 => '190',
    82 => '82',
    191 => '191',
    192 => '192',
    213 => '213',
    193 => '193',
    178 => '178',
    194 => '194',
    181 => '181',
    195 => '195',
    174 => '174',
    43 => '43',
    44 => '44',
    196 => '196',
    197 => '197',
    198 => '198',
    199 => '199',
    200 => '200',
    201 => '201',
    186 => '186',
    176 => '176',
    183 => '183',
    202 => '202',
    184 => '184',
    203 => '203',
    204 => '204',
    205 => '205',
    45 => '45',
    187 => '187',
    206 => '206',
    180 => '180',
    47 => '47',
    207 => '207',
    208 => '208',
    209 => '209',
    210 => '210',
    48 => '48',
    49 => '49',
    211 => '211',
    179 => '179',
    212 => '212',
    177 => '177',
    185 => '185',
    214 => '214',
    215 => '215',
    216 => '216',
    175 => '175',
    182 => '182',
    35 => '35',
    217 => '217',
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['operator_id'] = 'field_source_library_region_tid_1_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['operator'] = 'field_source_library_region_tid_1_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['identifier'] = 'tid-ab-libraries';
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
  $handler->display->display_options['filters']['field_source_library_region_tid']['id'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['ui_name'] = 'bc_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid']['value'] = array(
    1014 => '1014',
    1017 => '1017',
    1020 => '1020',
    1002 => '1002',
    936 => '936',
    969 => '969',
    939 => '939',
    942 => '942',
    1023 => '1023',
    1026 => '1026',
    1029 => '1029',
    945 => '945',
    972 => '972',
    1032 => '1032',
    1035 => '1035',
    1005 => '1005',
    975 => '975',
    948 => '948',
    1008 => '1008',
    951 => '951',
    954 => '954',
    957 => '957',
    960 => '960',
    1038 => '1038',
    978 => '978',
    963 => '963',
    981 => '981',
    984 => '984',
    1041 => '1041',
    1044 => '1044',
    987 => '987',
    993 => '993',
    990 => '990',
    996 => '996',
    966 => '966',
    999 => '999',
    172 => '172',
    67 => '67',
    100 => '100',
    124 => '124',
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
    134 => '134',
    167 => '167',
    101 => '101',
    168 => '168',
    169 => '169',
    164 => '164',
    122 => '122',
    78 => '78',
    139 => '139',
    118 => '118',
    116 => '116',
    99 => '99',
    86 => '86',
    126 => '126',
    73 => '73',
    132 => '132',
    166 => '166',
    107 => '107',
    108 => '108',
    114 => '114',
    162 => '162',
    72 => '72',
    102 => '102',
    91 => '91',
    148 => '148',
    85 => '85',
    163 => '163',
    95 => '95',
    77 => '77',
    96 => '96',
    105 => '105',
    138 => '138',
    123 => '123',
    161 => '161',
    142 => '142',
    74 => '74',
    157 => '157',
    158 => '158',
    135 => '135',
    143 => '143',
    129 => '129',
    64 => '64',
    159 => '159',
    93 => '93',
    133 => '133',
    160 => '160',
    68 => '68',
    89 => '89',
    76 => '76',
    154 => '154',
    155 => '155',
    66 => '66',
    144 => '144',
    156 => '156',
    65 => '65',
    50 => '50',
    128 => '128',
    104 => '104',
    153 => '153',
    106 => '106',
    88 => '88',
    147 => '147',
    125 => '125',
    145 => '145',
    84 => '84',
  );
  $handler->display->display_options['filters']['field_source_library_region_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator_id'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['identifier'] = 'tid-bc-libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid']['hierarchy'] = 1;
  /* Filter criterion: sk_libraries */
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['id'] = 'field_source_library_region_tid_2';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['ui_name'] = 'sk_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['value'] = array(
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
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['operator_id'] = 'field_source_library_region_tid_2_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['operator'] = 'field_source_library_region_tid_2_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_2']['expose']['identifier'] = 'tid-sk-libraries';
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
  /* Filter criterion: mb_libraries */
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['id'] = 'field_source_library_region_tid_3';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['ui_name'] = 'mb_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['value'] = array(
    308 => '308',
    313 => '313',
    316 => '316',
    319 => '319',
    553 => '553',
    322 => '322',
    325 => '325',
    328 => '328',
    331 => '331',
    334 => '334',
    337 => '337',
    340 => '340',
    343 => '343',
    346 => '346',
    349 => '349',
    352 => '352',
    355 => '355',
    358 => '358',
    361 => '361',
    364 => '364',
    367 => '367',
    370 => '370',
    373 => '373',
    376 => '376',
    379 => '379',
    382 => '382',
    385 => '385',
    388 => '388',
    391 => '391',
    394 => '394',
    397 => '397',
    400 => '400',
    403 => '403',
    406 => '406',
    409 => '409',
    412 => '412',
    415 => '415',
    418 => '418',
    421 => '421',
    424 => '424',
    427 => '427',
    430 => '430',
    433 => '433',
    436 => '436',
    439 => '439',
    442 => '442',
    445 => '445',
    448 => '448',
    451 => '451',
    454 => '454',
    457 => '457',
    460 => '460',
    463 => '463',
    466 => '466',
    469 => '469',
    472 => '472',
    556 => '556',
    475 => '475',
    478 => '478',
    481 => '481',
    484 => '484',
    487 => '487',
    490 => '490',
    493 => '493',
    496 => '496',
    499 => '499',
    502 => '502',
    505 => '505',
    508 => '508',
    511 => '511',
    514 => '514',
    517 => '517',
    520 => '520',
    523 => '523',
    526 => '526',
    529 => '529',
    532 => '532',
    535 => '535',
    538 => '538',
    541 => '541',
    544 => '544',
    547 => '547',
    550 => '550',
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['expose']['operator_id'] = 'field_source_library_region_tid_3_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['expose']['operator'] = 'field_source_library_region_tid_3_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['expose']['identifier'] = 'tid-mb-libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid_3']['hierarchy'] = 1;
  /* Filter criterion: yt_libraries */
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['id'] = 'field_source_library_region_tid_4';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['ui_name'] = 'yt_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['value'] = array(
    1056 => '1056',
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['expose']['operator_id'] = 'field_source_library_region_tid_4_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['expose']['operator'] = 'field_source_library_region_tid_4_op';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['expose']['identifier'] = 'tid-yt-libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid_4']['hierarchy'] = 1;
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_value_1']['id'] = 'field_resource_type_value_1';
  $handler->display->display_options['filters']['field_resource_type_value_1']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_value_1']['field'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_resource_type_value_1']['group'] = 1;
  $handler->display->display_options['path'] = 'allresources';

  /* Display: Training Documents */
  $handler = $view->new_display('page', 'Training Documents', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Training Documents';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<em>Sorry, no results found at this time.</em>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by Keyword';
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
  $handler->display->display_options['filters']['field_resource_type_value']['value'] = array(
    'PDF' => 'PDF',
    'Power Point' => 'Power Point',
    'Web Resource' => 'Web Resource',
    'Word' => 'Word',
    'ZIP' => 'ZIP',
  );
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
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['reduce'] = TRUE;
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
  /* Filter criterion: library province */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['ui_name'] = 'library province';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    221 => '221',
    40 => '40',
    25 => '25',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'field-source-library-region-tid';
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
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';
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
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['identifier'] = 'tid-ab-libraries';
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
  $handler->display->display_options['filters']['field_source_library_region_tid']['id'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['ui_name'] = 'bc_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid']['value'] = array(
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
  $handler->display->display_options['filters']['field_source_library_region_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator_id'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['identifier'] = 'tid-bc-libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_value_1']['id'] = 'field_resource_type_value_1';
  $handler->display->display_options['filters']['field_resource_type_value_1']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_value_1']['field'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value_1']['value'] = array(
    'PDF' => 'PDF',
    'Power Point' => 'Power Point',
    'Web Resource' => 'Web Resource',
    'Word' => 'Word',
    'ZIP' => 'ZIP',
  );
  $handler->display->display_options['path'] = 'guides';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Documents';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Training Videos */
  $handler = $view->new_display('page', 'Training Videos', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Videos';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<em>Sorry, no results found at this time.</em>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
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
  /* Field: Content: Video Link */
  $handler->display->display_options['fields']['field_video_link']['id'] = 'field_video_link';
  $handler->display->display_options['fields']['field_video_link']['table'] = 'field_data_field_video_link';
  $handler->display->display_options['fields']['field_video_link']['field'] = 'field_video_link';
  $handler->display->display_options['fields']['field_video_link']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video_link']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_video_link']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'source',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by Keyword';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
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
  /* Filter criterion: library province */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['ui_name'] = 'library province';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    221 => '221',
    40 => '40',
    25 => '25',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'field-source-library-region-tid';
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
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';
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
  $handler->display->display_options['filters']['field_source_library_region_tid_1']['expose']['identifier'] = 'tid-ab-libraries';
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
  $handler->display->display_options['filters']['field_source_library_region_tid']['id'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['filters']['field_source_library_region_tid']['field'] = 'field_source_library_region_tid';
  $handler->display->display_options['filters']['field_source_library_region_tid']['ui_name'] = 'bc_libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid']['value'] = array(
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
  $handler->display->display_options['filters']['field_source_library_region_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator_id'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['operator'] = 'field_source_library_region_tid_op';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['identifier'] = 'tid-bc-libraries';
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_source_library_region_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_source_library_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_library_region_tid']['vocabulary'] = 'source_library';
  $handler->display->display_options['filters']['field_source_library_region_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_value']['id'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_value']['field'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['value'] = array(
    'Video' => 'Video',
  );
  $handler->display->display_options['path'] = 'videos';

  /* Display: Recent Resource Additions */
  $handler = $view->new_display('block', 'Recent Resource Additions', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Training Resource Additions';
  $handler->display->display_options['display_description'] = 'Block for Main Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_training_topic' => 'field_training_topic',
    'field_source_library_' => 'field_source_library_',
    'field_rating' => 'field_rating',
    'field_resource_type' => 'field_resource_type',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_topic' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_source_library_' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rating' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Resource Type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = 'Type';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Age';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_resource' => 'training_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Recent Resource Additions';

  /* Display: Recent Resource Additions */
  $handler = $view->new_display('block', 'Recent Resource Additions', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Training Resource Additions';
  $handler->display->display_options['display_description'] = 'Block for Main Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_training_topic' => 'field_training_topic',
    'field_source_library_' => 'field_source_library_',
    'field_rating' => 'field_rating',
    'field_resource_type' => 'field_resource_type',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_topic' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_source_library_' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rating' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_resource' => 'training_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Recent Resource Additions';

  /* Display: SRC 2013 */
  $handler = $view->new_display('page', 'SRC 2013', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Summer Reading Club 2013 Resources';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<em>Sorry, no results found at this time.</em>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_resource' => 'training_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by Keyword';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Presentation Topic (field_training_topic) */
  $handler->display->display_options['filters']['field_training_topic_value_1']['id'] = 'field_training_topic_value_1';
  $handler->display->display_options['filters']['field_training_topic_value_1']['table'] = 'field_data_field_training_topic';
  $handler->display->display_options['filters']['field_training_topic_value_1']['value'] = array(
    'Reader\'s Advisory' => 'Reader\'s Advisory',
  );
  $handler->display->display_options['filters']['field_training_topic_value_1']['field'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['field_training_topic_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_topic_value_1']['expose']['operator_id'] = 'field_training_topic_value_1_op';
  $handler->display->display_options['filters']['field_training_topic_value_1']['expose']['label'] = 'Training Topic (field_training_topic)';
  $handler->display->display_options['filters']['field_training_topic_value_1']['expose']['operator'] = 'field_training_topic_value_1_op';
  $handler->display->display_options['filters']['field_training_topic_value_1']['expose']['identifier'] = 'field_training_topic_value_1';
  $handler->display->display_options['filters']['field_training_topic_value_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_training_topic_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_value']['id'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_value']['field'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['operator_id'] = 'field_resource_type_value_op';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['label'] = 'Resource Type ';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['operator'] = 'field_resource_type_value_op';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['identifier'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'SRC2013';

  /* Display: Web Resources */
  $handler = $view->new_display('page', 'Web Resources', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Web Resources';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_source_library_']['id'] = 'field_source_library_';
  $handler->display->display_options['fields']['field_source_library_']['table'] = 'field_data_field_source_library_';
  $handler->display->display_options['fields']['field_source_library_']['field'] = 'field_source_library_';
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/basic/basic.css',
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
  /* Field: Content: Web Link */
  $handler->display->display_options['fields']['field_web_link']['id'] = 'field_web_link';
  $handler->display->display_options['fields']['field_web_link']['table'] = 'field_data_field_web_link';
  $handler->display->display_options['fields']['field_web_link']['field'] = 'field_web_link';
  $handler->display->display_options['fields']['field_web_link']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_resource' => 'training_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by Keyword';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_source_library__value']['id'] = 'field_source_library__value';
  $handler->display->display_options['filters']['field_source_library__value']['table'] = 'field_data_field_source_library_';
  $handler->display->display_options['filters']['field_source_library__value']['field'] = 'field_source_library__value';
  $handler->display->display_options['filters']['field_source_library__value']['group'] = 1;
  $handler->display->display_options['filters']['field_source_library__value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_library__value']['expose']['operator_id'] = 'field_source_library__value_op';
  $handler->display->display_options['filters']['field_source_library__value']['expose']['label'] = 'Source Library  ';
  $handler->display->display_options['filters']['field_source_library__value']['expose']['operator'] = 'field_source_library__value_op';
  $handler->display->display_options['filters']['field_source_library__value']['expose']['identifier'] = 'field_source_library__value';
  $handler->display->display_options['filters']['field_source_library__value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_library__value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Presentation Topic (field_training_topic) */
  $handler->display->display_options['filters']['field_training_topic_value']['id'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['field_training_topic_value']['table'] = 'field_data_field_training_topic';
  $handler->display->display_options['filters']['field_training_topic_value']['field'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['field_training_topic_value']['group'] = 1;
  $handler->display->display_options['filters']['field_training_topic_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['operator_id'] = 'field_training_topic_value_op';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['label'] = 'Training Topic ';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['operator'] = 'field_training_topic_value_op';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['identifier'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_value']['id'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_value']['field'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['value'] = array(
    'Web Resource' => 'Web Resource',
    'Webinar' => 'Webinar',
  );
  $handler->display->display_options['path'] = 'WebResources';

  /* Display: Training Resource Feed */
  $handler = $view->new_display('feed', 'Training Resource Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Presentation Topic */
  $handler->display->display_options['fields']['field_training_topic']['id'] = 'field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['table'] = 'field_data_field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['field'] = 'field_training_topic';
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Content: Resource Type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = 'Type';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Age';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['date_format'] = 'long';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: TEST LINK */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['ui_name'] = 'TEST LINK';
  $handler->display->display_options['fields']['view_node_1']['label'] = '';
  $handler->display->display_options['fields']['view_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['alter']['text'] = '[view_node]';
  $handler->display->display_options['fields']['view_node_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['alter']['path_case'] = 'upper';
  $handler->display->display_options['fields']['view_node_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['path'] = 'trainingresourcerss';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'page_2' => 'page_2',
    'default' => 0,
    'page_3' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'page_1' => 0,
    'page_4' => 0,
  );

  /* Display: New TAL Online Resource Feed */
  $handler = $view->new_display('feed', 'New TAL Online Resource Feed', 'feed_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New TAL Online Resources';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Content: Resource Type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = 'Type';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Age';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['date_format'] = 'short';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_resource' => 'training_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by Keyword';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Presentation Topic (field_training_topic) */
  $handler->display->display_options['filters']['field_training_topic_value']['id'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['field_training_topic_value']['table'] = 'field_data_field_training_topic';
  $handler->display->display_options['filters']['field_training_topic_value']['field'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['field_training_topic_value']['value'] = array(
    'New TAL Online' => 'New TAL Online',
  );
  $handler->display->display_options['filters']['field_training_topic_value']['group'] = 1;
  $handler->display->display_options['filters']['field_training_topic_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['operator_id'] = 'field_training_topic_value_op';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['label'] = 'Training Topic ';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['operator'] = 'field_training_topic_value_op';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['identifier'] = 'field_training_topic_value';
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_training_topic_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'newtalonlineresource/rss';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Web widget */
  $handler = $view->new_display('web_widgets', 'Web widget', 'web_widgets_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'widg';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'page_1' => 0,
    'page_4' => 0,
  );
  $handler->display->display_options['width'] = '400';
  $handler->display->display_options['height'] = '600';
  $export['training_resources'] = $view;

  $view = new view();
  $view->name = 'user_submitted_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'User Submitted Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'user-submitted-type';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
    'home_page_news' => 'home_page_news',
    'image' => 'image',
    'main_page_slides' => 'main_page_slides',
    'training_resource' => 'training_resource',
  );
  $handler->display->display_options['path'] = 'user/%/your-content';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Your Content';
  $handler->display->display_options['menu']['description'] = 'A list of Content you\'ve submitted';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['user_submitted_content'] = $view;

  $view = new view();
  $view->name = 'users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '300';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['date_format'] = 'long';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Authentication name */
  $handler->display->display_options['filters']['authname']['id'] = 'authname';
  $handler->display->display_options['filters']['authname']['table'] = 'authmap';
  $handler->display->display_options['filters']['authname']['field'] = 'authname';
  $handler->display->display_options['filters']['authname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['authname']['expose']['operator_id'] = 'authname_op';
  $handler->display->display_options['filters']['authname']['expose']['label'] = 'Authentication name';
  $handler->display->display_options['filters']['authname']['expose']['operator'] = 'authname_op';
  $handler->display->display_options['filters']['authname']['expose']['identifier'] = 'authname';
  $handler->display->display_options['filters']['authname']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: User: First Name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'First Name (field_first_name)';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name (field_last_name)';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'usernamesearch';
  $export['users'] = $view;

  $view = new view();
  $view->name = 'users_by_region';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Users By Region';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Users By Region';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '300';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Relationship: Taxonomy term: User using Source Library */
  $handler->display->display_options['relationships']['reverse_field_source_library_region_user']['id'] = 'reverse_field_source_library_region_user';
  $handler->display->display_options['relationships']['reverse_field_source_library_region_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_source_library_region_user']['field'] = 'reverse_field_source_library_region_user';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'reverse_field_source_library_region_user';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'parent';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'source_library' => 'source_library',
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_source_library_region_user';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user_count';
  $export['users_by_region'] = $view;

  return $export;
}
