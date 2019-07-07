#include <cstdio>
#include "../include/physics.h"

#define DT 0.00000000001

int main(void)
{
	Particle p1 = Particle(Vector(1), Vector(0, 1), Vector(), 1, 0);
	Particle p2 = Particle(Vector(), Vector(), Vector(), 1/G, 0);

	long double t = 0;
	Vector v = Vector();
	do
	{
		long double forceSize = Force::getGravitySize(p1, p2);
		
		Vector subVec = Vector::sub(p2.position, p1.position).getUnitVector();
		p1.force = Vector::mul(subVec, forceSize);
		subVec = Vector::sub(p1.position, p2.position).getUnitVector();
		p2.force = Vector::mul(subVec, forceSize);

		p1.update();
		p2.update();

		printf("p1 : %Lf %Lf %Lf\n", p1.position.x, p1.position.y, p1.position.z);
		printf("p2 : %Lf %Lf %Lf\n", p2.position.x, p2.position.y, p2.position.z);
		printf("\n");
	} while(t < 100000000000);

	return 0;
}
