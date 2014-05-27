# - Chicken Apply Hack

# message("CMAKE_SYSTEM_PROCESSOR: " ${CMAKE_SYSTEM_PROCESSOR})

enable_language(ASM)

# TODO: find values for other arches
if(CMAKE_SYSTEM_PROCESSOR STREQUAL "x86_64")
    set(ARCH x86-64)
elseif(CMAKE_SYSTEM_PROCESSOR STREQUAL "i686")
    set(ARCH x86)
else()
    set(ARCH ${CMAKE_SYSTEM_PROCESSOR})
endif()

if(ARCH AND CMAKE_ASM_COMPILER_WORKS AND NOT MSVC)
    set(APPLY_HACK TRUE)
endif()
