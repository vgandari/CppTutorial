cmake_minimum_required(VERSION 3.5)
project(CppTutorial)

# Compile as C++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lgtest -lgtest_main")

# Add Google Test
# find_library(GTEST_LIB gtest)
# find_package(gtest REQUIRED)
# include_directories (${gtest_INCLUDE_DIRS})
# find_library(GMOCK_LIB gmock)
include_directories(gtest /usr/local/include/gtest/include)
include_directories(gmock /usr/local/include/gmock/include)
# add_subdirectory(lib/googletest-master)
# include_directories(lib/googletest-master/googletest/include)
# include_directories(lib/googletest-master/googlemock/include)

# include libraries built by this project
# target_include_directories(name PRIVATE ${INCLUDE_SUBDIRECTORY})

# # Set source directory
# set(SOURCE_DIR src)

# # Set source files
# set(SOURCES
#   ${SOURCE_DIR}/main.cpp
# )

# Add main executable
add_executable(CppTutorial src/main.cpp)
target_link_libraries(CppTutorial gtest gtest_main)

# Add test executable
add_executable(RunMyTests Tests/test.cpp)
target_link_libraries(RunMyTests gtest gtest_main)
