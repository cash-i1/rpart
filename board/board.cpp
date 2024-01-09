#include "../particle/particle.h"
#include "../particle/particle_ref.cpp"
#include "board.h"
#include "../global.h"
#include <raylib.h>
#include <iostream>

Board * board_ptr;

Particle Board::get_particle_at_pos(Part2 pos) {
    return board_ptr->board[pos.x][pos.y];
}
Vector2 Board::part2vector(Part2 pos) {
    return Vector2 {
        static_cast<float>(pos.x * cell_size),
        static_cast<float>(pos.y * cell_size),
    };
}
Part2 Board::vector2part(Vector2 pos) {
    return Part2 {
        static_cast<int>(pos.x / cell_size),
        static_cast<int>(pos.y / cell_size),
    };
}

// Setters
void Board::set_particle_at_pos(Part2 pos, Particle p) {
    board_ptr->board[pos.x][pos.y] = p;
}

// Misc
void Board::step() {
    std::cout << "Hello i am a poo" << std::endl;
    for (int row = 0; row < grid_width; row++) {
        for (int col = 0; col < grid_height; col++) {
            board_ptr->board[row][col].update();
        }
    }
}
void Board::init() {
    board_ptr = this;

    for (int row = 0; row < grid_width; row++) {
        for (int col = 0; col < grid_height; col++) {
            board_ptr->board[row][col] = pAIR();
            std::cout << board_ptr->board[row][col].name;
        }
        std::cout << std::endl;
    }
}
void Board::draw() {
    for (int row = 0; row < grid_width; row++) {
        for (int col = 0; col < grid_height; col++) {
            DrawRectangle(row*cell_size, col*cell_size, cell_size, cell_size, board_ptr->board[row][col].col);
        }
    }
}

