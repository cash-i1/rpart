#include <raylib.h>
#include <string>

const int scr_width = 1280;
const int scr_height = 720;

int main() {
    InitWindow(scr_width, scr_height, "RowderToy");

    Rectangle button;
    Color button_col;
    std::string clicked;
    button = Rectangle{ scr_width/2 - scr_width/4/2, scr_height/2, scr_width/4, scr_height/16};
    button_col = GRAY;

    while (!WindowShouldClose()) {
        if (CheckCollisionPointRec(GetMousePosition(), button)) {
            clicked = "true";
            button_col = GRAY;
        } else {
            clicked = "false";
            button_col = RAYWHITE;
        }

        BeginDrawing();
            ClearBackground(BLACK);
            DrawRectangleRec(button, button_col);
            DrawText(clicked.c_str(), 200, 200, 20, button_col);
        EndDrawing();
    }
}
