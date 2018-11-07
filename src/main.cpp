#include "../include/UIEngine.hpp"
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Starting Interface...\n");

    auto app = new UI::Engine();
    app->window("Sample Window");
    app->start();

    printf("Ending Interface...\n");
}
