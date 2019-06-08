#include <cstdio>
#include "physics"

#define DT 0.00000000001

int main(void)
{
	Particle* p1 = new Particle(new Vector(1), new Vector(0, 1), new Vector(), G, 0);
	Particle* p2 = new Particle(new Vector(), new Vector(), new Vector(), 0, 0);

	long double t = 0;
	Vector* v = new Vector()
	do
	{
		long double forceSize = Particle.getForceSize(p1, p2);
		Vector* subVec = Vector.sub(p2, p1);
		Vector* unitVec = subVec -> getUnitVector();
		Vector* mulVec = Vector.mul(unitVec, forceSize);
		delete p1 -> force;
		delete subVec;
		delete unitVec;
		p1 -> force = mulVec;

		Vector* subVec = Vector.sub(p1, p2);
		Vector* unitVec = subVec -> getUnitVector();
		Vector* mulVec = Vector.mul(unitVec, forceSize);
		delete p2 -> force;
		delete subVec;
		delete unitVec;
		p2 -> force = mulVec;

		
	} while(t < 100000000000)

	return 0;
}
