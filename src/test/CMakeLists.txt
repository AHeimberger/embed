project(test LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)

add_executable(test
        ./resource_holder.hpp
        ./resource.hpp
        ./span.hpp
        ./test.cpp
    )
