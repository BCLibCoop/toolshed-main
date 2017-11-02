<?php
/**
 * @file
 * toolshed_ctypes.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function toolshed_ctypes_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audience|node|program_info|default';
  $field_group->group_name = 'group_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_info';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Audience',
    'weight' => '5',
    'children' => array(
      0 => 'field_primary_audience',
      1 => 'field_secondary_audience',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-audience field-group-fieldset',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audience|node|program_info|form';
  $field_group->group_name = 'group_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Audience',
    'weight' => '5',
    'children' => array(
      0 => 'field_primary_audience',
      1 => 'field_secondary_audience',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-audience field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conf_materials|node|conference_presentation|default';
  $field_group->group_name = 'group_conf_materials';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'conference_presentation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Materials',
    'weight' => '6',
    'children' => array(
      0 => 'field_training_doc_file',
      1 => 'field_video_link',
      2 => 'field_web_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-conf-materials field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conf_materials|node|conference_presentation|form';
  $field_group->group_name = 'group_conf_materials';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'conference_presentation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Materials',
    'weight' => '8',
    'children' => array(
      0 => 'field_training_doc_file',
      1 => 'field_video_link',
      2 => 'field_web_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-conf-materials field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conference_year|node|conference_presentation|default';
  $field_group->group_name = 'group_conference_year';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'conference_presentation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Conference Year',
    'weight' => '5',
    'children' => array(
      0 => 'field_conference_year',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Conference Year',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-conference-year field-group-html-element inline-group',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conference|node|conference_presentation|default';
  $field_group->group_name = 'group_conference';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'conference_presentation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Conference',
    'weight' => '4',
    'children' => array(
      0 => 'field_conference_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Conference',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-conference field-group-html-element inline-group',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_evaluation|node|program_info|default';
  $field_group->group_name = 'group_evaluation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_info';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Evaluation',
    'weight' => '7',
    'children' => array(
      0 => 'field_feedback_from_participants',
      1 => 'field_highlights',
      2 => 'field_program_goals',
      3 => 'field_what_would_you_change',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-evaluation field-group-fieldset',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_file_rating|node|conference_presentation|default';
  $field_group->group_name = 'group_file_rating';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'conference_presentation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'File Rating',
    'weight' => '0',
    'children' => array(
      0 => 'field_rating',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'File Rating',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'file-rating',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_filerating|node|program_info|default';
  $field_group->group_name = 'group_filerating';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_info';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'file-rating',
    'weight' => '0',
    'children' => array(
      0 => 'field_prog_rating',
      1 => 'field_program_promotional_materi',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'file-rating',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'file-rating',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
      ),
      'formatter' => '',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_filerating|node|training_resource|default';
  $field_group->group_name = 'group_filerating';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'file-rating',
    'weight' => '0',
    'children' => array(
      0 => 'field_rating',
      1 => 'field_training_doc_file',
      2 => 'field_web_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'file-rating',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'file-rating',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_goals|node|program_info|form';
  $field_group->group_name = 'group_goals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Evaluation',
    'weight' => '10',
    'children' => array(
      0 => 'field_feedback_from_participants',
      1 => 'field_highlights',
      2 => 'field_program_goals',
      3 => 'field_what_would_you_change',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Evaluation',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-goals field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presenters|node|program_info|default';
  $field_group->group_name = 'group_presenters';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_info';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Presenters',
    'weight' => '4',
    'children' => array(
      0 => 'field_guest_speakers',
      1 => 'field_presenter_s_',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Presenters',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'presenters inline-group',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resources|node|program_info|default';
  $field_group->group_name = 'group_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_info';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '6',
    'children' => array(
      0 => 'field_community_partners_',
      1 => 'field_funding_grants_foundations',
      2 => 'field_program_budget',
      3 => 'field_resources_required_materia',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-resources field-group-fieldset',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resources|node|program_info|form';
  $field_group->group_name = 'group_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '9',
    'children' => array(
      0 => 'field_community_partners_',
      1 => 'field_funding_grants_foundations',
      2 => 'field_guest_speakers',
      3 => 'field_program_budget',
      4 => 'field_resources_required_materia',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-resources field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stats|node|program_info|default';
  $field_group->group_name = 'group_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_info';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Stats',
    'weight' => '3',
    'children' => array(
      0 => 'field_length_of_program_session2',
      1 => 'field_number_of_sessions',
      2 => 'field_session_frequency',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Stats',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'stats inline-group',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Audience');
  t('Conference');
  t('Conference Year');
  t('Evaluation');
  t('File Rating');
  t('Materials');
  t('Presenters');
  t('Resources');
  t('Stats');
  t('file-rating');

  return $field_groups;
}
