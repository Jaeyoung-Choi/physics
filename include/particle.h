#ifndef __PARTICLE_H__
#define __PARTICLE_H__

#include "vector.h"
#include "constants.h"
#include <cmath>
#include <cstring>
#include <vector>

class Particle
{
private:
public:
	Vector position;
	Vector velocity;
	Vector force;

	static std::vector<Particle*> particles;

	long double mass;
	long double eletric;
	
	Particle(const Vector position, const Vector velocity, const Vector force, const long double mass, const long double eletric);
	Particle(const Vector position, const Vector velocity, const long double mass, const long double eletric);
	Particle(const Vector position, const long double mass, const long double eletric);
	Particle(const long double mass, const long double eletric);
	Particle(const long double mass);
	Particle(void);
	static void init(Particle* p);
	static long double getDistance(const Particle& p1, const Particle& p2);
	static long double getDistance(const Particle& p1, const Particle&& p2);
	static long double getDistance(const Particle&& p1, const Particle& p2);
	static long double getDistance(const Particle&& p1, const Particle&& p2);
	Vector getA(void);
	void update(void);
};

#endif