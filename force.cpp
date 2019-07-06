#include "force.h"

long double Force::getGravitySize(const Particle* const p1, const Particle* const p2)
{
	return (G * p1 -> mass * p2 -> mass) / powl(Particle::getParticlesDistance(p1, p2), 2);
}

long double Force::getEletricForceSize(const Particle* const p1, const Particle* const p2)
{
	return (G * p1 -> eletric * p2 -> eletric) / powl(Particle::getParticlesDistance(p1, p2), 2);
}
