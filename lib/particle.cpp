#include "../include/particle.h"

Particle::Particle(void)
{
	this -> position = Vector();
	this -> velocity = Vector();
	this -> force = Vector();
	this -> mass = 0;
	this -> eletric = 0;
	Particle::init(this);
}

Particle::Particle(const long double mass)
{
	this -> position = Vector();
	this -> velocity = Vector();
	this -> force = Vector();
	this -> mass = mass;
	this -> eletric = 0;
	Particle::init(this);
}

Particle::Particle(const Vector position, const long double mass)
{
	this -> position = position;
	this -> velocity = Vector();
	this -> force = Vector();
	this -> mass = mass;
	this -> eletric = 0;
	Particle::init(this);
}

Particle::Particle(const Vector position, const Vector velocity, const long double mass)
{
	this -> position = position;
	this -> velocity = velocity;
	this -> force = Vector();
	this -> mass = mass;
	this -> eletric = 0;
	Particle::init(this);
}

Particle::Particle(const long double mass, const long double eletric)
{
	this -> position = Vector();
	this -> velocity = Vector();
	this -> force = Vector();
	this -> mass = mass;
	this -> eletric = eletric;
	Particle::init(this);
}

Particle::Particle(const Vector position, const long double mass, const long double eletric)
{
	this -> position = position;
	this -> velocity = Vector();
	this -> force = Vector();
	this -> mass = mass;
	this -> eletric = eletric;
	Particle::init(this);
}

Particle::Particle(const Vector position, const Vector velocity, const long double mass, const long double eletric)
{
	this -> position = position;
	this -> velocity = velocity;
	this -> force = Vector();
	this -> mass = mass;
	this -> eletric = eletric;
	Particle::init(this);
}

unsigned long long int Particle::n = 2;
unsigned long long int Particle::cnt = 0;
Particle** Particle::particles = new Particle*[Particle::n];
void Particle::init(Particle* p)
{
	if (Particle::n == Particle::cnt)
	{
		Particle** tmp = Particle::particles;
		Particle::particles = new Particle*[Particle::n * 2];
		memcpy(Particle::particles, tmp, Particle::n * sizeof(Particle*));
		Particle::n *= 2;
		delete tmp;
	}
	Particle::particles[Particle::cnt++] = p;
}

long double Particle::getDistance(const Particle& p1, const Particle& p2)
{
	return (p1.position - p2.position).getSize();
}
long double Particle::getDistance(const Particle& p1, const Particle&& p2)
{
	return (p1.position - p2.position).getSize();
}
long double Particle::getDistance(const Particle&& p1, const Particle& p2)
{
	return (p1.position - p2.position).getSize();
}
long double Particle::getDistance(const Particle&& p1, const Particle&& p2)
{
	return (p1.position - p2.position).getSize();
}

Vector Particle::getA(void)
{
	return this -> force * (1 / this -> mass);
}

void Particle::update(void)
{
	this -> position = this -> position + this -> velocity * DT + 0.5 * this -> getA() * powl(DT, 2);
	this -> velocity = this -> velocity + this -> getA() * DT;
}