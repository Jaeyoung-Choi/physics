class Particle
{
private:
public:
	Vector* position;
	Vector* speed;
	Vector* force;
	long double mass;
	long double eletric;
	
	Particle(Vector* position, Vector* speed, Vector* force, long double mass, long double eletric);
	Particle(Vector* position, Vector* speed, long double mass, long double eletric);
	Particle(Vector* position, long double mass, long double eletric);
	Particle(long double mass, long double eletric);
	Particle(long double mass);
	Particle(void);
	~Particle(void);
	long double Particle::getParticlesDistance(Particle* p1, Particle* p2);
	Vector* get_a(void);
};
