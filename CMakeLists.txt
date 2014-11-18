cmake_minimum_required(VERSION 2.8.4)

if(POLICY CMP0042)
    # MACOSX_RPATH is enabled by default
    cmake_policy(SET CMP0042 NEW)
endif()
if(POLICY CMP0048)
    # The project() command manages VERSION variables
    cmake_policy(SET CMP0048 NEW)
endif()

# search for CMake includes in the project directory first
set(CMAKE_MODULE_PATH ${CMAKE_HOME_DIRECTORY}/cmake CACHE INTERNAL "")
# override default platform compiler flags
set(CMAKE_USER_MAKE_RULES_OVERRIDE
    ${CMAKE_HOME_DIRECTORY}/cmake/ChickenPlatformOverride.cmake)

project(chicken C ASM)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

if(MSVC)
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
    set(CMAKE_PDB_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
elseif(XCODE_VERSION)
    # Xcode assumes this, have not found a way to change it from CMake
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/build)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/build)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/build)
endif()

if(CHICKEN_USE_LIBUV)
    find_package(Libuv REQUIRED)
endif()

enable_testing()

add_custom_target(BUILD_TESTS)
# set_property(TARGET BUILD_TESTS PROPERTY FOLDER "Tests")

find_package(Chicken REQUIRED)

set(CHICKEN_BOOTSTRAP YES)
set(CHICKEN_RUN ${CMAKE_SOURCE_DIR}/cmake/ChickenRun.cmake)
set(CHICKEN_EXTRACT_SCRIPT ${CMAKE_SOURCE_DIR}/cmake/extract-depends.scm)
set(CHICKEN_TYPES_DB ${CMAKE_SOURCE_DIR}/misc/types.db)

list(APPEND CHICKEN_DEFINITIONS HAVE_CHICKEN_CONFIG_H)

if(CMAKE_GENERATOR STREQUAL "Xcode")
    set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/build)
    set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/build)
endif()

include_directories(include)

add_subdirectory(src)
add_subdirectory(tests EXCLUDE_FROM_ALL)

# cpack

set(CPACK_PACKAGE_NAME "CHICKEN")
set(CPACK_PACKAGE_VERSION_MAJOR 4)
set(CPACK_PACKAGE_VERSION_MINOR 9)
set(CPACK_PACKAGE_VERSION_PATCH 1)
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "A practical and portable Scheme system")
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_SOURCE_DIR}/LICENSE")

if(UNIX)
    set(CPACK_GENERATOR STGZ)
elseif(MSVC)
    set(CPACK_GENERATOR NSIS)
endif()

include(CPack)
