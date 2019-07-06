#include "vector.h"
#include "particle.h"
#include "constants.h"
#include <cmath>

class Force
{
private:
	
public:
	static long double getGravitySize(const Particle* const p1, const Particle* const p2);
	static long double getEletricForceSize(const Particle* const p1, const Particle* const p2);
};
