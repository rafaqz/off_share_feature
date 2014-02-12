<?php
/**
 * @file
 * off_share_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function off_share_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_block';
  $strongarm->value = 0;
  $export['social_share_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_basic_page';
  $strongarm->value = '[node:body]';
  $export['social_share_description_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_blog';
  $strongarm->value = '[node:body]';
  $export['social_share_description_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_book';
  $strongarm->value = '[node:body]';
  $export['social_share_description_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_closed_group';
  $strongarm->value = '[node:body]';
  $export['social_share_description_closed_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_conversation';
  $strongarm->value = '[node:body]';
  $export['social_share_description_conversation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_group';
  $strongarm->value = '[node:body]';
  $export['social_share_description_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_idea';
  $strongarm->value = '[node:body]';
  $export['social_share_description_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_knowledge_object';
  $strongarm->value = '[node:body]';
  $export['social_share_description_knowledge_object'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_news';
  $strongarm->value = '[node:body]';
  $export['social_share_description_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_organisation';
  $strongarm->value = '[node:body]';
  $export['social_share_description_organisation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_project';
  $strongarm->value = '[node:body]';
  $export['social_share_description_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_basic_page';
  $strongarm->value = 1;
  $export['social_share_enabled_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_blog';
  $strongarm->value = 1;
  $export['social_share_enabled_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_book';
  $strongarm->value = 1;
  $export['social_share_enabled_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_closed_group';
  $strongarm->value = 0;
  $export['social_share_enabled_closed_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_conversation';
  $strongarm->value = 1;
  $export['social_share_enabled_conversation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_group';
  $strongarm->value = 1;
  $export['social_share_enabled_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_idea';
  $strongarm->value = 1;
  $export['social_share_enabled_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_knowledge_object';
  $strongarm->value = 1;
  $export['social_share_enabled_knowledge_object'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_news';
  $strongarm->value = 1;
  $export['social_share_enabled_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_organisation';
  $strongarm->value = 0;
  $export['social_share_enabled_organisation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_project';
  $strongarm->value = 1;
  $export['social_share_enabled_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_basic_page';
  $strongarm->value = '';
  $export['social_share_image_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_blog';
  $strongarm->value = '';
  $export['social_share_image_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_book';
  $strongarm->value = '';
  $export['social_share_image_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_closed_group';
  $strongarm->value = '';
  $export['social_share_image_closed_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_conversation';
  $strongarm->value = '';
  $export['social_share_image_conversation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_group';
  $strongarm->value = '';
  $export['social_share_image_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_idea';
  $strongarm->value = '';
  $export['social_share_image_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_knowledge_object';
  $strongarm->value = '';
  $export['social_share_image_knowledge_object'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_news';
  $strongarm->value = '';
  $export['social_share_image_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_organisation';
  $strongarm->value = '';
  $export['social_share_image_organisation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_project';
  $strongarm->value = '';
  $export['social_share_image_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_label';
  $strongarm->value = array(
    'en' => 'Share to',
  );
  $export['social_share_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_max_desc_length';
  $strongarm->value = '50';
  $export['social_share_max_desc_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_basic_page';
  $strongarm->value = array(
    0 => 'facebook',
    1 => 'googleplus',
    2 => 'twitter',
  );
  $export['social_share_networks_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_blog';
  $strongarm->value = array(
    0 => 'facebook',
    1 => 'googleplus',
    2 => 'twitter',
  );
  $export['social_share_networks_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_book';
  $strongarm->value = array(
    0 => 'facebook',
    1 => 'googleplus',
    2 => 'twitter',
  );
  $export['social_share_networks_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_closed_group';
  $strongarm->value = array();
  $export['social_share_networks_closed_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_conversation';
  $strongarm->value = array(
    0 => 'facebook',
    1 => 'googleplus',
    2 => 'twitter',
  );
  $export['social_share_networks_conversation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_group';
  $strongarm->value = array(
    0 => 'facebook',
    1 => 'googleplus',
    2 => 'twitter',
  );
  $export['social_share_networks_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_idea';
  $strongarm->value = array(
    0 => 'facebook',
    1 => 'googleplus',
    2 => 'twitter',
  );
  $export['social_share_networks_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_knowledge_object';
  $strongarm->value = array(
    0 => 'facebook',
    1 => 'googleplus',
    2 => 'twitter',
  );
  $export['social_share_networks_knowledge_object'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_news';
  $strongarm->value = array(
    0 => 'facebook',
    1 => 'googleplus',
    2 => 'twitter',
  );
  $export['social_share_networks_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_organisation';
  $strongarm->value = array();
  $export['social_share_networks_organisation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_project';
  $strongarm->value = array(
    0 => 'facebook',
    1 => 'googleplus',
    2 => 'twitter',
  );
  $export['social_share_networks_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_new_window';
  $strongarm->value = 1;
  $export['social_share_new_window'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_basic_page';
  $strongarm->value = 0;
  $export['social_share_show_label_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_blog';
  $strongarm->value = 0;
  $export['social_share_show_label_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_book';
  $strongarm->value = 0;
  $export['social_share_show_label_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_closed_group';
  $strongarm->value = 0;
  $export['social_share_show_label_closed_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_conversation';
  $strongarm->value = 0;
  $export['social_share_show_label_conversation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_group';
  $strongarm->value = 0;
  $export['social_share_show_label_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_idea';
  $strongarm->value = 0;
  $export['social_share_show_label_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_knowledge_object';
  $strongarm->value = 0;
  $export['social_share_show_label_knowledge_object'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_news';
  $strongarm->value = 0;
  $export['social_share_show_label_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_organisation';
  $strongarm->value = 0;
  $export['social_share_show_label_organisation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_project';
  $strongarm->value = 0;
  $export['social_share_show_label_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_basic_page';
  $strongarm->value = 'social_share_link';
  $export['social_share_theme_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_blog';
  $strongarm->value = 'social_share_link';
  $export['social_share_theme_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_book';
  $strongarm->value = 'social_share_link';
  $export['social_share_theme_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_closed_group';
  $strongarm->value = 'social_share_link';
  $export['social_share_theme_closed_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_conversation';
  $strongarm->value = 'social_share_link';
  $export['social_share_theme_conversation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_group';
  $strongarm->value = 'social_share_link';
  $export['social_share_theme_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_idea';
  $strongarm->value = 'social_share_link';
  $export['social_share_theme_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_knowledge_object';
  $strongarm->value = 'social_share_link';
  $export['social_share_theme_knowledge_object'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_news';
  $strongarm->value = 'social_share_link';
  $export['social_share_theme_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_organisation';
  $strongarm->value = 'social_share_link';
  $export['social_share_theme_organisation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_project';
  $strongarm->value = 'social_share_link';
  $export['social_share_theme_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_basic_page';
  $strongarm->value = '[node:title]';
  $export['social_share_title_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_blog';
  $strongarm->value = '[node:title]';
  $export['social_share_title_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_book';
  $strongarm->value = '[node:title]';
  $export['social_share_title_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_closed_group';
  $strongarm->value = '[node:title]';
  $export['social_share_title_closed_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_conversation';
  $strongarm->value = '[node:title]';
  $export['social_share_title_conversation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_group';
  $strongarm->value = '[node:title]';
  $export['social_share_title_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_idea';
  $strongarm->value = '[node:title]';
  $export['social_share_title_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_knowledge_object';
  $strongarm->value = '[node:title]';
  $export['social_share_title_knowledge_object'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_news';
  $strongarm->value = '[node:title]';
  $export['social_share_title_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_organisation';
  $strongarm->value = '[node:title]';
  $export['social_share_title_organisation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_project';
  $strongarm->value = '[node:title]';
  $export['social_share_title_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_twitter_truncate';
  $strongarm->value = 0;
  $export['social_share_twitter_truncate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_basic_page';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_blog';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_book';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_closed_group';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_closed_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_conversation';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_conversation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_group';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_idea';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_knowledge_object';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_knowledge_object'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_news';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_organisation';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_organisation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_project';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_project'] = $strongarm;

  return $export;
}
