<?php
/**
 * Module page callback func
 */
function houston_monitor_modules_webapp($node) {
  $header = array(
    array('data' => t('Package'), 'field' => 'package', 'sort' => 'asc'),
    array('data' => t('Status'), 'field' => 'status'),
    array('data' => t('Title'), 'field' => 'title'),
    array('data' => t('Installed'), 'field' => 'hmmw.installed_version'),
    array('data' => t('Recommended'), 'field' => 'recommended_version'),
    array('data' => t('Latest'), 'field' => 'latest_version'),
    array('data' => t('Project url'), 'field' => 'project_link'),
  );

  $sql = "SELECT hmm.title, hmm.name, hmm.description, hmmw.installed_version, hmm.recommended_version, hmm.latest_version, hmm.download_link, hmm.project_link, hmmw.status, hmm.package
          FROM {houston_monitor_modules_webapp} hmmw
          JOIN {houston_monitor_modules} hmm ON hmm.mid = hmmw.mid
          WHERE hmmw.wid = ". check_plain($node->nid) ." ". tablesort_sql($header) .", hmm.title ASC";

  $result = pager_query($sql, 50);

  $rows = array();

  while ($modules = db_fetch_object($result)) {
    if ($modules->status == '2') {
      $style = 'background-color: #FFFFDD';
    }
    elseif ($modules->status == '1') {
      $style = 'background-color: #DDFFDD';
    }
    else {
      $style = 'background-color: #FFDDDD';
    }

    $rows[] = array(
      'data' => array(
        'package' => $modules->package,
        'status' => $modules->status,
        'title' => '<strong>'. l($modules->title, 'admin/houston/monitor/modules/'. $modules->name) .'</strong><br />'. $modules->description,
        'installed_version' => $modules->installed_version,
        'recommended_version' => l($modules->recommended_version, check_url($modules->download_link)),
        'latest_version' => $modules->latest_version,
        'project_link' => l($modules->project_link, check_url($modules->project_link)),
      ),
      'style' => $style,
    );
  }

  if (is_array($rows) && count($rows) > 0) {
    $output = theme('table', $header, $rows);
    $output .= theme('pager', NULL, 50, 0);
  }
  else {
    $output = '<div class="view-empty">';
    $output .= t('No modules available.');
    $output .= '<div class="buttons">';
    $output .= l(t('Fetch modules'), 'admin/houston/ping');
    $output .= '</div></div>';
  }

  return $output;
}

function houston_monitor_modules_module($module) {
  $header = array(
    array('data' => t('Webapp'), 'field' => 'n.title', 'sort' => 'asc'),
    array('data' => t('Installed'), 'field' => 'hmm.installed'),
    array('data' => t('Status'), 'field' => 'hmm.status'),
  );

  $sql = "SELECT hmmw.installed_version, n.title, hmmw.wid, hmmw.status
    FROM {houston_monitor_modules_webapp} hmmw
    JOIN {node} n ON n.nid = hmmw.wid
    WHERE hmmw.mid = %d";

  $sql .= tablesort_sql($header);

  $header = array(t('Webapp'), t('Version'), t('Status'));
  $result = pager_query($sql, 30, 0, NULL, $module['mid']);

  while ($row = db_fetch_object($result)) {
   if ($row->status == '2') {
      $style = 'background-color: #FFFFDD';
    }
    elseif ($row->status == '1') {
      $style = 'background-color: #DDFFDD';
    }
    else {
      $style = 'background-color: #FFDDDD';
    }

    $rows[] = array(
      'data' => array(
        'webapp' => l($row->title, 'node/' . $row->wid . '/modules'),
        'installed_version' => $row->installed_version,
        'status' => $row->status,
      ),
      'style' => $style,
    );
  }

  $output .= '<h3>'. $module['name'] .'</h3>';
  $output .= '<p>'. l($module['project_link'], $module['project_link']) .'<br />'. $module['description'] .'</p>';
  $output .= '<ul>';
  $output .= '<li>Recommended Version: '. $module['recommended_version'] .'</li>';
  $output .= '<li>Latest Version: '. $module['latest_version'] .'</li>';
  $output .= '</ul>';
  $output .= theme('table', $header, $rows);
  $output .= theme('pager', NULL, 30, 0);

  return $output;
}

function houston_monitor_modules_all_cmp($a, $b) {
  if ($a['amount'] == $b['amount']) {
    return ($a['title'] < $b['title']) ? -1 : 1;
  }

  return ($a['amount'] > $b['amount']) ? -1 : 1;
}

function houston_monitor_modules_list($details = FALSE) {
  $header = array(t('Package'), t('Title'), t('Lastest'), t('Recommended'), t('Project Url'), t('Amount'));

  if ($details === TRUE) {
    $sql = "SELECT hmm.wid, hmm.name, hmm.title, n.title AS webapp FROM {houston_monitor_modules} hmm JOIN node n ON n.nid = hmm.wid AND n.type = 'webapp'";
    $result = db_query($sql);

    while ($module = db_fetch_object($result)) {
      $modules[$module->name]['title'] = $module->title;
      $modules[$module->name]['webapps'][] = $module->webapp;
      $modules[$module->name]['amount']++;
    }

    uasort($modules, 'houston_monitor_modules_all_cmp');

    foreach ($modules as $module) {
      $rows[] = array('<strong>' . $module['title'] . '</strong><br />' . implode(', ', $module['webapps']), $module['amount']);
    }
  }
  else {
    $sql = "SELECT hmm.name, hmm.title, hmm.package, hmm.latest_version, hmm.recommended_version, hmm.description, hmm.download_link, hmm.project_link, COUNT(*) as amount
            FROM {houston_monitor_modules_webapp} hmmw
            JOIN {houston_monitor_modules} hmm ON hmm.mid = hmmw.mid
            GROUP BY hmmw.mid
            ORDER BY amount DESC, hmm.package ASC, hmm.title ASC";
    $result = db_query($sql);

    while ($module = db_fetch_object($result)) {
      $rows[] = array(
        $module->package,
        l($module->title, 'admin/houston/monitor/modules/' . $module->name) . '<br />' . $module->description,
        $module->latest_version,
        l($module->recommended_version, $module->download_link),
        l($module->project_link, $module->project_link),
        $module->amount
      );
    }
  }

  return theme('table', $header, $rows);
}