#pragma once

#include <iostream>
#include <raylib.h>
#include <string>

struct Part2 {
    int x;
    int y;
};

class Particle {
public:
    std::string name;
    Vector2 ppf; // Pixels to move every frame
    Color col;
    Part2 pos;
    Vector2 vel;
    Vector2 dir;
    int type;

    virtual void update() {

    }
};
