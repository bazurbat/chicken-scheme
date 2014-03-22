# - Chicken Apply Hack

# message("CMAKE_SYSTEM_PROCESSOR: " ${CMAKE_SYSTEM_PROCESSOR})

enable_language(ASM)

# TODO: find values for other arches
if(CMAKE_SYSTEM_PROCESSOR STREQUAL "x86_64")
    set(CHICKEN_ARCH x86-64)
else()
    set(CHICKEN_ARCH ${CMAKE_SYSTEM_PROCESSOR})
endif()

if(CHICKEN_ARCH AND CMAKE_ASM_COMPILER_WORKS)
    set(CHICKEN_APPLY_HACK TRUE)
endif()
