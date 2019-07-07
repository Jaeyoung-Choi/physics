#include <cstdio>
#include "../include/physics.h"


int main(void)
{
	Particle p1 = Particle(Vector(1), Vector(0, 1), Vector(), 1, 0);
	Particle p2 = Particle(Vector(), Vector(), Vector(), 1/G, 0);

	long double t = 0;
	Vector v = Vector();
	do
	{
		long double forceSize = Force::getGravitySize(p1, p2);
		
		p1.force = (p2.position - p1.position).getUnitVector() * forceSize;
		p2.force = (p1.position - p2.position).getUnitVector() * forceSize;

		p1.update();
		p2.update();

		printf("p1 : %Lf %Lf %Lf\n", p1.position.x, p1.position.y, p1.position.z);
		printf("p2 : %Lf %Lf %Lf\n", p2.position.x, p2.position.y, p2.position.z);
		printf("\n");
	} while(t < 10000);

	return 0;
}
