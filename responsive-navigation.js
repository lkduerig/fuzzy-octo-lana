/**
 * @file
 * Javascript for responsive navigation.
 *
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {
  $(document).ready(function () {

    // Make some navigation panes mobile enabled
    // prepend visibility tog
    $.fn.addMobileNav = function (text) {
      this.addClass("mobile-nav-enabled")
        .children("div[class*='content']")
        .addClass("mobile-nav-wrapper")
        .wrapInner("<div class= 'mobile-hidden-content'>")
        .prepend("<div class='show-content'><a class='show-content-link'>" + text + "</a></div>");
    };

    // List all panes that require this functionality
    $(".pane-main-menu").addMobileNav("Navigation");
    $(".pane-locale-language").addMobileNav("View jobs by country");

    // On click
    $(".mobile-nav-enabled .show-content").click(function () {
      $(this).next("div.mobile-hidden-content").slideToggle().toggleClass("active-content");
      $(this).toggleClass("active");
    });
  })

})(jQuery, Drupal, this, this.document);
