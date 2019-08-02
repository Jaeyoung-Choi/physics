#include "../include/physics.h"

void Physics::analize(long double term)
{
    if (Particle::cnt <= 1)
    {
        return;
    }

    unsigned long long int t = 0, i = 0, j = 0;
    unsigned long long int unitTerm = term * UNIT_TIME;
    long double forceSize = 0;
    Vector unitV = Vector();
    
    for (t = 0; t < unitTerm; t++)
    {
        for (i = 0; i < Particle::cnt; i++)
        {
            Particle::particles[i] -> force = Vector();
        }
        for (i = 0; i < Particle::cnt - 1; i++)
        {
            for (j = i + 1; j < Particle::cnt; j++)
            {
                forceSize = Force::getEletricForceSize(*Particle::particles[i], *Particle::particles[j]) + Force::getGravitySize(*Particle::particles[i], *Particle::particles[j]);
                unitV = (Particle::particles[j] -> position - Particle::particles[i] -> position).getUnitVector();
                Particle::particles[i] -> force = Particle::particles[i] -> force + forceSize * unitV;
                Particle::particles[j] -> force = Particle::particles[j] -> force + forceSize * -1 * unitV;
            }
            Particle::particles[i] -> update();
        }
        Particle::particles[i] -> update();
    }
}