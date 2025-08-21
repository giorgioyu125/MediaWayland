# meson.build
project('MediaWayland', 'c')

libwayland = dependency('wayland-client')

inc_dir = include_directories('include')

sources = files(
  'src/client.c',
  'src/xdg-shell-client-protocol.c'
)

executable('MediaWayland',
  sources,
  include_directories: inc_dir,
  dependencies: libwayland)
