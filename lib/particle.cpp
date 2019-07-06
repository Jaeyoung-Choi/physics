#include "particle.h"

Particle::Particle(const Vector position, const Vector speed, const Vector force, const long double mass, const long double eletric)
{
	this -> position = position;
	this -> speed = speed;
	this -> force = force;
	this -> mass = mass;
	this -> eletric = eletric;
}

Particle::Particle(const Vector position, const Vector speed, const long double mass, const long double eletric)
{
	this -> position = position;
	this -> speed = speed;
	this -> force = Vector();
	this -> mass = mass;
	this -> eletric = eletric;
}

Particle::Particle(const Vector position, const long double mass, const long double eletric)
{
	this -> position = position;
	this -> speed = Vector();
	this -> force = Vector();
	this -> mass = mass;
	this -> eletric = eletric;
}

Particle::Particle(const long double mass, const long double eletric)
{
	this -> position = Vector();
	this -> speed = Vector();
	this -> force = Vector();
	this -> mass = mass;
	this -> eletric = eletric;
}

Particle::Particle(const long double mass)
{
	this -> position = Vector();
	this -> speed = Vector();
	this -> force = Vector();
	this -> mass = mass;
	this -> eletric = 0;
}

Particle::Particle(void)
{
	this -> position = Vector();
	this -> speed = Vector();
	this -> force = Vector();
	this -> mass = 0;
	this -> eletric = 0;
}

long double Particle::getParticlesDistance(const Particle& p1, const Particle& p2)
{
	return sqrtl(powl(p1.position.x - p2.position.x, 2) +
	powl(p1.position.y - p2.position.y, 2) +
	powl(p1.position.z - p2.position.z, 2));
}

Vector Particle::getA(void)
{
	Vector ret = Vector(this -> force.x / mass, this -> force.y / mass, this -> force.z / mass);
	return ret;
}

void Particle::update(void)
{
	this -> position = Vector::sum(this -> position, Vector::sum(Vector::mul(this -> speed, DT), Vector::mul(this -> getA(), 0.5 * powl(DT, 2))));
	this -> speed = Vector::sum(this -> speed, Vector::mul(this -> getA(), DT));
}