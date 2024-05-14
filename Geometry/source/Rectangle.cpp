#include "../Header/Rectangle.hpp"
Rectangle::Rectangle()
{

}

void Rectangle::setLongueur(float L){
    longueur = L;
}

void Rectangle::setLargeur(float l){
    largeur = l;
}

float Rectangle::getLongueur()
{
    return longueur;
}

float Rectangle::getLargeur()
{
    return largeur;
}

float Rectangle::aire()
{
    return (longueur*largeur);
}

float Rectangle::perimetre()
{
    return ((longueur+largeur)*2);
}

Rectangle::~Rectangle()
{

}
