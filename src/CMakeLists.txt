aux_source_directory(. MAIN)
add_executable(${PROJECT_NAME}  ${MAIN})

target_link_libraries(${PROJECT_NAME}  dll4)
add_subdirectory(class4)
