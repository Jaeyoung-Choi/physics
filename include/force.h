#ifndef __FORCE_H__
#define __FORCE_H__

#include "vector.h"
#include "particle.h"
#include "constants.h"
#include <cmath>

class Force
{
private:
	
public:
	static long double getGravitySize(const Particle& p1, const Particle& p2);
	static long double getEletricForceSize(const Particle& p1, const Particle& p2);
};

#endif