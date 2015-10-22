# - Chicken Run script

# message(STATUS "RUN ${COMMAND}
#    CHICKEN_REPOSITORY: ${CHICKEN_REPOSITORY}")

if(CHICKEN_REPOSITORY)
    set(ENV{CHICKEN_REPOSITORY} "${CHICKEN_REPOSITORY}")
endif()

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
