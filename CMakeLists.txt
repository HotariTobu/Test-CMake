cmake_minimum_required(VERSION 3.13)
project(ImageContent1 VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin/${BUILD_TYPE_LOWER})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin/${BUILD_TYPE_LOWER})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin/${BUILD_TYPE_LOWER})

include(CTest)
enable_testing()

include(Helper.cmake)

add_subdirectory(Lib)

add_subdirectory(Main)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
