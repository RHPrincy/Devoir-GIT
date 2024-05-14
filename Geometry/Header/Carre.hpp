#ifndef CARRE_H
#define CARRE_H
class Carre 
{
    public:
        Carre();
        ~Carre();
        void setCote(float c);
        float getCote();
        float aire();
        float perimetre();
    private:
        float cote;
};
#endif