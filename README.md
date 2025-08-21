# MediaWayland

## Why MediaWayland?


This is PURELY for educational purposes, and its development will be closely 
followed on the main maintainer's Twitch channel, which is [Twitch](https://www.twitch.tv/zordak112).


## Quick Start

You can find the binaries for your operative system in the release section

## Installing from Source

To build and install this project from source, you'll need the following dependencies:

- [Meson](https://mesonbuild.com/) — modern build system (>= 0.54 recommended)
- [Ninja](https://ninja-build.org/) — fast build tool (used automatically by Meson)
- `wayland-client` development headers
- A C compiler (e.g., GCC or Clang)

### On Debian/Ubuntu
```bash
sudo apt install meson ninja-build libwayland-dev
```

### On Fedora
```bash
sudo dnf install meson ninja-build wayland-devel
```

### On Arch Linux
```bash
sudo pacman -S meson ninja wayland
```

### Build the Project

Once dependencies are installed, run the following commands from the `core/` directory:

```bash
meson setup build
meson compile -C build
```

### Install (Optional)
To install the executable system-wide:
```bash
sudo meson install -C build
```

### Running MediaWayland

You will find the executable in the build directory, to use it simply use the following command:
```bash
./MediaWayland <image>
```


## Contributing

You can contact me sending an email to this address: sabert148@gmail.com

## License

The project is licensed under the MIT license. The Copyright holder is Salvatore Bertino.
