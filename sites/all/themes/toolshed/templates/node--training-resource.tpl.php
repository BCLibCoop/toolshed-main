<?php

/**
 * @file
 */
unset($filetype);
if (isset($node->field_program_promotional_materi[LANGUAGE_NONE][0]['filename'])) {
  preg_match('/\.(.{3,5})$/', $node->field_program_promotional_materi[LANGUAGE_NONE][0]['filename'], $preg_results);
  if (count($preg_results) > 0) {
    $filetype = strtolower($preg_results[1] . ' ');
  }
  else {
    $filetype = 'null ';
  }
}
else {
  $filetype = 'null ';
}


?>
<article class="node-file <?php print $filetype; print $classes; print $attributes; ?>" data-nid="<?php print $node->nid; ?>" >

  <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>

    <header class="node-header">

      <!--Node title inside content bounds -->
      <?php if ($title): ?>
        <h1 id="node-title" class="node-title-a" <?php print $attributes; ?>>
        <?php print $title; ?>
        </h1>
      <?php endif; ?>

      <!-- <?php print $user_picture; ?> -->

      <?php if ($title && !$page): ?>
        <h1<?php print $title_attributes; ?>>
          <a href="<?php print $node_url; ?>" rel="bookmark"><?php print $title; ?></a>
        </h1>
      <?php endif; ?>

      <!-- <?php if ($node->type): ?>

  <section class="node-type"><?php print node_type_get_name($node->type); ?></section>
      <?php endif; ?> -->
      <div class="author">
      <?php if ($content['field_authot']): ?>
        <span>By:</span> <?php print render($content['field_authot']); ?>
      <?php endif; ?>
      <?php if ($content['field_authot'] && $content['field_source_library_region']): ?><span>,</span><?php endif; ?>
      <?php if ($content['field_source_library_region']): ?>
          <?php
          print render(field_view_field('node', $node, 'field_source_library_region', array('label'=>'hidden')));
          ?>
      <?php endif; ?></div>
      <?php if ($display_submitted): ?>
        <div class="submitted"><?php print $submitted; ?></div>
      <?php endif; ?>
    </header>





  <?php endif; ?>

  <div class="content">
    <?php
    // We hide the comments to render below.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
    ?>
  </div><!-- /content -->

  <?php if (!empty($content['links']['terms'])): ?>
    <div class="terms">
      <?php print render($content['links']['terms']); ?>
    </div><!-- /terms -->
  <?php endif;?>

  <?php if (!empty($content['links'])): ?>
    <div class="links">
      <?php print render($content['links']); ?>
    </div><!-- /links -->
  <?php endif; ?>

  <?php print render($content['comments']); ?>
</article><!-- /node -->
