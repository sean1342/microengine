#include "graphics.h"
#include <iostream>
#include <GLFW/glfw3.h>

me::Graphics::Graphics(int height, int width) {
    if (!glfwInit()) {
        std::cout << "GLFW intitialization failed" << std::endl;
        return;
    }

    m_window = glfwCreateWindow(width, height, "testing", NULL, NULL);

    if (!m_window) {
        std::cout << "OpenGL window or Opengl contect creation failed" << std::endl;
        return;
    }

    glfwMakeContextCurrent(m_window);
};

void me::Graphics::kill() {
    glfwTerminate();
    glfwDestroyWindow(m_window);

    std::cout << "Killed graphics instance" << std::endl;

    return;
}