#include <iostream>
#include <GLFW/glfw3.h>

int
main (int argc, char **argv)
{
    if (glfwInit() != GLFW_TRUE) {
        std::cerr << "error: unable to initialize glfw" << std::endl;
        return 1;
    }

    std::cout << "glfw version: " << glfwGetVersionString() << std::endl;

    glfwTerminate();
    return 0;
}

