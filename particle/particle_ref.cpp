#include "particle.h"
#include <raylib.h>
#include <iostream>

class pSAND: public Particle{
public:
    pSAND() {
        name = "SAND";
        col = Color {
            static_cast<unsigned char>(GetRandomValue(220, 255)),
            static_cast<unsigned char>(GetRandomValue(220, 255)),
            static_cast<unsigned char>(GetRandomValue(0, 30)),
            255};

        ppf = {0,1};
        dir = {0,1};
    };

    void update() {
        this->pos.y += ppf.y;
        this->pos.x += ppf.x;
        std::cout << pos.y << std::endl;
    }
};


class pAIR: public Particle{
public:
    pAIR() {
        name = "AIR";
        col = Color {0,0,0,0};
        ppf = {0,0};
        dir = {0,0};
    };
    void update() {}
};
