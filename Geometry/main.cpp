#include "Header/Rectangle.hpp"
#include "Header/Cercle.hpp"
#include "Header/Carre.hpp"
#include "Header/Sphere.hpp"
#include "Header/Cylindre.hpp"
#include <iostream>
using namespace std;

int main()
{
    Rectangle R = Rectangle();
    Cercle Cl = Cercle();
    Sphere S = Sphere();
    Carre Cr = Carre();
    Cylindre D = Cylindre();
    cout << "-------------------------------------------------" << endl;
    Cl.setRayon(2);
    cout << "Cercle de rayon : " << Cl.getRayon() << endl;
    cout << "Aire = " << Cl.aire() << endl;
    cout << "Circonference = " << Cl.circonference() << endl;
    cout << "-------------------------------------------------" << endl;
    R.setLongueur(3);
    R.setLargeur(2);
    cout << "Rectangle de longueur : " << R.getLongueur() << ", de largeur : "<< R.getLargeur() << endl;
    cout << "Aire = " << R.aire() << endl;
    cout << "Perimeretre = " << R.perimetre() << endl;
    cout << "-------------------------------------------------" << endl;
    Cr.setCote(2);
    cout << "Carre de cote : "<< Cr.getCote() << endl;
    cout << "Aire = " << Cr.aire() << endl;
    cout << "Perimeretre = " << Cr.perimetre() << endl;
    cout << "-------------------------------------------------" << endl;
    S.setRayon(2);
    cout << "Sphere de rayon: " << S.getRayon() << endl;
    cout << "Aire = " << S.aire() << endl;
    cout << "Circonference = " << S.circonference() << endl;
    cout << "Volume = " << S.volume() << endl;
    cout << "-------------------------------------------------" << endl;
    D.setHauteur(4);
    D.setRayon(2);
    cout << "Cylindre de hauteur : " << D.getHauteur() << " , de rayon : "<< D.getRayon() << endl;
    cout << "Aire = " << D.aire() << endl;
    cout << "Perimeretre = " << D.perimetre() << endl;
    cout << "Volume = " << D.volume() << endl;
    cout << "-------------------------------------------------" << endl;
    return (0);
}
