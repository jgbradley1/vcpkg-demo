cmake_minimum_required(VERSION 3.0)
project(test)

# ———————————————————————————
# find 3rd party dependencies
# ———————————————————————————
find_package(unofficial-sqlite3 CONFIG REQUIRED)
find_package(OpenCV CONFIG REQUIRED)
message("Found unofficial-sqlite3 Location: ${unofficial-sqlite3_DIR}")
message("Found Opencv Location: ${OpenCV_DIR}")

# —————————————————————————————
# create target for main binary
# —————————————————————————————
add_executable(main main.cpp)
target_link_libraries(main PRIVATE unofficial::sqlite3::sqlite3 opencv_core)
