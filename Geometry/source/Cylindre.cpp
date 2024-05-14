#include "../Header/Cylindre.hpp"
Cylindre::Cylindre()
{

}

void Cylindre::setHauteur(float H){
    hauteur = H;
}

void Cylindre::setRayon(float r){
    rayon = r;
}

float Cylindre::getHauteur()
{
    return hauteur;
}

float Cylindre::getRayon()
{
    return rayon;
}

float Cylindre::aire()
{
    return (2*3.14*rayon*hauteur);
}

float Cylindre::perimetre()
{
    return (rayon*2*3.14);
}

float Cylindre::volume()
{
    return (rayon*rayon*3.14*hauteur);
}

Cylindre::~Cylindre()
{

}
