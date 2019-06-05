#include "particle"
#include "vector"
#include <math.h>
#include <stdlib.h>

typedef struct Particle
{
    vector* position;
    vector* speed;
    vector* force;
    double mass;
    double eletric;
} particle;

double particle_get_particles_distance (particle* p1, particle* p2)
{
    return sqrt((p1 -> position.x - p2 -> position.x) * (p1 -> position.x - p2 -> position.x) +
    (p1 -> position.y - p2 -> position.y) * (p1 -> position.y - p2 -> position.y) +
    (p1 -> position.z - p2 -> position.z) * (p1 -> position.z - p2 -> position.z));
}

vector* particle_get_a (particle* p)
{
    vector* ret = (vector*)malloc(sizeof(vector));
    
    ret -> x = p -> force.x / mass;
    ret -> y = p -> force.y / mass;
    ret -> z = p -> force.z / mass;

    return ret;
}

particle* particle_new_particle (vector* position, vector* speed, vector* force, double mass, double eletric)
{
    particle* ret = (particle*)malloc(sizeof(particle));

    ret -> position = position;
    ret -> speed = speed;
    ret -> force = force;
    ret -> mass = mass;
    ret -> eletric = eletric;

    return ret;
}

int particle_free (particle* p)
{
    int ret = free(p -> position);
    ret += free(p -> speed);
    ret += free(p -> force);
    ret += free(p);

    return ret;
}