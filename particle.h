class Particle
{
private:
	Vector* position;
	Vector* speed;
	Vector* force;
	double mass;
	double eletric;
public:
	Particle(Vector* position, Vector* speed, Vector* force, double mass, double eletric);
	Particle(Vector* position, Vector* speed, double mass, double eletric);
	Particle(Vector* position, double mass, double eletric);
	Particle(double mass, double eletric);
	Particle(double mass);
	Particle(void);
	~Particle(void);
	double Particle::get_particles_distance(Particle* p1, Particle* p2);
	Vector* Particle::get_a(void);
};