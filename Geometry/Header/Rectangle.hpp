#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle 
{
    public:
        Rectangle();
        ~Rectangle();  
        void setLongueur(float L);
        void setLargeur(float l);
        float getLongueur();
        float getLargeur();
        float aire();
        float perimetre();
    private:
        float longueur;
        float largeur;
};
#endif