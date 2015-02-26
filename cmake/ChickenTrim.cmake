# Normalizes line endings and removes the pattern from the input file.

file(READ "${INPUT_FILE}" input)

if(PATTERN)
    string(REGEX REPLACE "${PATTERN}" "" output "${input}")
else()
    set(output "${input}")
endif()

file(WRITE "${OUTPUT_FILE}" "${output}")
