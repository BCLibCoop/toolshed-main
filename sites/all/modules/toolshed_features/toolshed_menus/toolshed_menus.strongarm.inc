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
    27 => 45,
    28 => 44,
    29 => 31,
    30 => 30,
    31 => 29,
    32 => 28,
    33 => 24,
    34 => 23,
    35 => 22,
    36 => 21,
    37 => 15,
    38 => 14,
    39 => 13,
    40 => 11,
    41 => 10,
    42 => 7,
    43 => 6,
    44 => 5,
    45 => 4,
    46 => 3,
    47 => 2,
    48 => 1,
  );
  $export['menu_masks'] = $strongarm;

  return $export;
}
