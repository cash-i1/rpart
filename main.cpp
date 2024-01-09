#include <raylib.h>
#include <iostream>
#include "global.h"
#include "board/board.h"
#include "particle/particle.h"
#include "particle/particle_ref.cpp"

int main() {
    InitWindow(scr_width, scr_height, "rpart");
    std::cout << grid_width << " " << scr_width << std::endl;    

    Board b;
    b.init();

    while (!WindowShouldClose()) {

        if (IsKeyDown(KEY_D)) {
            b.set_particle_at_pos(b.vector2part(GetMousePosition()), pSAND());
            
        }

        BeginDrawing();
            b.draw();
        EndDrawing();
    }
}
