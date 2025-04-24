#include "first_app.hpp"

namespace FluidEngine {
    void FirstApp::run() {
        while (!hyhWindow.shouldClose()) {
            glfwPollEvents();
        }
    }

}