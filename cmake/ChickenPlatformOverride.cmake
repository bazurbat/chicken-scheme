# - Chicken Platform Override

if(MSVC)
    set(CMAKE_C_FLAGS_DEBUG_INIT "/Od /Zi")
    set(CMAKE_C_FLAGS_MINSIZEREL_INIT "/O1 /Os /Oy")
    set(CMAKE_C_FLAGS_RELEASE_INIT "/Ox /Ot /Oy")
    set(CMAKE_C_FLAGS_RELWITHDEBINFO_INIT "/Od /Zi")
else()
    set(CMAKE_C_FLAGS_DEBUG_INIT "-g -Wall -Wno-unused")
    set(CMAKE_C_FLAGS_MINSIZEREL_INIT "-Os -fomit-frame-pointer")
    set(CMAKE_C_FLAGS_RELEASE_INIT "-O2 -fomit-frame-pointer")
    set(CMAKE_C_FLAGS_RELWITHDEBINFO_INIT "-O1 -g -Wall -Wno-unused")
endif()
