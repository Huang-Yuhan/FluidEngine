#pragma once
#include "hyh_window.hpp"

namespace FluidEngine {
    class FirstApp {
    public:
        static constexpr int WIDTH=800;
        static constexpr int HEIGHT=600;
        void run();
    private:
        HyhWindow hyhWindow{WIDTH,HEIGHT,"Hello Vulkan!"};
    };
}
