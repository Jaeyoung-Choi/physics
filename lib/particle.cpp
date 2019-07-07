#include "../include/particle.h"

Particle::Particle(const Vector position, const Vector velocity, const Vector force, const long double mass, const long double eletric)
{
	this -> position = position;
	this -> velocity = velocity;
	this -> force = force;
	this -> mass = mass;
	this -> eletric = eletric;
}

Particle::Particle(const Vector position, const Vector velocity, const long double mass, const long double eletric)
{
	this -> position = position;
	this -> velocity = velocity;
	this -> force = Vector();
	this -> mass = mass;
	this -> eletric = eletric;
}

Particle::Particle(const Vector position, const long double mass, const long double eletric)
{
	this -> position = position;
	this -> velocity = Vector();
	this -> force = Vector();
	this -> mass = mass;
	this -> eletric = eletric;
}

Particle::Particle(const long double mass, const long double eletric)
{
	this -> position = Vector();
	this -> velocity = Vector();
	this -> force = Vector();
	this -> mass = mass;
	this -> eletric = eletric;
}

Particle::Particle(const long double mass)
{
	this -> position = Vector();
	this -> velocity = Vector();
	this -> force = Vector();
	this -> mass = mass;
	this -> eletric = 0;
}

Particle::Particle(void)
{
	this -> position = Vector();
	this -> velocity = Vector();
	this -> force = Vector();
	this -> mass = 0;
	this -> eletric = 0;
}

long double Particle::getParticlesDistance(const Particle& p1, const Particle& p2)
{
	return (p1.position - p2.position).getSize();
}

Vector Particle::getA(void)
{
	Vector ret = Vector(this -> force.x / mass, this -> force.y / mass, this -> force.z / mass);
	return ret;
}

void Particle::update(void)
{
	this -> position = this -> position + this -> velocity * DT + 0.5 * this -> getA() * powl(DT, 2);
	this -> velocity = this -> velocity + this -> getA() * DT;
}