<?php
/**
 * @file
 * TO-DO Colorizer Integration
 */

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'top' => t('Toolbar top'),
    'bottom' => t('Toolbar bottom'),
    'toolbarbtn' => t('Toolbar button background'),
    'toolbarborder' => t('Toolbar button border'),
    'bg' => t('Main background'),
    'sidebar' => t('Sidebar background'),
    'sidebarborders' => t('Sidebar borders'),
    'footer' => t('Footer background'),
    'titleslogan' => t('Title and slogan'),
    'text' => t('Text color'),
    'link' => t('Link color'),
    'linkactive' => t('Link (active)'),
    'linkhover' => t('Link (hover)'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('DKAN (default)'),
      'colors' => array(
        'top' => '#0062A0',
        'bottom' => '#111111',
        'toolbarbtn' => '#333333',
        'toolbarborder' => '#333333',
        'bg' => '#ffffff',
        'sidebar' => '#f6f6f2',
        'sidebarborders' => '#f9f9f9',
        'footer' => '#292929',
        'titleslogan' => '#0062A0',
        'text' => '#3b3b3b',
        'link' => '#0062A0',
        'linkactive' => '#23aeff',
        'linkhover' => '#018fe2',
      ),
    ),
    'bootstrap' => array(
      'title' => t('Bootstrap'),
      'colors' => array(
        'top' => '#222222',
        'bottom' => '#111111',
        'toolbarbtn' => '#333333',
        'toolbarborder' => '#333333',
        'bg' => '#ffffff',
        'sidebar' => '#f6f6f2',
        'sidebarborders' => '#f9f9f9',
        'footer' => '#292929',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'link' => '#0071B3',
        'linkactive' => '#23aeff',
        'linkhover' => '#018fe2',
      ),
    ),
    'bluelagoon' => array(
      'title' => t('Blue Lagoon'),
      'base' => '#48a9e4',
      'colors' => array(
        'top' => '#0779bf',
        'bottom' => '#48a9e4',
        'toolbarbtn' => '#0879bf',
        'toolbarborder' => '#0879bf',
        'bg' => '#ffffff',
        'sidebar' => '#f6f6f2',
        'sidebarborders' => '#f9f9f9',
        'footer' => '#292929',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'link' => '#0071B3',
      ),
    ),
    'firehouse' => array(
      'title' => t('Firehouse'),
      'base' => '#d6121f',
      'colors' => array(
        'top' => '#cd2d2d',
        'bottom' => '#cf3535',
        'toolbarbtn' => '#b12525',
        'toolbarborder' => '#b12525',
        'bg' => '#ffffff',
        'sidebar' => '#f1f4f0',
        'sidebarborders' => '#ededed',
        'footer' => '#1f1d1c',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'link' => '#d6121f',
      ),
    ),
    'ice' => array(
      'title' => t('Ice'),
      'base' => '#019dbf',
      'colors' => array(
        'top' => '#d0d0d0',
        'bottom' => '#c2c4c5',
        'toolbarbtn' => '#dedede',
        'toolbarborder' => '#dedede',
        'bg' => '#ffffff',
        'sidebar' => '#ffffff',
        'sidebarborders' => '#cccccc',
        'footer' => '#24272c',
        'titleslogan' => '#000000',
        'text' => '#4a4a4a',
        'link' => '#019dbf',
      ),
    ),
    'plum' => array(
      'title' => t('Plum'),
      'base' => '#9d408d',
      'colors' => array(
        'top' => '#4c1c58',
        'bottom' => '#593662',
        'toolbarbtn' => '#401050',
        'toolbarborder' => '#401050',
        'bg' => '#fffdf7',
        'sidebar' => '#edede7',
        'sidebarborders' => '#e7e7e7',
        'footer' => '#2c2c28',
        'titleslogan' => '#ffffff',
        'text' => '#301313',
        'link' => '#9d408d',
      ),
    ),
    'forest' => array(
      'title' => t('Forest'),
      'base' => '#0a9900',
      'colors' => array(
        'top' => '#219f19',
        'bottom' => '#2db823',
        'toolbarbtn' => '#188e10',
        'toolbarborder' => '#188e10',
        'bg' => '#ffffff',
        'sidebar' => '#f1f4f0',
        'sidebarborders' => '#ededed',
        'footer' => '#1f1d1c',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'link' => '#0a9900',
      ),
    ),
    'slate' => array(
      'title' => t('Slate'),
      'base' => '#0073b6',
      'colors' => array(
        'top' => '#4a4a4a',
        'bottom' => '#4e4e4e',
        'toolbarbtn' => '#464646',
        'toolbarborder' => '#464646',
        'bg' => '#ffffff',
        'sidebar' => '#ffffff',
        'sidebarborders' => '#d0d0d0',
        'footer' => '#161617',
        'titleslogan' => '#ffffff',
        'text' => '#3b3b3b',
        'link' => '#0073b6',
      ),
    ),
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('top', 'bottom'),
    ),
  ),

);