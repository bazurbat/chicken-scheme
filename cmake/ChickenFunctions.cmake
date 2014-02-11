# - Chicken Functions

function(_chicken_concat _OUTVAR)
    foreach(arg ${ARGN})
        set(s "${s} ${arg}")
    endforeach()
    set(${_OUTVAR} ${s} PARENT_SCOPE)
endfunction()
