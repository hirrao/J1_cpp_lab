set(LibraryName dll3)
aux_source_directory(. dll3)
add_library(${LibraryName} SHARED ${dll3})
set_target_properties(${LibraryName} PROPERTIES

LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib
)

add_custom_command(TARGET ${LibraryName} POST_BUILD

        COMMAND ${CMAKE_COMMAND} -E copy_directory

        ${PROJECT_SOURCE_DIR}/lib

        ${PROJECT_SOURCE_DIR}/bin
)