<?php
/**
 * @file
 * toolshed_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function toolshed_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Account link';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'account_link';
  $fe_block_boxes->body = '<div id="account-menu-link">
	<a href="/user">Account</a></div>
';

  $export['account_link'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'TAL Copyright Information';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'copyright';
  $fe_block_boxes->body = '<p><span class="copyright">©2016-[date:custom:Y] The Alberta Library &amp; The BC Libraries Cooperative</span></p>
';

  $export['copyright'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Creative Commons';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'creative_commons';
  $fe_block_boxes->body = '<p>Unless noted otherwise, the works available on this site are licensed under a creative commons <a href="http://creativecommons.org/licenses/by-nc/3.0/deed.en_US">Attribution-NonCommercial 3.0 Unported License</a>.&nbsp;</p>
';

  $export['creative_commons'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Toolshed customized search form';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'custom_search_block';
  $fe_block_boxes->body = '<div class="block-search">
	<form accept-charset="UTF-8" action="/search" class="search-block-form" method="get">
		<input class="form-text" maxlength="128" name="keys" size="15" title="Enter the terms you wish to search for." type="search" value="" /> <input class="form-submit" id="edit-submit" name="op" type="submit" value="Search" />&nbsp;</form>
</div>
';

  $export['custom_search_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Login link if not logged in';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'login_link';
  $fe_block_boxes->body = '<div id="login-menu-super">
	<a href="/user">Login</a></div>
';

  $export['login_link'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'All the logos for the brought-by section';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'sponsor_logos';
  $fe_block_boxes->body = '<div><span id="ab_library"><img alt="The Alberta Library" src="/sites/default/files/alberta-library.png" width="181" height="39p" /></span><span id="mb_library"><img alt="Manitoba" src="/sites/default/files/manitoba.png" width="184" height="35" /></span><span id="sk_library"><img alt="Saskatchewan Libraries" src="/sites/default/files/saskatchewan.png" width="173" height="38" /></span><span id="bc_library"><img alt="British Columbia Library Association" src="/sites/default/files/bcla_logo_small.png" width="99" height="93" /></span><span id="bc_lib_coop"><img alt="BC Libraries Cooperative" src="/sites/default/files/bclibraries.png" width="99" height="126" /></span></div>
';

  $export['sponsor_logos'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Toolshed logo';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'toolshed_logo';
  $fe_block_boxes->body = '<div class="toolshed-logo">
	<img alt="" src="/sites/default/files/home-logo.png" style="width: 389px; height: 108px;" /></div>
';

  $export['toolshed_logo'] = $fe_block_boxes;

  return $export;
}
