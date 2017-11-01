<?php
/**
 * @file
 * Provides a common instantior for the AmazonS3 class with common settings
 */

/**
 * Return the constructed hostname to use for reaching S3
 * You are responsible for loading the awssdk library beforehand YOURSELF.
 */
function CreateS3Instance() {
  $s3 = new AmazonS3();
  // Custom S3 setup
  $hostname = variable_get('amazons3_hostname', '');
  if (!empty($hostname)) {
    $s3->set_hostname($hostname);
    $s3->allow_hostname_override(FALSE);
  }
  $ssl = variable_get('amazons3_ssl', 1);
  if ($ssl == 0) {
    //$this->s3->disable_ssl();
    $s3->use_ssl = false; // disable_ssl spews a warning
  }
  $path = variable_get('amazons3_path_style', 0);
  if ($path != 0) {
    $s3->enable_path_style();
  }
  //drupal_set_message(t('hostname=@hostname; ssl=@ssl; path=@path', array('@hostname'=>$hostname, '@ssl'=>$ssl, '@path' => $path)));
  return $s3;
}

?>
