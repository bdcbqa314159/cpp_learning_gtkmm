project(chapter_07)

set(exe_1 main_range_widgets)
set(sources_1 range_widgets.cpp main_range_widgets.cpp)
set(includes_1 ./ ${GTKMM_INCLUDE_DIRS})

add_executable(${exe_1} ${sources_1})
target_include_directories(${exe_1} PUBLIC ${includes_1})
target_link_libraries(${exe_1} ${GTKMM_LIBRARIES})
