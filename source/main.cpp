#include <cstdio>
#include "../include/physics.h"


int main(void)
{
	Particle p1 = Particle(Vector(0, 1), Vector(0.707106781, 0, 0.707106781), 1, 0), p2 = Particle(1/G);
	//Particle p1 = Particle(Vector(0, 1), Vector(1), 1, 0), p2 = Particle(1/G);
	
	for (int i = 0; i < 100; i++)
	{
		Physics::analize(0.1);
		printf("p1 : %.60Lf %.60Lf %.60Lf\n", p1.position.x, p1.position.y, p1.position.z);
		printf("p2 : %.60Lf %.60Lf %.60Lf\n", p2.position.x, p2.position.y, p2.position.z);
		printf("\n");
	}

	return 0;
}
