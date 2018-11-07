#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <string>

namespace UI
{
    class Window
    {
        public:
            /* Represents the window title */
            std::string title;

            /* Represents the window size (width x height) */
            int width, height;

            /* Represents the window position in the screen (x, y) */
            int x, y;

            /* Window constructor, it creates a new Window with the given attributes */
            Window(std::string title, int width, int height, int x, int y)
                : title(title), width(width), height(height), x(x), y(y) {}
    };
}

#endif
