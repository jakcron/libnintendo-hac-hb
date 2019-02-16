# Building
## Linux (incl. Windows Subsystem for Linux) & MacOS - Makefile
### Requirements
* `make`
* Terminal access
* Typical GNU compatible development tools (e.g. `clang`, `g++`, `c++`, `ar` etc) with __C++11__ support

### Using Makefile
* `make` (default) - Compile library
* `make static_lib` - Compile library
* `make clean` - Remove all object files

## Native Win32 - Visual Studio
### Requirements
* [Visual Studio Community](https://visualstudio.microsoft.com/vs/community/) 2015 or 2017

### Compiling Library
* Open `build/visualstudio/libnintendo-hac-hb.sln` in Visual Studio
* Select Target (e.g `Debug`|`Release` & `x86`|`x64`)
* Navigate to `Build`->`Build Solution`

### Including libnintendo-hac-hb in another VS Solution for static linking
* Clone `libnintendo-hac-hb` as a submodule into your project
* Navigate to the `Solution Explorer` window
* Right-click on the Solution Item and select `Add`->`Existing Project...`
* In the filesystem popup window open `<libnintendo-hac-hb location>\build\visualstudio\libnintendo-hac-hb\libnintendo-hac-hb.vcxproj`
* Update each dependant project's `References` to include libnintendo-hac-hb
* Update each dependant project's `Property Pages` so that for `All Configurations` and `All Platforms` the `Addition Include Directories` has the relative path to `<libnintendo-hac-hb location>\include`
	* If `libnintendo-hac-hb` is being included as a dependency in a similarly structured project the relative path is `$(SolutionDir)..\..\deps\libnintendo-hac-hb\include`
* Update the `Project Build Order` so libnintendo-hac-hb is built before any of its dependants
* Update the `Project Dependencies` so that each dependant has the box checked for libnintendo-hac-hb
