#ifndef ENGINE_HPP
#define ENGINE_HPP

#include <vector>
#include "Window.hpp"

namespace UI
{
    class Engine
    {
        public:
            /* Represents the UI windows of the application */
            std::vector<Window *> windows;

            /* Creates a new window for the UI */
            Window *window(std::string title = "", int width = 200, int height = 200, int x = 0, int y = 0);

            /* Fires up the whole UI */
            void start();
    };
}

#endif
