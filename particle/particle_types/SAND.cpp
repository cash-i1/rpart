#include "../particle.h"
#include <raylib.h>

class ParticleSand: public Particle{
public:
    ParticleSand() {
        col = Color {
            static_cast<unsigned char>(GetRandomValue(220, 255)),
            static_cast<unsigned char>(GetRandomValue(220, 255)),
            static_cast<unsigned char>(GetRandomValue(0, 30)),
            255};

        ppf = {0,1};
        dir = {0,1};
    };
    void update() {
        this->pos.x *= ppf.y;
        this->pos.x *= ppf.x;
    }
};
