(function ($) {
  $(document).ready(function () {

    var $container = $('#isotope-container');

    // Override Views Isotope JS to regulate element height so
    // side-by-side elements are the same height.
    $('.isotope-element').each(function () {
      if ($(this).width() == $('.view-isotope-commerce-catalogue').width() / 2) {
        if ($(this).hasClass('odd')) {
          if ($(this).height() > $(this).next().height()) {
            $(this).css('height', $(this).height());
            $(this).next().css('height', $(this).height());
          }
          else {
            $(this).css('height', $(this).next().height());
            $(this).next().css('height', $(this).next().height());
          }
        }
      }
    });

    if ($.browser.mozilla) {
      $container.isotope({
        // Firefox doesn't support transforms well, the select boxes
        // on the products become unusable, so disable for Firefox.
        transformsEnabled:false
      });
    }
  });
})(jQuery);
