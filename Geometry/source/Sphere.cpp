#include "../Header/Sphere.hpp"
Sphere::Sphere()
{

}
void Sphere::setRayon(float r)
{
    rayon = r;
}

float Sphere::getRayon()
{
    return rayon;
}

float Sphere::aire()
{
    return (4*3.14*rayon*rayon);
}

float Sphere::circonference()
{
    return (rayon*2*3.14);
}

float Sphere::volume()
{
    return ((4/3)*3.14*rayon*rayon*rayon);
}

Sphere::~Sphere()
{

}
