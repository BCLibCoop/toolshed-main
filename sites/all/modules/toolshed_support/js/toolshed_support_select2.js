/*
 *  * Initialise select2 for form elements
 *   */

(function ($, Drupal) {

  'use strict';
  /* CODE GOES HERE */
  $(document).ready(function() {
      console.log("Modifying select2 labels...");
/*    $('#edit-field-source-library-region').select2({
      placeholder: "Source Library"
    });
    $('#edit-field-training-topic-value').select2({
      placeholder: "Topic"
    });
*/    $('#edit-field-primary-audience-value').select2({
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

	//Fixes issue with duplicate select2-containers on Browse facets
	$('.form-item-facets').each(function(i, obj){
                var count = $(this).children('span.select2-container').length;
                if (count > 1) {
                        $(this).children('.select2-container:last-child').hide();
			console.log("Hid extraneous select2 containers.");
                }
        });
  });


})(jQuery, Drupal);
