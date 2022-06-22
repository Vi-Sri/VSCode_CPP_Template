## VSCode setup for sample process with debugger setup 

- Vcpkg integration with CMake tools
- CMakePresets setup for build process 
- Use lldb-mi debugger from cpptools extension

In case you want to use terminal and cmake cli to build the application with vcpkg dependencies use the following command
```
cmake -B out/build -S . -DCMAKE_TOOLCHAIN_FILE=vcpkg/scripts/buildsystems/vcpkg.cmake
```