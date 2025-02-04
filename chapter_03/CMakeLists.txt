project(chapter_03)

set(exe_1 simple_example)

add_executable(${exe_1} ${exe_1}.cpp)
target_include_directories(${exe_1} PUBLIC ${GTKMM_INCLUDE_DIRS})
target_link_libraries(${exe_1} ${GTKMM_LIBRARIES})