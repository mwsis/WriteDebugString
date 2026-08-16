# **WriteDebugString** Changes <!-- omit in toc -->


## 0.0.1 - 3rd August 2026

* Initial CMake-based release (**CMakeLists.txt**, helper scripts, and project documentation);
* Added modular GitHub Actions CI (**ci.yml** / **ci-cell.yml**) for Windows (Windows-only tool);
* Added **cmake/BuildType.cmake**;
* Added CMake helper scripts (**prepare_cmake.sh**, **build_cmake.sh**, **clean_cmake.sh**, **remove_cmake_artefacts.sh**) and **run_all_unit_tests.cmd**;
* Added **.sis/script_info_lines.txt** and **.sis/project_name.txt**;
* Project boilerplate bootstrap (**.gitattributes**, **.gitignore**, **.vimrc**, **.vscode/settings.json**, **AUTHORS.md**, **LICENSE**, **README.md**, **INSTALL.md**, **REQUISITES.md**, **TODO.md**, **NEWS.md**);
* Added version macros, **--version**, and explicit **windows.h** include;
* Retired the broken nmake **Makefile**;


<!-- ########################### end of file ########################### -->
