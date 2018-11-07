#include "../include/Engine.hpp"
#include <stdio.h>

using namespace UI;

Window *Engine::window(std::string title, int width, int height, int x, int y)
{
    printf("Adding Window to UI...\n");
    auto window = new Window(title, width, height, x, y);
    this->windows.push_back(window);

    return window;
}

void Engine::start()
{
    printf("Starting UI...\n");
}
