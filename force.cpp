#include "force"
#include "constants"

static long double Force::getGravitySize(Particle* p1, Particle* p2)
{
	long double r = Vector.sub(p1 -> position, p2 -> position).length();
	return (G * p1 -> mass * p2 -> mass) / (r * r);
}

static long double Force::getEletricForceSize(Particle* p1, Particle* p2)
{
	long double r = Vector.sub(p1 -> position, p2 -> position).length();
	return (G * p1 -> eletric * p2.eletric) / (r * r);
}
