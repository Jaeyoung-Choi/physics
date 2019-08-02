#include <cstdio>
#include "../include/physics.h"

int main(void)
{
	Particle p1 = Particle(Vector(0, 1), Vector(0.707106781, 0, 0.707106781), 1, 0), p2 = Particle(1/G);
	
	for (int i = 0; i < 100; i++)
	{
		Physics::analize(0.1);
		printf("P1: %.10Lf, %.10Lf, %.10Lf\n", p1.position.x, p1.position.y, p1.position.z);
		printf("P2: %.10Lf, %.10Lf, %.10Lf\n\n", p2.position.x, p2.position.y, p2.position.z);
	}

	return 0;
}
