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
  $fe_block_boxes->body = '<p><span class="copyright">©2016 The Alberta Library &amp; The BC Libraries Cooperative</span></p>
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
  $fe_block_boxes->body = '<p><img alt="" src="/sites/default/files/alberta-library.png" style="width: 181px; height: 39px;" /> <img alt="" src="/sites/default/files/manitoba.png" style="width: 184px; height: 35px;" /> <img alt="" src="/sites/default/files/saskatchewan.png" style="width: 173px; height: 38px;" /> <img alt="" src="/sites/default/files/bcla_logo_small.png" style="width: 99px; height: 93x;" /> <img alt="" src="/sites/default/files/bclibraries.png" style="width: 99px; height: 126px;" /></p>
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
