aux_source_directory(. MAIN)
add_executable(${PROJECT_NAME}  ${MAIN})

target_link_libraries(${PROJECT_NAME}  dll3)
add_subdirectory(class3)
