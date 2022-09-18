#include "../include/raylib.h"

#include <iostream>

void initialize() {

    const double screenWidth = 1000;
    const double screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "clicker");

    // SetExitKey(KEY_NULL); if you want a custom exit screen

    while ( !WindowShouldClose() ) {

        BeginDrawing();

            ClearBackground( LIGHTGRAY );

        EndDrawing();
        
    }

    CloseWindow();

}

int main( void ) {
    
    SetTargetFPS( 69420 ); // up to you, i recommend trying to implement delta time instead of frame rate limiting though.

    initialize();
    
    return 0;
}