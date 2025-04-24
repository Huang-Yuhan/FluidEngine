#pragma once
#define GLFW_INCLUDE_VULKAN
#include<GLFW/glfw3.h>
#include <string>

namespace FluidEngine {

class HyhWindow {
public:
    HyhWindow( int w, int h,std::string  name);
    ~HyhWindow();
    [[nodiscard]] bool shouldClose()const {return glfwWindowShouldClose(window);}
private:
    void initWindow();

    const int width;
    const int height;

    std::string windowName;
    GLFWwindow *window;
};

} // FluidEngine

