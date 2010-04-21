<div id="checklist-<?php print $node_type; ?>-<?php print $node_id; ?>" class="checklist-<?php print $node_type; ?>">
  <div id="checklist-items-<?php print $node_type; ?>-<?php print $node_id; ?>" class="checklist-items-<?php print $node_type; ?>">
    <?php //render the checklist ?>
    <?php if (!empty($checklist)) { ?>
      <?php $current_tax = ''; ?>
      <?php //loop each checklist item ?>
			<?php //@Todo move logic to theming functions ?>
      <?php foreach ($checklist as $category => $checklist_items) { ?>
        <div class="block"><h2 class="block-title clear"><?php print check_plain($category) ?></h2></div>
          <?php foreach ($checklist_items as $checklist_item): ?>
						<div class="checklist_item <?php print ($checklist_item['checked'] ? 'checked' : ''); ?>">
	            <input class="checklist-item" type="checkbox" id="chk-<?php print $node_id; ?>-<?php print $checklist_item['id']; ?>" name="chk-<?php print $checklist_item['id']; ?>" <?php print ($checklist_item['checked'] ? 'checked' : ''); ?>>
	            <label for="chk-<?php print $node_id; ?>-<?php print $checklist_item['id']; ?>"><?php print check_plain($checklist_item['title']); ?></label>
							<div class="checklist-item-body"><?php print check_plain($checklist_item['body']); ?></div>
						</div>
          <?php endforeach; ?>
					<br />
      <?php } ?>
    <?php } ?>
  </div>
</div>