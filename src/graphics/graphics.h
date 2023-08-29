#pragma once
#include <GLFW/glfw3.h>

namespace me{
class Graphics {
private:
    GLFWwindow* m_window;
public:
    Graphics(int height, int width);

    void kill();
};
}