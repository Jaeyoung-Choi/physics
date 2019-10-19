#ifndef __PHYSICS_H__
#define __PHYSICS_H__

#include <thread>
#include "constants.h"
#include "particle.h"
#include "force.h"
#include "vector.h"

class Physics
{
private:
    void setForce(Vector* const * const interacts, const unsigned long long int interactNum);
    unsigned long long int hash(unsigned long long int x, unsigned long long int y);
public:
    static void analize(long double term);
};

#endif

