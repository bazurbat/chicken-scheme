# - Chicken Build Tag

function(_chicken_write_buildtag)
    set(src_buildversion ${CMAKE_CURRENT_SOURCE_DIR}/buildversion)
    set(buildversion ${CMAKE_CURRENT_BINARY_DIR}/buildversion)
    set(buildid ${CMAKE_CURRENT_BINARY_DIR}/buildid)
    set(buildbranch ${CMAKE_CURRENT_BINARY_DIR}/buildbranch)
    set(buildtag ${CMAKE_CURRENT_BINARY_DIR}/buildtag.h)

    file(STRINGS buildversion version LIMIT_COUNT 1)

    set(CHICKEN_VERSION "${buildversion}" CACHE INTERNAL "")

    if(${src_buildversion} IS_NEWER_THAN ${buildversion})
        file(WRITE ${buildversion} ${version})
    endif()

    find_package(Git)
    if(GIT_FOUND AND EXISTS ${CMAKE_HOME_DIRECTORY}/.git)
        execute_process(
            COMMAND ${GIT_EXECUTABLE} rev-parse --short HEAD
            OUTPUT_VARIABLE git_rev
            ERROR_QUIET OUTPUT_STRIP_TRAILING_WHITESPACE)
        if(git_rev AND (${buildversion} IS_NEWER_THAN ${buildid}))
            file(WRITE ${buildid} ${git_rev})
        endif()

        # TODO: handle detached head, other cases
        execute_process(
            COMMAND ${GIT_EXECUTABLE} rev-parse --abbrev-ref HEAD
            OUTPUT_VARIABLE git_branch
            ERROR_QUIET OUTPUT_STRIP_TRAILING_WHITESPACE)
        if(git_branch AND (${buildversion} IS_NEWER_THAN ${buildbranch}))
            file(WRITE ${buildbranch} ${git_branch})
        endif()
    endif()

    # TODO: handle time, is hostname really needed?
    if(${buildversion} IS_NEWER_THAN ${buildtag})
        file(WRITE ${buildtag} "#define C_BUILD_TAG \"compiled on ${CMAKE_SYSTEM}\"\n")
    endif()
endfunction()
_chicken_write_buildtag()
