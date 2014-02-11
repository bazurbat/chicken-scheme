# - Find Chicken Scheme compiler

if(NOT CHICKEN_ROOT_DIR)
    if(EXISTS $ENV{CHICKEN_PREFIX})
        set(_chicken_root $ENV{CHICKEN_PREFIX})
    else()
        set(_chicken_root "/usr")
    endif()
    set(CHICKEN_ROOT_DIR ${_chicken_root} CACHE PATH
        "Chicken host install root")
endif()

find_program(CHICKEN_EXECUTABLE ${CHICKEN_PROGRAM_PREFIX}chicken
    PATHS ${CHICKEN_ROOT_DIR}/bin
    NO_DEFAULT_PATH)
find_path(CHICKEN_INCLUDE_DIR chicken.h
    PATHS ${CHICKEN_ROOT_DIR}/include/${CHICKEN_PROGRAM_PREFIX}chicken
    NO_DEFAULT_PATH)
find_library(CHICKEN_LIBRARY
    NAMES chicken ${CHICKEN_PROGRAM_PREFIX}chicken
    PATHS ${CHICKEN_TARGET_ROOT_DIR}/lib ${CHICKEN_ROOT_DIR}/lib
    NO_DEFAULT_PATH)

mark_as_advanced(CHICKEN_EXECUTABLE CHICKEN_INCLUDE_DIR CHICKEN_LIBRARY)

function(_chicken_args_options _ARGS _OPTIONS)
    set(_doing_options FALSE)
    foreach(_arg ${ARGN})
        if("${_arg}" STREQUAL "OPTIONS")
            set(_doing_options TRUE)
        else()
            if(_doing_options)
                list(APPEND _options ${_arg})
            else()
                list(APPEND _files ${_arg})
            endif()
        endif ()
    endforeach()
    set(${_ARGS} ${_files} PARENT_SCOPE)
    set(${_OPTIONS} ${_options} PARENT_SCOPE)
endfunction()

function(_chicken_flags _OUTVAR)
    execute_process(
        COMMAND ${CHICKEN_CSC_EXECUTABLE} / -dry-run -t ${ARGN}
        COMMAND cut "-f5-" "-d "
        OUTPUT_VARIABLE _flags
        OUTPUT_STRIP_TRAILING_WHITESPACE)
    separate_arguments(_flags UNIX_COMMAND ${_flags})
    set(${_OUTVAR} ${_flags} PARENT_SCOPE)
endfunction()

function(_chicken_cflags _OUTVAR)
    foreach(f ${ARGN})
        if(f STREQUAL "chicken-compile-shared")
            set(flags "${flags} -DPIC -DC_SHARED")
        endif()
    endforeach()
    set(${_OUTVAR} ${flags} PARENT_SCOPE)
endfunction()

function(_chicken_custom_command _OUTPUT _INPUT)
    string(REGEX REPLACE "(.*)\\.scm$" "\\1.chicken.c" _cname ${_INPUT})

    get_filename_component(_input ${_INPUT} ABSOLUTE)
    file(TO_NATIVE_PATH ${_input} _input)

    get_filename_component(_path ${_input} PATH)
    file(TO_NATIVE_PATH ${_path} _path)

    set(_output ${CMAKE_CURRENT_BINARY_DIR}/${_cname})
    file(TO_NATIVE_PATH ${_output} _output)

    _chicken_cflags(_compile_flags ${ARGN})
    set_property(SOURCE ${_output} APPEND_STRING PROPERTY
        COMPILE_FLAGS " -I${_path} ${_compile_flags}")

    # _chicken_flags(_flags ${ARGN} ${CHICKEN_ARGS})
    set(_flags ${ARGN})
    add_custom_command(
        OUTPUT ${_output} ${_command_output}
        COMMAND ${CHICKEN_EXECUTABLE}
        ARGS ${_input} -output-file ${_output} -include-path ${_path}
             ${_flags} ${_command_args}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        DEPENDS ${_input}
        VERBATIM)

    set(${_OUTPUT} ${_output} PARENT_SCOPE)
endfunction()

function(add_chicken_source _OUTVAR _FILENAME)
    _chicken_custom_command(_output ${_FILENAME} ${ARGN})
    list(APPEND ${_OUTVAR} ${_output})
    set(${_OUTVAR} ${${_OUTVAR}} PARENT_SCOPE)
endfunction()

function(add_chicken_library _NAME _FILENAME)
    _chicken_custom_command(source ${_FILENAME} ${ARGN})

    add_library(${_NAME} MODULE ${source})
    set_target_properties(${_NAME} PROPERTIES PREFIX "")
    target_link_libraries(${_NAME} ${CHICKEN_LIBRARIES})
endfunction()

function(add_chicken_module _NAME _FILENAME)
    _chicken_args_options(_names _options ${ARGN})
    if(_names)
        set(_libs ${_names})
    else()
        set(_libs ${_NAME})
    endif()

    foreach(_n ${_libs})
        set(_command_output ${_command_output} ${_n}.import.scm)
        set(_command_args ${_command_args} -emit-import-library ${_n})
    endforeach()
    _chicken_custom_command(source ${_FILENAME} -s ${_options})

    add_library(${_NAME} MODULE ${source})
    set_target_properties(${_NAME} PROPERTIES PREFIX "")
    target_link_libraries(${_NAME} ${CHICKEN_LIBRARIES})
endfunction()

function(chicken_wrap_sources _SOURCES)
    _chicken_args_options(_files _options ${ARGN})
    foreach(_f ${_files})
        add_chicken_source(_sources ${_f} ${_options})
    endforeach()
    list(APPEND ${_SOURCES} ${_sources})
    set(${_SOURCES} ${${_SOURCES}} PARENT_SCOPE)
endfunction()

include(FindPackageHandleStandardArgs)
include(FindPackageMessage)

find_package_handle_standard_args(Chicken DEFAULT_MSG CHICKEN_ROOT_DIR
    CHICKEN_EXECUTABLE CHICKEN_INCLUDE_DIR CHICKEN_LIBRARY)

if(CHICKEN_FOUND)
    set(CHICKEN_INCLUDE_DIRS ${CHICKEN_INCLUDE_DIR})
    set(CHICKEN_LIBRARIES ${CHICKEN_LIBRARY} m dl)

    find_package_message(Chicken
        "\tCHICKEN_EXECUTABLE: ${CHICKEN_EXECUTABLE}
\tCHICKEN_INCLUDE_DIR: ${CHICKEN_INCLUDE_DIR}
\tCHICKEN_LIBRARY: ${CHICKEN_LIBRARY}"
        "$CHICKEN_ROOT_DIR")
endif()
