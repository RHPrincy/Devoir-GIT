#include "../Header/Cercle.hpp"
Cercle::Cercle()
{

}

void Cercle::setRayon(float r)
{
    rayon = r;
}

float Cercle::getRayon()
{
    return rayon;
}

float Cercle::aire()
{
    return (rayon*rayon*3.14);
}

float Cercle::circonference()
{
    return (rayon*2*3.14);
}

Cercle::~Cercle()
{

}
