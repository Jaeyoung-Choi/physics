class Particle
{
private:
public:
	Vector* position;
	Vector* speed;
	Vector* force;
	long double mass;
	long double eletric;
	
	Particle(const Vector* const position, const Vector* const speed, const Vector* const force, const long double mass, const long double eletric);
	Particle(const Vector* const position, const Vector* const speed, const long double mass, const long double eletric);
	Particle(const Vector* const position, const long double mass, const long double eletric);
	Particle(const long double mass, const long double eletric);
	Particle(const long double mass);
	Particle(void);
	~Particle(void);
	static long double Particle::getParticlesDistance(const Particle* const p1, const Particle* const p2);
	Vector get_a(void);
};
