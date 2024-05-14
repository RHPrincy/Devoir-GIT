#include "../Header/Carre.hpp"
Carre::Carre()
{

}

void Carre::setCote(float c)
{
    cote = c;
}

float Carre::getCote()
{
    return cote;
}

float Carre::aire()
{
    return (cote*cote);
}

float Carre::perimetre()
{
    return (cote*4);
}

Carre::~Carre()
{

}
