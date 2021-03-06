<!-- Template for batch operation row -->
<script type="text/x-kendo-tmpl" id="tpl-batch-operation-entry">
	<tr class="sw-list-entry row-gradient">
		<td>#:operationType#</td>
		<td>#:processingStatus#</td>
		<td>#: formattedDate(data.createdDate) #</td>
		<td>#: formattedDate(data.processingStartedDate) #</td>
		<td>#: formattedDate(data.processingEndedDate) #</td>
		<td>
			<i class="fa fa-arrow-circle-right sw-action-glyph sw-view-glyph" title="View Batch Details"
				style="vertical-align: middle;" onclick="viewBatchOperation('#:operationType#', '#:token#')"></i>
		</td>
	</tr>
</script>