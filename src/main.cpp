#include "../include/raylib.h"

#include <iostream>

void confirm_exit() {

    ClearBackground( LIGHTGRAY );

    DrawText("Are you sure you want to exit program? [Y/N]", ( ( GetScreenWidth() / 2 ) / 2 ) - 98, ( ( GetScreenHeight() / 2 ) / 2 ) - 15, 30, BLACK);

    if ( IsKeyPressed( KEY_Y ) ) { CloseWindow(); }
    else if ( IsKeyPressed( KEY_N ) ) { /* set state equal to the resumed game */ }
    
}

void initialize() {

    const double screenWidth = 1000;
    const double screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "clicker");

    SetExitKey(KEY_NULL); // To provide confirm exit screen

    while ( !WindowShouldClose() ) {

        if ( IsKeyPressed(KEY_ESCAPE ) ) {
            confirm_exit();
        }

        BeginDrawing();
            ClearBackground( LIGHTGRAY );
        EndDrawing();
        
    }

    CloseWindow();

}

int main( void ) {
    
    SetTargetFPS(100);

    initialize();
    
    return 0;
}