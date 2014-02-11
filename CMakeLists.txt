cmake_minimum_required(VERSION 2.8)

project(chicken C)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_HOME_DIRECTORY}/cmake)

option(ENABLE_PTABLES "Enable procedure tables" YES)
option(OPTIMIZE_FOR_SPEED "Optimize generated C code for speed" NO)
option(BUILD_SHARED_LIBS "Build shared libraries" TRUE)

find_package(Chicken)
include(ChickenFunctions)
include(ChickenApplyHack)
include(ChickenBuildTag)
include(ChickenConfig)

# libchicken
set_property(SOURCE runtime.c PROPERTY OBJECT_DEPENDS ${CHICKEN_CONFIG_H})
set(libchicken_SOURCES runtime.c)
set(libchicken_SCM_SOURCES library.scm eval.scm data-structures.scm ports.scm
    files.scm extras.scm lolevel.scm utils.scm tcp.scm srfi-1.scm srfi-4.scm
    srfi-13.scm srfi-14.scm srfi-18.scm posixunix.scm irregex.scm
    scheduler.scm profiler.scm stub.scm expand.scm modules.scm
    chicken-syntax.scm chicken-ffi-syntax.scm build-version.scm)
chicken_wrap_sources(libchicken_SOURCES ${libchicken_SCM_SOURCES}
    OPTIONS ${CHICKEN_OPTIONS} ${CHICKEN_LIBRARY_OPTIONS})

add_chicken_source(libchicken_SOURCES srfi-69.scm
    ${CHICKEN_OPTIONS} ${CHICKEN_LIBRARY_OPTIONS}
    -extend private-namespace.scm)

if(C_HACKED_APPLY)
    list(APPEND libchicken_SOURCES apply-hack.${CHICKEN_ARCH}.S)
endif()

add_library(libchicken ${libchicken_SOURCES})
target_compile_definitions(libchicken PUBLIC -DPIC -DC_BUILDING_LIBCHICKEN)
target_link_libraries(libchicken ${CHICKEN_EXTRA_LIBS})
set_target_properties(libchicken PROPERTIES PREFIX "" SOVERSION 7)

# chicken
set(chicken_SCM_SOURCES chicken.scm batch-driver.scm compiler.scm
    optimizer.scm lfa2.scm compiler-syntax.scm scrutinizer.scm support.scm
    c-platform.scm c-backend.scm)
chicken_wrap_sources(chicken_SOURCES ${chicken_SCM_SOURCES}
    OPTIONS ${CHICKEN_OPTIONS} ${CHICKEN_COMPILER_OPTIONS})

add_executable(chicken ${chicken_SOURCES})
target_link_libraries(chicken libchicken ${CHICKEN_EXTRA_LIBS})

# csi
set(csi_SCM_SOURCES csi.scm banner.scm private-namespace.scm)
add_chicken_source(csi_SOURCES csi.scm
    ${CHICKEN_OPTIONS} ${CHICKEN_PROGRAM_OPTIONS}
    -extend private-namespace.scm)

add_executable(csi ${csi_SOURCES})
target_link_libraries(csi libchicken ${CHICKEN_EXTRA_LIBS})

# setup-api
# set(setupapi_SCM_SOURCES setup-api.scm setup-download.scm)
# chicken_wrap_sources(setupapi_SOURCES ${setupapi_SCM_SOURCES}
#     OPTIONS ${CHICKEN_OPTIONS})

# import libraries
set(CHICKEN_IMPORT_LIBRARIES chicken lolevel srfi-1 srfi-4 data-structures
    ports files posix srfi-13 srfi-69 extras srfi-14 tcp foreign srfi-18 utils
    csi irregex)

foreach(lib ${CHICKEN_IMPORT_LIBRARIES})
    set(name ${lib}.import)
    set(filename ${lib}.import.scm)
    add_chicken_library(${name} ${filename}
        ${CHICKEN_OPTIONS} ${CHICKEN_IMPORT_LIBRARY_OPTIONS})
    add_dependencies(${name} libchicken)
    install(TARGETS ${name}
        LIBRARY DESTINATION ${EGG_INSTALL_DIR})
endforeach()

install(TARGETS chicken csi libchicken
    RUNTIME DESTINATION ${BIN_INSTALL_DIR}
    LIBRARY DESTINATION ${LIB_INSTALL_DIR})

install(FILES chicken.h ${CHICKEN_CONFIG_H}
    DESTINATION ${INCLUDE_INSTALL_DIR})

# set(MANPAGES chicken.1 csc.1 csi.1 chicken-install.1 chicken-uninstall.1
#     chicken-status.1 chicken-profile.1 chicken-bug.1)
# install(FILES ${MANPAGES}
#     DESTINATION ${MAN_INSTALL_DIR})
