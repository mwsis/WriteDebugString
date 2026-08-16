# WriteDebugString <!-- omit in toc -->

Windows CLI that writes messages to the debugger via **OutputDebugString**


![C](https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white)
[![License](https://img.shields.io/badge/License-BSD_3--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)
[![GitHub release](https://img.shields.io/github/v/release/sistools/WriteDebugString.svg)](https://github.com/sistools/WriteDebugString/releases/latest)
[![Last Commit](https://img.shields.io/github/last-commit/sistools/WriteDebugString)](https://github.com/sistools/WriteDebugString/commits/master)
[![CI](https://github.com/sistools/WriteDebugString/actions/workflows/ci.yml/badge.svg)](https://github.com/sistools/WriteDebugString/actions/workflows/ci.yml)


## Table of Contents <!-- omit in toc -->

- [Introduction](#introduction)
- [Installation](#installation)
- [Components](#components)
- [Examples](#examples)
- [Project Information](#project-information)
  - [Where to get help](#where-to-get-help)
  - [Contribution guidelines](#contribution-guidelines)
  - [Dependencies](#dependencies)
  - [Related projects](#related-projects)
  - [License](#license)


## Introduction

**WriteDebugString** is a small Windows-only utility that writes one or more
messages to the Windows debug output stream (as consumed by debuggers and
tools such as DebugView), using **STLSoft**/**WinSTL** helpers.


## Installation

Detailed instructions - via **CMake** - are provided in the accompanying
[INSTALL.md](./INSTALL.md) file.


## Components

The project creates a single executable program, **WriteDebugString**.


## Examples

```plaintext
> WriteDebugString.exe hello world
wrote 2 message(s) to debug stream

> WriteDebugString.exe --sleep-after-writes "hold for listener"
wrote 1 message(s) to debug stream
```


## Project Information


### Where to get help

[GitHub Page](https://github.com/sistools/WriteDebugString "GitHub Page")


### Contribution guidelines

Defect reports, feature requests, and pull requests are welcome on [the **WriteDebugString** GitHub page](https://github.com/sistools/WriteDebugString).


### Dependencies

**WriteDebugString** depends on:

* [**STLSoft**](https://github.com/synesissoftware/STLSoft);


### Related projects

Other (similar) projects include:

* [**ReadDebugString**](https://github.com/sistools/ReadDebugString)
* [**realpath**](https://github.com/sistools/realpath)


### License

**WriteDebugString** is released under the 3-clause BSD license. See [LICENSE](./LICENSE) for details.


<!-- ########################### end of file ########################### -->
