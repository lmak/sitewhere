<!-- Template for location row -->
<style>
.sw-spec-command-actions {
	position: absolute;
	top: 7px;
	right: 7px;
}
</style>
<script type="text/x-kendo-tmpl" id="tpl-command-entry">
	<div class="sw-list-entry sw-spec-command">
		#= commandHtml #
		<div class="sw-spec-command-actions">
			<i class="icon-edit sw-action-glyph sw-edit-glyph" title="Edit Command"
				onclick="onEditCommand(event, '#:command.token#')"></i>
			<i class="icon-remove sw-action-glyph sw-delete-glyph" title="Delete Command"
				onclick="onDeleteCommand(event, '#:command.token#')"></i>
		</div>
	</div>
</script>