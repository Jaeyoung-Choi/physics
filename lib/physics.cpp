#include "../include/physics.h"

void Physics::analize(long double term)
{
    if (Particle::cnt <= 1)
    {
        return;
    }

    unsigned long long int t = 0, i = 0, j = 0;
    unsigned long long int unitTerm = term * UNIT_TIME;
    const unsigned int coreNum = std::thread::hardware_concurrency();
    long double forceSize = 0;
    Vector unitV = Vector();

    const unsigned long long int interactNum = Particle::cnt * (Particle::cnt - 1) / 2;
    Vector* interacts[interactNum] = {0, };
    
    for (t = 0; t < unitTerm; t++)
    {
        for (i = 0; i < interactNum; i++)
        {
            interacts[i] = NULL;
        }

        for (i = 0; i < Particle::cnt; i++)
        {
            interacts[i] = NULL;
            Particle::particles[i] -> force = Particle::particles[i] -> potentialForce;
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

void Physics::setForce(Vector* const * const interacts, const unsigned long long int s, const unsigned long long int e)
{
    
} //todo : 헤쉬테이블 만들기(x, y), particle을 core수에따라 나누기(순번이 낮은 스레드부터 남는 particle추가), interact 이미 있으면 * -1, 없으면 구하고 넣기

unsigned long long int Physics::hash(unsigned long long int x, unsigned long long int y)
{
    if (x > y)
    {
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
    }
    else if (x == y)
    {
        return 0;
    }
    (y - 1) * (y - 2) / 2 + (x - 1); //(1 + (y - 2)) * (y - 2) / 2 + (x - 1);
}