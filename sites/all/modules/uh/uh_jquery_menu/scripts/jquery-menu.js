/**
 * Created by nickvanboven on 10-11-14.
 */



(function ($) {
    $(document).ready(function() {
        $('a[href*=#]').on('click', function(event){
            event.preventDefault();
            $('html,body').animate({scrollTop:$(this.hash).offset().top - 50}, 1000);
        });
    });
})(jQuery);