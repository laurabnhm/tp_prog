#include <iostream>
#include <random>
#include <string.h>
#include <vector>
using namespace std;

#include "play_menu.h"
#include "../lib/p6/include/p6/p6.h"

int main()
{
    // Menu();   

    auto ctx = p6::Context{{1280, 720, "p6 example"}};
        ctx.update = [&]() {                    // Define the function that will be called in a loop once you call ctx.start()
        ctx.background({0.5f, 0.3f, 0.8f}); // Clear the background with some color (Try to comment out this line to see what happens)
        ctx.circle(p6::Center{ctx.mouse()}, // Draw a circle centered on the mouse cursor
                   p6::Radius{0.3f});       // with a radius of 0.3
    };
    ctx.start();
}

