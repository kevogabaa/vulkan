//
// Created by ogaba on 06/02/24.
//

#include "first_app.hpp"
#include <iostream>
#include <stdexcept>

int main() {
    lve::FirstApp app{};
    try{
        app.run();
    } catch(const std::exception &e){
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
