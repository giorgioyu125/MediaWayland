project('MediaWayLand', 'c',
  version : '0.1.0',
  meson_version : '>= 0.60.0',
  default_options : ['c_std=c23', 'warning_level=2'])

wayland = import('wayland')

wayland_client_dep = dependency('wayland-client')
cairo_dep = dependency('cairo')
alsa_dep = dependency('alsa') 

ffmpeg_deps = [
  dependency('libavformat'),
  dependency('libavcodec'),
  dependency('libavutil'),
  dependency('libswscale'),
]

wayland_protocols_dep = dependency('wayland-protocols')

xdg_shell_xml = join_paths(
  wayland_protocols_dep.get_pkgconfig_variable('pkgdatadir'),
  'stable/xdg-shell/xdg-shell.xml'
)

xdg_shell_gen = wayland.scan_protocols(xdg_shell_xml)

project_sources = [
  'src/main.c',
  'src/gui.c',
  'src/media.c',
  xdg_shell_gen[0], 
]

inc_dirs = include_directories('include')

all_deps = [
  wayland_client_dep,
  cairo_dep,
  alsa_dep,
] + ffmpeg_deps

executable('MediaWayLand',
  project_sources,
  include_directories : inc_dirs,
  dependencies : all_deps,
  install : true 
)
