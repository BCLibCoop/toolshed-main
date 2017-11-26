<?php
/**
 * @file
 * toolshed_browse.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function toolshed_browse_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function toolshed_browse_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function toolshed_browse_default_search_api_index() {
  $items = array();
  $items['node_index'] = entity_import('search_api_index', '{
    "name" : "Node Index",
    "machine_name" : "node_index",
    "description" : null,
    "server" : "toolshed_solr",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "author:field_first_name" : { "type" : "text" },
        "author:field_last_name" : { "type" : "text" },
        "author:name" : { "type" : "text" },
        "created" : { "type" : "date" },
        "field_authot" : { "type" : "text" },
        "field_community_partners_" : { "type" : "text" },
        "field_conference_name" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_conference_name:name" : { "type" : "text" },
        "field_conference_name:parent" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_conference_name:parent:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_conference_name:parents_all" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_conference_year" : { "type" : "string" },
        "field_funding_grants_foundations" : { "type" : "text" },
        "field_guest_speakers" : { "type" : "text" },
        "field_highlights" : { "type" : "text" },
        "field_length_of_program_session2" : { "type" : "string" },
        "field_number_of_sessions" : { "type" : "integer" },
        "field_presenter_s_" : { "type" : "text" },
        "field_primary_audience" : { "type" : "list\\u003Cstring\\u003E" },
        "field_prog_rating:average_rating" : { "type" : "decimal" },
        "field_prog_rating:rating_count" : { "type" : "integer" },
        "field_program_description" : { "type" : "text" },
        "field_program_goals" : { "type" : "text" },
        "field_project_description" : { "type" : "text" },
        "field_resource_type" : { "type" : "string" },
        "field_resources_required_materia" : { "type" : "text" },
        "field_secondary_audience" : { "type" : "list\\u003Cstring\\u003E" },
        "field_session_frequency" : { "type" : "string" },
        "field_source_library_region" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_source_library_region:name" : { "type" : "text" },
        "field_source_library_region:parent" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_source_library_region:parent:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_source_library_region:parent:parent" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_source_library_region:parent:parent:name" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_source_library_region:parents_all" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_source_library_region:parents_all:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_source_library_region:url" : { "type" : "uri" },
        "field_training_topic" : { "type" : "list\\u003Cstring\\u003E" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" },
        "url" : { "type" : "uri" },
        "views" : { "type" : "integer" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_authot" : true,
              "field_community_partners_" : true,
              "field_funding_grants_foundations" : true,
              "field_guest_speakers" : true,
              "field_highlights" : true,
              "field_presenter_s_" : true,
              "field_program_description" : true,
              "field_program_goals" : true,
              "field_resources_required_materia" : true,
              "field_project_description" : true,
              "author:name" : true,
              "author:field_first_name" : true,
              "author:field_last_name" : true,
              "field_source_library_region:name" : true,
              "field_conference_name:name" : true,
              "field_source_library_region:parent:name" : true,
              "field_conference_name:parent:name" : true,
              "field_source_library_region:parent:parent:name" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_funding_grants_foundations" : true,
              "field_highlights" : true,
              "field_program_description" : true,
              "field_program_goals" : true,
              "field_resources_required_materia" : true,
              "field_project_description" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_funding_grants_foundations" : true,
              "field_highlights" : true,
              "field_program_description" : true,
              "field_program_goals" : true,
              "field_resources_required_materia" : true,
              "field_project_description" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_authot" : true,
              "field_community_partners_" : true,
              "field_funding_grants_foundations" : true,
              "field_guest_speakers" : true,
              "field_highlights" : true,
              "field_presenter_s_" : true,
              "field_program_description" : true,
              "field_program_goals" : true,
              "field_resources_required_materia" : true,
              "field_project_description" : true,
              "author:name" : true,
              "author:field_first_name" : true,
              "author:field_last_name" : true,
              "field_source_library_region:name" : true,
              "field_conference_name:name" : true,
              "field_source_library_region:parent:name" : true,
              "field_conference_name:parent:name" : true,
              "field_source_library_region:parent:parent:name" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_authot" : true,
              "field_community_partners_" : true,
              "field_funding_grants_foundations" : true,
              "field_guest_speakers" : true,
              "field_highlights" : true,
              "field_presenter_s_" : true,
              "field_program_description" : true,
              "field_program_goals" : true,
              "field_resources_required_materia" : true,
              "field_project_description" : true,
              "author:name" : true,
              "author:field_first_name" : true,
              "author:field_last_name" : true,
              "field_source_library_region:name" : true,
              "field_conference_name:name" : true,
              "field_source_library_region:parent:name" : true,
              "field_conference_name:parent:name" : true,
              "field_source_library_region:parent:parent:name" : true
            },
            "exceptions" : "texan=texa"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
