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
    6 => 250,
    7 => 247,
    8 => 246,
    9 => 245,
    10 => 127,
    11 => 126,
    12 => 125,
    13 => 124,
    14 => 123,
    15 => 122,
    16 => 121,
    17 => 117,
    18 => 63,
    19 => 62,
    20 => 61,
    21 => 60,
    22 => 59,
    23 => 58,
    24 => 56,
    25 => 48,
    26 => 45,
    27 => 44,
    28 => 31,
    29 => 30,
    30 => 29,
    31 => 28,
    32 => 27,
    33 => 24,
    34 => 22,
    35 => 21,
    36 => 15,
    37 => 14,
    38 => 13,
    39 => 12,
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
