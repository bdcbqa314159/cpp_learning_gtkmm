project(chapter_06)

set(exe_1 main_buttons)
set(sources_1 buttons.cpp main_buttons.cpp)
set(includes_1 ./ ${GTKMM_INCLUDE_DIRS})

add_executable(${exe_1} ${sources_1})
target_include_directories(${exe_1} PUBLIC ${includes_1})
target_link_libraries(${exe_1} ${GTKMM_LIBRARIES})