#pragma once

#include <vector>
#include <raylib.h>
#include "../particle/particle.h"
#include "../global.h"

class Board {
public:

    //std::vector<std::vector<Particle>> board; 
    Particle board[grid_width][grid_height];
    // Getters
    Particle get_particle_at_pos(Part2 pos);
    Vector2 part2vector(Part2 pos);
    Part2 vector2part(Vector2 pos);
    // Setters
    void set_particle_at_pos(Part2 pos, Particle p);

    // Misc
    void step();
    void init();
    void draw();

};
