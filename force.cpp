#include "force"
#include "constants"

long double Force::getGravitySize(const Particle* const p1, const Particle* const p2)
{
	Vector* vecR = Vector.sub(p1 -> position, p2 -> position);
	long double r = vecR -> length();
	delete vecR;
	return (G * p1 -> mass * p2 -> mass) / (r * r);
}

long double Force::getEletricForceSize(const Particle* const p1, const Particle* const p2)
{
	Vector* vecR = Vector.sub(p1 -> position, p2 -> position);
	long double r = vecR -> length();
	delete vecR;
	return (G * p1 -> eletric * p2.eletric) / (r * r);
}
