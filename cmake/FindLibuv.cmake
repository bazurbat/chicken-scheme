#.rst:
# FindLibuv
# -------------
#
# Find libuv library

include(FindPackageHandleStandardArgs)

if(LIBUV_ROOT_DIR)
    find_path(LIBUV_INCLUDE_DIRS uv.h
        PATHS ${LIBUV_ROOT_DIR}/include
        NO_DEFAULT_PATH)
    find_library(LIBUV_LIBRARIES uv
        PATHS ${LIBUV_ROOT_DIR}/lib
            ${LIBUV_ROOT_DIR}/lib64
            ${LIBUV_ROOT_DIR}/lib32
        NO_DEFAULT_PATH)
endif()

find_path(LIBUV_INCLUDE_DIRS uv.h)
find_library(LIBUV_LIBRARIES uv)

find_package_handle_standard_args(Libuv DEFAULT_MSG
    LIBUV_LIBRARIES LIBUV_INCLUDE_DIRS)
