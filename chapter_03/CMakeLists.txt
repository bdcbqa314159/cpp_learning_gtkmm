project(chapter_03)

set(exe_1 simple_example)

set(exe_2 main_hw)
set(sources_2 helloworld.cpp main_hw.cpp)
set(includes_2 ./ ${GTKMM_INCLUDE_DIRS})

add_executable(${exe_1} ${exe_1}.cpp)
target_include_directories(${exe_1} PUBLIC ${GTKMM_INCLUDE_DIRS})
target_link_libraries(${exe_1} ${GTKMM_LIBRARIES})

add_executable(${exe_2} ${sources_2})
target_include_directories(${exe_2} PUBLIC ${includes_2})
target_link_libraries(${exe_2} ${GTKMM_LIBRARIES})