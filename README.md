

# Small Experiment for a constexpr sinus

This is just a small expermient.

It contains two version checked against the standard lib version:
one which uses a Taylor-polynomial and the other uses two quadratic polynomials.

## Requirements

- C++ Compiler (ex. llvm clang++)
- Meson Buildsystem
- make, ninja, etc.

*NOTE*: meson generates buildfiles for a other buildsystem such as ninja.
I recommand taking a look at which systems meson supports.

## quick start

Just run the following commands:

```shell
$ meson setup src build
$ meson test -C build
```

*NOTE*: testlogs can be found in $./build/meson-logs/$ relative to the projects root.
