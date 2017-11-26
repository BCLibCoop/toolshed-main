/*
 *  * Initialise select2 for form elements
 *   */

(function ($, Drupal) {

  'use strict';
  /* CODE GOES HERE */
  $(document).ready(function() {
    $('#edit-field-source-library-region').select2({
      placeholder: "Source Library"
    });
    $('#edit-field-training-topic-value').select2({
      placeholder: "Topic"
    });
    $('#edit-field-primary-audience-value').select2({
      placeholder: "Primary Audience"
    });
    $('#edit-field-length-of-program-session2-value').select2({
      placeholder: "Length of Session"
    });
    $('#edit-field-conference-name-value').select2({
      placeholder: "Conference"
    });
    $('#edit-field-conference-year-value').select2({
      placeholder: "Year"
    });
    $('.facetapi-multiselect').select2();
  });

})(jQuery, Drupal);
