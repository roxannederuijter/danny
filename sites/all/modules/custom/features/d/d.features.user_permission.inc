<?php
/**
 * @file
 * d.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function d_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean settings'.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean types'.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any banner bean'.
  $permissions['create any banner bean'] = array(
    'name' => 'create any banner bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'create diensten content'.
  $permissions['create diensten content'] = array(
    'name' => 'create diensten content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any banner bean'.
  $permissions['delete any banner bean'] = array(
    'name' => 'delete any banner bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any diensten content'.
  $permissions['delete any diensten content'] = array(
    'name' => 'delete any diensten content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own diensten content'.
  $permissions['delete own diensten content'] = array(
    'name' => 'delete own diensten content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any banner bean'.
  $permissions['edit any banner bean'] = array(
    'name' => 'edit any banner bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any diensten content'.
  $permissions['edit any diensten content'] = array(
    'name' => 'edit any diensten content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit bean view mode'.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit own diensten content'.
  $permissions['edit own diensten content'] = array(
    'name' => 'edit own diensten content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view any banner bean'.
  $permissions['view any banner bean'] = array(
    'name' => 'view any banner bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean revisions'.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
