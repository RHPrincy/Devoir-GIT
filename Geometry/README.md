Ce programme définit des classes pour représenter différentes formes géométriques. Pour les utiliser, vous devez créer des instances (objets) de ces classes et appeler leurs méthodes pour obtenir les résultats souhaités avec les attributs prédéfinis.

Les formes géométriques implémentées dans ce programme sont :

- Carré
- Rectangle
- Cercle
- Cylindre
- Sphère

### Les fichiers d'en-tête
Dans la fonction main, on inclut les fichiers d'en-tête :
- `Carre.hpp`
- `Rectangle.hpp`
- `Cercle.hpp`
- `Cylindre.hpp`
- `Sphère.hpp`

Chaque classe possède des méthodes telles que :

- `setter()` : pour définir les attributs de l'objet
- `getter()` : pour obtenir les valeurs des attributs de l'objet
- `aire()` : pour calculer l'aire de la forme géométrique
- `perimetre()` : pour calculer le périmètre de la forme géométrique
- `volume()` : pour calculer le volume de la forme géométrique (pour les formes 3D)

### Création d'instances des objets

```
Rectangle R = Rectangle();  // Création d'un objet Rectangle nommé R
Cercle Cl = Cercle();       // Création d'un objet Cercle nommé Cl
Sphere S = Sphere();        // Création d'un objet Sphere nommé S
Carre Cr = Carre();         // Création d'un objet Carre nommé Cr
Cylindre D = Cylindre();    // Création d'un objet Cylindre nommé D
```

## Utilisation des méthodes des classes

Pour utiliser les méthodes propres à chaque classe, on appelle la méthode directement sur l'objet.
Les methodes sont déja definient dans les fichier cpp.  
Par exemple, pour calculer l'aire du rectangle R, on utilise `R.aire()`, pour calculer la volume du Cylindre D, on utilise `D.volume()`.


## Compilation des fichiers en bibliothèques

Pour pouvoir créer un bibiotheque ou librairie, on compile les fichiers cpp en fichier objet

```
g++ -c Cercle.cpp -o Cercle.o
g++ -c Sphere.cpp -o Sphere.o
g++ -c Rectangle.cpp -o Rectangle.o
g++ -c Carre.cpp -o Carre.o
g++ -c Cylindre.cpp -o Cylindre.o
```

### Bibliothèque statique

Pour créer une librairie statique à partir des fichiers objet, il faut utiliser la commande `ar` qui archive ces fichiers dans un seul fichier. L’option `-r` permet d’insérer les nouveaux fichiers dans l’archive. L’option `-v` (verbose) permet d’afficher à l’écran le nom des fichiers insérés.

> ar -rv libGeometry.a Cercle.o Sphere.o Rectangle.o Carre.o Cylindre.o

La commande ci-dessus crée une bibliothèque statique nommée libGeometry.a qui contient les fichiers objets compilés.

### Bibliothèque dynamique

Pour créer une bibliothèque dynamique, on utilise la commande g++ avec l'option `-shared`.

> g++ -o libGeometry.so -shared Cercle.o Carre.o Rectangle.o Sphere.o Cylindre.o

Cette commande crée une bibliothèque dynamique nommée libGeometry.so qui contient les fichiers objets compilés.


## Utilisation des bibliothèques

### Utilisation d'une bibliothèque statique

Soit la bibliothèque statique libGeometry.a située dans un répertoire dont le chemin absolu est `/chemin/libStatique`. Pour compiler un fichier source main.cpp qui utilise les fonctions de cette bibliothèque, on utilise la commande suivante :

> g++ main.cpp -L/chemin/libStatique -lGeometry -o main

L'option -Lchemin indique au compilateur où chercher la bibliothèque libGeometry.a. L'option -lGeometry indique au compilateur de lier le programme avec la bibliothèque libGeometry.a.

### Utilisation d'une bibliothèque dynamique

L'utilisation d'une bibliothèque dynamique est similaire à l'utilisation d'une bibliothèque statique, à la différence que l'option -l ne précise pas l'extension du fichier.

> g++ main.cpp -L/chemin/libDynamique -lGeometry -o main