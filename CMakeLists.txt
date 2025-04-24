cmake_minimum_required(VERSION 3.10)
project(FluidEngine)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find packages
find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)
find_package(Vulkan REQUIRED)

# Add executable
add_executable(FluidEngine main.cpp
        source/hyh_window.cpp
        include/hyh_window.hpp
        include/first_app.hpp
        source/first_app.cpp)

# Include directories
target_include_directories(FluidEngine PRIVATE
        ${GLFW3_INCLUDE_DIRS}
        ${Vulkan_INCLUDE_DIRS}
        ${GLM_INCLUDE_DIRS}
        ${PROJECT_SOURCE_DIR}/include
)

# Link libraries
target_link_libraries(FluidEngine
        glfw
        ${Vulkan_LIBRARIES}
)

# On some systems, you might need to explicitly link against these libraries
if(UNIX AND NOT APPLE)
    target_link_libraries(FluidEngine
            dl
            pthread
            X11
    )
endif()