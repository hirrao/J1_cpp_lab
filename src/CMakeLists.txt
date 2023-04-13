
add_executable(${PROJECT_NAME}  ./main.cpp)

target_link_libraries(${PROJECT_NAME}  class1)
add_subdirectory(class1)
