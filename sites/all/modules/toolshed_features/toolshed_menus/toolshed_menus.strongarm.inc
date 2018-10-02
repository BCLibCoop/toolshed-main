<?php
/**
 * @file
 * toolshed_menus.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function toolshed_menus_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array();
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 507,
    1 => 506,
    2 => 501,
    3 => 493,
    4 => 253,
    5 => 252,
    6 => 251,
    7 => 250,
    8 => 247,
    9 => 246,
    10 => 245,
    11 => 241,
    12 => 127,
    13 => 126,
    14 => 125,
    15 => 124,
    16 => 123,
    17 => 122,
    18 => 121,
    19 => 117,
    20 => 63,
    21 => 62,
    22 => 61,
    23 => 60,
    24 => 59,
    25 => 58,
    26 => 56,
    27 => 48,
    28 => 45,
    29 => 44,
    30 => 31,
    31 => 30,
    32 => 29,
    33 => 28,
    34 => 27,
    35 => 24,
    36 => 23,
    37 => 22,
    38 => 21,
    39 => 15,
    40 => 14,
    41 => 13,
    42 => 12,
    43 => 11,
    44 => 10,
    45 => 7,
    46 => 6,
    47 => 5,
    48 => 4,
    49 => 3,
    50 => 2,
    51 => 1,
  );
  $export['menu_masks'] = $strongarm;

  return $export;
}
