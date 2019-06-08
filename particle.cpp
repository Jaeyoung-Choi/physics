#include "particle"
#include "vector"
#include <cmath>

Particle::Particle(const Vector* const position, const Vector* const speed, const Vector* const force, const long double mass, const long double eletric)
{
	this -> position = position;
	this -> speed = speed;
	this -> force = force;
	this -> mass = mass;
	this -> eletric = eletric;
}

Particle::Particle(const Vector* const position, const Vector* const speed, const long double mass, const long double eletric)
{
	this -> position = position;
	this -> speed = speed;
	this -> force = new Vector();
	this -> mass = mass;
	this -> eletric = eletric;
}

Particle::Particle(const Vector* const position, const long double mass, const long double eletric)
{
	this -> position = position;
	this -> speed = new Vector();
	this -> force = new Vector();
	this -> mass = mass;
	this -> eletric = eletric;
}

Particle::Particle(const long double mass, const long double eletric)
{
	this -> position = new Vector();
	this -> speed = new Vector();
	this -> force = new Vector();
	this -> mass = mass;
	this -> eletric = eletric;
}

Particle::Particle(const long double mass)
{
	this -> position = new Vector();
	this -> speed = new Vector();
	this -> force = new Vector();
	this -> mass = mass;
	this -> eletric = 0;
}

Particle::Particle(void)
{
	this -> position = new Vector();
	this -> speed = new Vector();
	this -> force = new Vector();
	this -> mass = 0;
	this -> eletric = 0;
}

Particle::~Particle(void)
{
	delete this -> position;
	delete this -> speed;
	delete this -> force;
}

long double Particle::getParticlesDistance(const Particle* const p1, const Particle* const p2)
{
	return sqrtl((p1.position -> x - p2.position -> x) *(p1.position -> x - p2.position -> x) +
	(p1.position -> y - p2.position -> y) *(p1.position -> y - p2.position -> y) +
	(p1.position -> z - p2.position -> z) *(p1.position -> z - p2.position -> z));
}

Vector Particle::get_a(void)
{
	Vector ret = new Vector(this.force.x / mass, this.force.y / mass, this.force.z / mass);
	return ret;
}
