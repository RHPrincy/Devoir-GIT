#ifndef CERCLE_H
#define CERCLE_H
class Cercle 
{
    public:
        Cercle();
        ~Cercle();
        void setRayon(float r);
        float getRayon();
        float aire();
        float circonference ();
    private:
        float rayon;
};
#endif