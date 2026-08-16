# WriteDebugString - Requisites <!-- omit in toc -->


- [Introduction](#introduction)
- [Installation by CMake](#installation-by-cmake)
  - [STLSoft](#stlsoft)
- [Installation by other means](#installation-by-other-means)


## Introduction

The **WriteDebugString** program (implemented in [**main.c**](./main.c)) is implemented in terms of:

* [**STLSoft**](https://github.com/synesissoftware/STLSoft) - for WinSTL diagnostics helpers and platform utilities;

> **NOTE**: **WriteDebugString** is a Windows-only tool.


## Installation by CMake


### STLSoft

The **STLSoft** libraries provide a wide range of compiler/library discrimination and compatibility facilities, operating system API façades, and a number of extended components over and above what is provided in the standard library.

**STLSoft** is obtained from **https://github.com/synesissoftware/STLSoft**, and it provides the means to install via **CMake**, as in the following:

```bash
$ mkdir -p ~/open-source
$ cd ~/open-source
$ git clone https://github.com/synesissoftware/STLSoft
$ cd ~/open-source/STLSoft
$ ./prepare_cmake.sh -m
$ cmake --install ./_build --config Release
```

Alternatively, set the **STLSOFT** environment variable (or pass `-DSTLSOFT=...` / `./prepare_cmake.sh -s ...`) to a local checkout that contains an `include/` directory.


## Installation by other means

If you do not use **CMake** to install **STLSoft**, ensure the headers are available via the **STLSOFT** environment variable (pointing at the library root) before configuring this project.


<!-- ########################### end of file ########################### -->
