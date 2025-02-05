project(chapter_06)

set(exe_1 main_buttons)
set(sources_1 buttons.cpp main_buttons.cpp)
set(includes_1 ./ ${GTKMM_INCLUDE_DIRS})

add_executable(${exe_1} ${sources_1})
target_include_directories(${exe_1} PUBLIC ${includes_1})
target_link_libraries(${exe_1} ${GTKMM_LIBRARIES})

set(exe_2 main_ex_window)
set(sources_2 example_window.cpp main_ex_window.cpp)
set(includes_2 ./ ${GTKMM_INCLUDE_DIRS})

add_executable(${exe_2} ${sources_2})
target_include_directories(${exe_2} PUBLIC ${includes_2})
target_link_libraries(${exe_2} ${GTKMM_LIBRARIES})

set(exe_3 main_radio_buttons)
set(sources_3 radio_buttons.cpp main_radio_buttons.cpp)
set(includes_3 ./ ${GTKMM_INCLUDE_DIRS})

add_executable(${exe_3} ${sources_3})
target_include_directories(${exe_3} PUBLIC ${includes_3})
target_link_libraries(${exe_3} ${GTKMM_LIBRARIES})