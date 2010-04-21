var Houston_checklist = {};

/**
 * This function strips the checklist item id (from the database) from the html checkbox id (chk-xxx).
 * @param id
 *  The id of the html checkbox element.
 * @return
 *  The integer part of the html checkbox element id.  This is the database id of the checklist item.
 */
Houston_checklist.stripRealId = function(id) {
  lastIndex = id.lastIndexOf('-');
  if (lastIndex == -1) {
    return id;
  }
  else {
    return id.substring(lastIndex + 1, id.length);
  }
}

Houston_checklist.renderProgressBar = function() {

	var total_chx = $('.checklist-item:checkbox').size();
	var checked_chx = $(".checklist-item:checkbox:checked").size();

	var perc = Math.round((checked_chx/total_chx)*100);

	if(checked_chx == ''){
		checked_chx = '0';
	}

	$('#check-list-progress-indicator').text(perc + ' %');
	$('#progress-bar').css('width',perc + '%');

	Houston_checklist.updateProgress(perc);
}

Houston_checklist.renderClasses = function(){
	$(".checklist-item:checkbox").each(function(){
		if($(this).attr('checked')){
			$(this).parent('div').addClass('checked');
		}	else {
			$(this).parent('div').removeClass('checked');
		}
	});
}

Houston_checklist.updateProgress = function(perc){
	$.post(Drupal.settings.houston_checklist.save_progress_json_url, {
        dprid: Drupal.settings.houston_checklist.dprid,
				perc: perc
      },
      function (data) {
        result = Drupal.parseJson(data);
        if (!result.status) {
          //alert(Drupal.t('An error occurred: ') + result.data);
        }
      }
   );
}

if (Drupal.jsEnabled) {
  Houston_checklist.checkItem = function() {
    //store if item was checked or unchecked for use in the success function aftere the ajax call
    itemChecked = this.checked;
    dprId = Drupal.settings.houston_checklist.dprid;

		// Rerender classes
		Houston_checklist.renderClasses();

    $.post(Drupal.settings.houston_checklist.check_json_url, {
        dprid: dprId,
        clid: Houston_checklist.stripRealId(this.id),
        checked: this.checked,
      },
      function (data) {
        result = Drupal.parseJson(data);
        if (!result.status) {
          //alert(Drupal.t('An error occurred: ') + result.data);
        }
        else {
					// Rerender progressbar
          Houston_checklist.renderProgressBar();
        }
      }
    );
  }

  $(document).ready(
    function() {
      //add clickevent to checkboxes
      $('.checklist-item').click(Houston_checklist.checkItem);
      Houston_checklist.renderProgressBar();
    }
  );
}