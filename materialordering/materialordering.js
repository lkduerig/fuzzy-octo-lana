jQuery(document).ready(function () {
  jQuery('#edit-contact input:text').addClass('default');

  jQuery("#edit-contact input:text").focus(function () {
    this.value = this.value != this.defaultValue ? this.value : '';
  });
  jQuery("#edit-contact input:text").blur(function () {
    this.value = this.value.trim().length > 0 ? this.value : this.defaultValue;
    jQuery(this).toggleClass('changed', this.value != this.defaultValue).toggleClass('default', this.value == this.defaultValue);
  });
});
