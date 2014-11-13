cmake_minimum_required(VERSION 2.8.4)

if(POLICY CMP0042)
    cmake_policy(SET CMP0042 NEW)
endif()

# search for CMake includes in the project directory first
set(CMAKE_MODULE_PATH ${CMAKE_HOME_DIRECTORY}/cmake CACHE INTERNAL "")
# override default platform compiler flags
set(CMAKE_USER_MAKE_RULES_OVERRIDE
    ${CMAKE_HOME_DIRECTORY}/cmake/ChickenPlatformOverride.cmake)

find_package(Libuv)

enable_testing()

add_custom_target(tests)

find_package(Chicken REQUIRED)

set(CHICKEN_EXTRACT_DEPENDS YES)

set(CHICKEN_RUN ${CMAKE_SOURCE_DIR}/cmake/ChickenRun.cmake)
set(CHICKEN_EXTRACT_SCRIPT ${CMAKE_SOURCE_DIR}/cmake/extract-depends.scm)
set(CHICKEN_TYPES_DB ${CMAKE_SOURCE_DIR}/misc/types.db)

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
