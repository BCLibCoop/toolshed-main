<?php
/**
 * @file
 * toolshed_solr_search.features.inc
 */

/**
 * Implements hook_views_api().
 */
function toolshed_solr_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function toolshed_solr_search_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "toolshed_solr",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "data_alter_callbacks" : { "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] } },
      "processors" : {
        "search_api_case_ignore" : { "status" : 1, "weight" : "0", "settings" : { "strings" : 0 } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\nh2 = 3\\nh3 = 2\\nstrong = 2\\nb = 2\\nem = 1.5\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : { "spaces" : "[^\\\\p{L}\\\\p{N}]", "ignorable" : "[-]" }
        }
      },
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "comment_count" : { "type" : "integer" },
        "created" : { "type" : "date" },
        "promote" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "0",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['toolshed_content'] = entity_import('search_api_index', '{
    "name" : "Toolshed Content Index",
    "machine_name" : "toolshed_content",
    "description" : null,
    "server" : "toolshed_solr",
    "item_type" : "multiple",
    "options" : {
      "datasource" : { "types" : [ "node", "taxonomy_term" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "node" : { "type" : "integer", "entity_type" : "node" },
        "node:created" : { "type" : "date" },
        "node:field_conference_name" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "node:field_conference_name:name" : { "type" : "text", "boost" : "2.0" },
        "node:field_conference_name:tid" : { "type" : "integer" },
        "node:field_conference_year" : { "type" : "string" },
        "node:field_length_of_program_session2" : { "type" : "string" },
        "node:field_library_region_" : { "type" : "integer" },
        "node:field_primary_audience" : { "type" : "list\\u003Cstring\\u003E" },
        "node:field_project_description" : { "type" : "text", "boost" : "2.0" },
        "node:field_rating:average_rating" : { "type" : "integer" },
        "node:field_resource_type" : { "type" : "text" },
        "node:field_source_library_region" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "node:field_source_library_region:parent" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "node:field_source_library_region:parents_all" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "node:field_source_library_region:vocabulary" : { "type" : "integer", "entity_type" : "taxonomy_vocabulary" },
        "node:field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "node:field_taxonomy" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "node:field_training_topic" : { "type" : "list\\u003Cstring\\u003E" },
        "node:status" : { "type" : "integer" },
        "node:title" : { "type" : "text", "boost" : "8.0" },
        "node:type" : { "type" : "string" },
        "search_api_language" : { "type" : "string" },
        "taxonomy_term" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "node:conference_presentation" : "node:conference_presentation",
              "node:program_info" : "node:program_info",
              "node:training_resource" : "node:training_resource",
              "taxonomy_term:tags" : "taxonomy_term:tags",
              "taxonomy_term:available_resources" : "taxonomy_term:available_resources",
              "taxonomy_term:library_region" : "taxonomy_term:library_region",
              "taxonomy_term:source_library" : "taxonomy_term:source_library",
              "taxonomy_term:conferences" : "taxonomy_term:conferences"
            }
          }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "taxonomy_term:parent" : "taxonomy_term:parent",
              "taxonomy_term:parents_all" : "taxonomy_term:parents_all"
            }
          }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "node:type" : true,
              "node:field_training_topic" : true,
              "node:field_resource_type" : true,
              "node:field_source_library_region" : true,
              "node:field_conference_name" : true,
              "node:field_conference_name:name" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "node:title" : true,
              "node:field_resource_type" : true,
              "node:field_project_description" : true,
              "node:field_conference_name:name" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "taxonomy_term" : true,
              "node:title" : true,
              "node:field_source_library_region" : true,
              "node:field_conference_name" : true,
              "node:field_project_description" : true
            },
            "file" : "",
            "stopwords" : "a\\r\\nan\\r\\nand\\r\\nare\\r\\nas\\r\\nat\\r\\nbe\\r\\nbut\\r\\nby\\r\\nfor\\r\\nif\\r\\nin\\r\\ninto\\r\\nis\\r\\nit\\r\\nno\\r\\nnot\\r\\nof\\r\\non\\r\\nor\\r\\ns\\r\\nsuch\\r\\nt\\r\\nthat\\r\\nthe\\r\\ntheir\\r\\nthen\\r\\nthere\\r\\nthese\\r\\nthey\\r\\nthis\\r\\nto\\r\\nwas\\r\\nwill\\r\\nwith"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "fields" : {
              "node:title" : true,
              "node:field_resource_type" : true,
              "node:field_project_description" : true,
              "node:field_conference_name:name" : true
            },
            "exceptions" : "texan=texa"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
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

/**
 * Implements hook_default_search_api_server().
 */
function toolshed_solr_search_default_search_api_server() {
  $items = array();
  $items['toolshed_solr'] = entity_import('search_api_server', '{
    "name" : "Toolshed Solr",
    "machine_name" : "toolshed_solr",
    "description" : "Localhost production Solr server",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "toolshed-prod2.libraries.coop",
      "port" : "8983",
      "path" : "\\/solr\\/toolshed_drupal_prod2",
      "http_user" : "toolshed-prod2-admin",
      "http_pass" : "S9ZVJiT5X7n9hE3dxkY3h395WF",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "5",
      "http_method" : "AUTO",
      "log_query" : 1,
      "log_response" : 1,
      "commits_disabled" : 0
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
