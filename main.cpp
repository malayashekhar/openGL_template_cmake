#include <iostream>
#include <GLFW/glfw3.h>

int main() {
    GLFWwindow *window;
    if (!glfwInit()) {
        std::cout << "Failed to initialize GLFW" << std::endl;
        return -1;
    }
    window = glfwCreateWindow(640, 480, "Window", NULL, NULL);
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }
    glfwTerminate();

    return 0;
}