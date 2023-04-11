set(LibraryName dll4)
aux_source_directory(. dll4)
add_library(${LibraryName} SHARED ${dll4})
set_target_properties(${LibraryName} PROPERTIES

LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib
)

add_custom_command(TARGET ${LibraryName} POST_BUILD

        COMMAND ${CMAKE_COMMAND} -E copy_directory

        ${PROJECT_SOURCE_DIR}/lib

        ${PROJECT_SOURCE_DIR}/bin
)