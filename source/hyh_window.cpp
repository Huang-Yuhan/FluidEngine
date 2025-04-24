//
// Created by icecreamsarkaz on 4/25/25.
//

#include "hyh_window.hpp"

#include <iostream>
#include <utility>

namespace FluidEngine {
    HyhWindow::HyhWindow(const int w, const int h, std::string name):width(w),height(h),windowName(std::move(name)){
        initWindow();
    }


    HyhWindow::~HyhWindow() {
        glfwDestroyWindow(window);
        glfwTerminate();
        std::cout<<"Destroy Window\n";
    }


    void HyhWindow::initWindow() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API,GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE,GLFW_FALSE);

        window=glfwCreateWindow(width,height,windowName.c_str(),nullptr,nullptr);

        std::cout<<"Create Window\n";
    }




} // FluidEngine