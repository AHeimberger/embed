project(embed LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)

add_executable(embed
        ./embed.hpp
        ./main.cpp
        ./resource.hpp
        ./saver.hpp
        ./span.hpp
    )
