/**
 * Created with IntelliJ IDEA.
 * User: Sergey Grigorenko
 * Date: 17.07.13
 * Time: 20:14
 */

(function($) {

    Drupal.behaviors.select2widget = {
        attach: function(context, settings) {
            var config = settings.select2widget;
            for (var element in config.elements) {
                $('#' + config.elements[element].id, context).css({"min-width":"400px"});
               $('#' + config.elements[element].id, context).select2();
            }
        },

        completedCallback: function () {
            // Do nothing. But it's here in case other modules/themes want to override it.
        }

    }
})(jQuery);
