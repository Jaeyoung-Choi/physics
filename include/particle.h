#ifndef __PARTICLE_H__
#define __PARTICLE_H__

#include "vector.h"
#include "constants.h"
#include <cmath>

class Particle
{
private:
public:
	Vector position;
	Vector speed;
	Vector force;
	long double mass;
	long double eletric;
	
	Particle(const Vector position, const Vector speed, const Vector force, const long double mass, const long double eletric);
	Particle(const Vector position, const Vector speed, const long double mass, const long double eletric);
	Particle(const Vector position, const long double mass, const long double eletric);
	Particle(const long double mass, const long double eletric);
	Particle(const long double mass);
	Particle(void);
	static long double getParticlesDistance(const Particle& p1, const Particle& p2);
	Vector getA(void);
	void update(void);
};

#endif