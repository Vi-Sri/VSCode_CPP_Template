## VSCode sample setup for c++ projects with CMake tooling and debugger 

- Vcpkg integration with CMake tools
- CMakePresets setup for build process 
- Use lldb-mi debugger from cpptools extension
- vcpkg.json for vcpkg versioning and manifest

To install the packages from vcpkg manifest. Use the following command, a vcpkg_installed folder will be created, you can add that to includes path in vscode. 
```
./vcpkg/vcpkg install --feature-flags=manifests,binarycaching
```

In case you want to use terminal and cmake cli to build the application with vcpkg dependencies use the following command
```
cmake -B out/build -S . -DCMAKE_TOOLCHAIN_FILE=vcpkg/scripts/buildsystems/vcpkg.cmake
cmake --build out/build
```