# WriteDebugString - Installation and Use <!-- omit in toc -->


- [Requisites](#requisites)
- [Building](#building)
  - [via CMake](#via-cmake)


## Requisites

The **WriteDebugString** program (implemented in [**main.c**](./main.c)) is implemented in terms of:

* [**STLSoft**](https://github.com/synesissoftware/STLSoft) - for WinSTL diagnostics helpers and platform utilities;

Detailed instructions are provided in the [**REQUISITES.md**](./REQUISITES.md) document for how to obtain and install **STLSoft**.

> **NOTE**: **WriteDebugString** targets Windows only.


## Building


### via CMake

The primary choice for installation is by use of **CMake**.

1. Obtain the latest distribution of **WriteDebugString**, from
   https://github.com/sistools/WriteDebugString/, e.g.

    ```bash
    $ mkdir -p ~/open-source
    $ cd ~/open-source
    $ git clone https://github.com/sistools/WriteDebugString/
    ```

2. Prepare the CMake configuration, via the **prepare_cmake.sh** script, as
   in:

    ```bash
    $ cd ~/open-source/WriteDebugString
    $ ./prepare_cmake.sh
    ```

   **NOTE**: if you do not have **STLSoft** installed via **CMake** package
   config, point at a local tree with `-s` / `--stlsoft-root-dir`, or set the
   **STLSOFT** environment variable.

   Tests are currently a no-op for this project; you may disable the testing
   option with `-T` if desired:

    ```bash
    $ cd ~/open-source/WriteDebugString
    $ ./prepare_cmake.sh -T
    ```

3. Run a build of the generated **CMake**-derived build files via the
   **build_cmake.sh** script, as in:

    ```bash
    $ cd ~/open-source/WriteDebugString
    $ ./build_cmake.sh
    ```

   (**NOTE**: if you provide the flag `--run-make` (=== `-m`) in step 2 then you do
   not need this step.)

4. As a check, execute the built program, as in:

    ```bash
    $ cd ~/open-source/WriteDebugString
    $ ./_build/WriteDebugString.exe --help
    ```

   You should see usage output naming **WriteDebugString**.

5. Install (optional), as in:

    ```bash
    $ cd ~/open-source/WriteDebugString
    $ cmake --install ./_build --config Release
    ```


<!-- ########################### end of file ########################### -->
