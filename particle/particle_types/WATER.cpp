#include "../particle.h"

class ParticleAir: public Particle{
public:
    ParticleAir() {
        col = Color {0,0,0,0};
        ppf = {0,0};
        dir = {0,0};
    };
    void update() {
        this->pos.x *= ppf.y;
        this->pos.x *= ppf.x;
    }
};
