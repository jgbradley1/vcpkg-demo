# vcpkg-demo
A small sample project demoing the use of vcpkg

# Quickstart
Download and build `vcpkg`
```
git clone git@github.com:microsoft/vcpkg.git
./vcpkg/bootstrap-vcpkg.sh --disableMetrics   # builds vcpkg with no telemetry
```
The `vcpkg` executable will be located at the root of the repo (i.e. `<vcpkg_repository>/vcpkg`)

Build this sample project

```
git clone git@github.com:jgbradley1/vcpkg-demo.git
cd vcpkg-demo
cmake -DCMAKE_TOOLCHAIN_FILE=<vcpkg_repository>/scripts/buildsystems/vcpkg.cmake -S . -B build
cmake --build build
```

## Notes
Several 3rd party libraries will be declared in the `vcpkg.json` manifest file to demo the varios ways a library can be added/configured for a project.

TODO: add a custom library configuration example (e.g. building OpenCV with certain options disabled)

