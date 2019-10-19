#include <cstdio>
#include "../include/physics.h"

int main(void)
{
	Particle p1 = Particle(Vector(0, 1), Vector(1, 0, 0), 100000), p2 = Particle(Vector(0, 0, 1), Vector(0, 1, 0), 100000), p3 = Particle(Vector(1), Vector(0, 0, 1), 100000);
	printf("P1: %.10Lf, %.10Lf, %.10Lf\n", p1.position.x, p1.position.y, p1.position.z);
	printf("P2: %.10Lf, %.10Lf, %.10Lf\n", p2.position.x, p2.position.y, p2.position.z);
	printf("P3: %.10Lf, %.10Lf, %.10Lf\n\n", p3.position.x, p3.position.y, p3.position.z);

	for (int i = 0; i < 100; i++)
	{
		Physics::analize(0.1);
		printf("P1: %.10Lf, %.10Lf, %.10Lf\n", p1.position.x, p1.position.y, p1.position.z);
		printf("P2: %.10Lf, %.10Lf, %.10Lf\n", p2.position.x, p2.position.y, p2.position.z);
    	printf("P3: %.10Lf, %.10Lf, %.10Lf\n\n", p3.position.x, p3.position.y, p3.position.z);
	}

	return 0;
}
