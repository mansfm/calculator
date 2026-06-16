cmake_minimum_required(VERSION 3.10)

project(calculator)

include(FetchContent)

FetchContent_Declare(
    libmath
    GIT_REPOSITORY git@github.com:mansfm/libmath.git
    GIT_TAG main
)

FetchContent_MakeAvailable(libmath)

add_executable(calculator
    src/app.cpp
    src/main.cpp
)

target_link_libraries(calculator
    PRIVATE
        math
)

install(TARGETS calculator
    RUNTIME DESTINATION /usr/local/bin
)

option(ENABLE_CLANG_FORMAT "Enable clang-format" OFF)
if(ENABLE_CLANG_FORMAT)
    find_program(CLANG_FORMAT_PATH NAMES clang-format-19 clang-format REQUIRED)
    message(STATUS "Found clang-format: ${CLANG_FORMAT_PATH}")

    file(GLOB_RECURSE CLANG_FORMAT_SRC CONFIGURE_DEPENDS
        include/*.h
        src/*.cpp
    )

    add_custom_target(clang-format-target-calculator
        COMMAND
            ${CLANG_FORMAT_PATH} -style=file -i ${CLANG_FORMAT_SRC}
        WORKING_DIRECTORY
            ${CMAKE_SOURCE_DIR}
        COMMENT
            "Formatting with ${CLANG_FORMAT_PATH} ..."
    )

    add_dependencies(calculator clang-format-target-calculator)
endif()
