<?php
/*
 * Copyright 2013-2013 BC Libraries Cooperative
 *  - Dale Floer <dale.floer@bc.libraries.coop>
 *  - Robin Johnson <rjohnson@sitka.bclibraries.ca>
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/*%******************************************************************************************%*/

/**
 * This is a specialization of the Amazon S3BrowserUpload class, that fixes the
 * hardcoding of the '.s3.amazonaws.com' string.
 */
class CustomS3BrowserUpload extends S3BrowserUpload {
	public function generate_upload_parameters($bucket, $expires = '+1 hour', $opt = null)
	{
		#printf("DEBUG:%s:%d:%s\n",__FILE__,__LINE__,"hostname:".$this->hostname);
		#printf("DEBUG:%s:%d:%s\n",__FILE__,__LINE__,"use_ssl:".$this->use_ssl);
		#printf("DEBUG:%s:%d:%s\n",__FILE__,__LINE__,"vhost:".$this->vhost);
		#printf("DEBUG:%s:%d:%s\n",__FILE__,__LINE__,"resource_prefix:".$this->resource_prefix);
		#printf("DEBUG:%s:%d:%s\n",__FILE__,__LINE__,"path_style:".$this->path_style);
		#printf("DEBUG:%s:%d:%s\n",__FILE__,__LINE__,"bucket:".$bucket);

		/* Start of code borrowed from AmazonS3::authenticate */
		// If the bucket name has periods and we are using SSL, we need to switch to path style URLs
		$bucket_name_may_cause_ssl_wildcard_failures = false;
		if ($this->use_ssl && strpos($bucket, '.') !== false)
		{
			$bucket_name_may_cause_ssl_wildcard_failures = true;
		}
		// Determine hostname
		$scheme = $this->use_ssl ? 'https://' : 'http://';
		if ($bucket_name_may_cause_ssl_wildcard_failures || $this->resource_prefix || $this->path_style)
		{
			// Use bucket-in-path method
			$hostname = $this->hostname . $this->resource_prefix . (($bucket === '' || $this->resource_prefix === '/' . $bucket) ? '' : ('/' . $bucket));
		}
		else
		{
			$hostname = $this->vhost ? $this->vhost : (($bucket === '') ? $this->hostname : ($bucket . '.') . $this->hostname);
		}
		/* End of borrowed code */

		$form = parent::generate_upload_parameters($bucket, $expires, $opt);
		$form['form']['action'] = $scheme.$hostname;
		#printf("DEBUG:%s:%d:%s\n",__FILE__,__LINE__,"action:".$scheme.$hostname);
		return $form;
	}
}
