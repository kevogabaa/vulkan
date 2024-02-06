//
// Created by ogaba on 06/02/24.
//

#include "first_app.hpp"

namespace lve {
    void FirstApp::run() {
        while (!window.shouldClose()) {
            glfwPollEvents();
        }
    }
} // namespace lve
