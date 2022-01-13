cmake_minimum_required  (VERSION 3.1)
project                 (Shift CXX)

add_library (Shift INTERFACE)
add_library (Shift::Shift ALIAS Shift)

target_compile_features (Shift
    INTERFACE cxx_std_11
)

target_include_directories (Shift
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)


add_subdirectory (test)
