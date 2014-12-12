# - Chicken Run script

if(CHICKEN_REPOSITORY)
    set(ENV{CHICKEN_REPOSITORY} "${CHICKEN_REPOSITORY}")
endif()

if(PATH)
    file(TO_CMAKE_PATH "$ENV{PATH}" path)
    list(INSERT path 0 "${PATH}")
    file(TO_NATIVE_PATH "${path}" path)
    set(ENV{PATH} "${path}")
endif()

if(LIBRARY_PATH)
    set(ENV{LD_LIBRARY_PATH} "${LIBRARY_PATH}")
    set(ENV{DYLD_LIBRARY_PATH} "${LIBRARY_PATH}")
endif()

foreach(pair ${ENVIRONMENT})
    string(FIND ${pair} = key_len)
    math(EXPR val_begin "${key_len} + 1")
    string(SUBSTRING ${pair} 0 ${key_len} key)
    string(SUBSTRING ${pair} ${val_begin} -1 val)
    set(ENV{${key}} "${val}")
endforeach()

if(OUTPUT_FILE)
    if(NOT IS_ABSOLUTE OUTPUT_FILE)
        set(OUTPUT_FILE ${CMAKE_CURRENT_BINARY_DIR}/${OUTPUT_FILE})
    endif()
    execute_process(COMMAND ${COMMAND}
        RESULT_VARIABLE command_result
        OUTPUT_VARIABLE command_output
        ERROR_VARIABLE command_output)
    file(WRITE ${OUTPUT_FILE} "${command_output}")
else()
    execute_process(COMMAND ${COMMAND}
        RESULT_VARIABLE command_result)
endif()

if(command_result)
    message("${command_output}")
    message(FATAL_ERROR "Command failed: ${command_result}")
endif()
