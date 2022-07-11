## VSCode sample setup for c++ projects with CMake tooling and debugger 

- Vcpkg integration with CMake tools
- CMakePresets setup for build process 
- Use lldb-mi debugger from cpptools extension
- vcpkg.json for vcpkg versioning and manifest

In case you want to use terminal and cmake cli to build the application with vcpkg dependencies use the following command
```
cmake -B out/build -S . -DCMAKE_TOOLCHAIN_FILE=vcpkg/scripts/buildsystems/vcpkg.cmake
cmake --build out/build
```