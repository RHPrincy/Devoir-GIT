#ifndef SPHERE_H
#define SPHERE_H
class Sphere {
    public:
        Sphere();
        ~Sphere();
        void setRayon(float r);
        float getRayon();
        float aire();
        float circonference();
        float volume();
    private:
        float rayon;
};
#endif