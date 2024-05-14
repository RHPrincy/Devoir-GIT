#ifndef CYLINDRE_H
#define CYLINDREE_H
class Cylindre
{
    public:
        Cylindre();
        ~Cylindre();  
        void setHauteur(float H);
        void setRayon(float r);
        float getHauteur();
        float getRayon();
        float aire();
        float perimetre();
        float volume();
    private:
        float hauteur;
        float rayon;
};
#endif