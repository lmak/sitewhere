/*
 * IInboundProcessingStrategy.java 
 * --------------------------------------------------------------------------------------
 * Copyright (c) Reveal Technologies, LLC. All rights reserved. http://www.reveal-tech.com
 *
 * The software in this package is published under the terms of the CPAL v1.0
 * license, a copy of which has been included with this distribution in the
 * LICENSE.txt file.
 */
package com.sitewhere.spi.device.provisioning;

import com.sitewhere.spi.ISiteWhereLifecycle;
import com.sitewhere.spi.SiteWhereException;
import com.sitewhere.spi.device.event.processor.IInboundEventProcessorChain;

/**
 * Provides a strategy for moving decoded events from an {@link IInboundEventProcessor}
 * onto the {@link IInboundEventProcessorChain}.
 * 
 * @author Derek
 */
public interface IInboundProcessingStrategy extends ISiteWhereLifecycle {

	/**
	 * Submit a decoded event for processing.
	 * 
	 * @param event
	 * @throws SiteWhereException
	 */
	public void submit(IDecodedDeviceEventRequest event) throws SiteWhereException;
}