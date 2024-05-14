Ce programme permet de gérer le système d'activation par un clé. (Serial Activation)

Chaque utilisateur a le droit à 30 essai gratuit.

### Les fichiers d'en-tête
Dans la fonction main, on inclut le fichier d'en-tête :
- `Activation.hpp`

### Les fichiers

- `cledActivation.txt` : qui contient la clé d'Activation
- `try.txt` : nombre d'essai gratuit avant l'expiration et qui sera toujours `active` après si la clé d'activation est entrée correctement.

## Compilation des fichiers en bibliothèques

Pour pouvoir créer un bibiotheque ou librairie, on compile les fichiers cpp en fichier objet

```
g++ -c Activation.cpp -o Activation.o
```

### Bibliothèque statique

Pour créer une librairie statique à partir des fichiers objet, il faut utiliser la commande `ar` qui archive ces fichiers dans un seul fichier. L’option `-r` permet d’insérer les nouveaux fichiers dans l’archive. L’option `-v` (verbose) permet d’afficher à l’écran le nom des fichiers insérés.

> ar -rv libverifActivation.a Activation.o

La commande ci-dessus crée une bibliothèque statique nommée `libverifActivation.a` qui contient les fichiers objets compilés.

### Bibliothèque dynamique

Pour créer une bibliothèque dynamique, on utilise la commande g++ avec l'option `-shared`.

> g++ -o libverifActivation.so -shared Activation.o

Cette commande crée une bibliothèque dynamique nommée `libverifActivation.so` qui contient les fichiers objets compilés.


## Utilisation des bibliothèques

### Utilisation d'une bibliothèque statique

Soit la bibliothèque statique libGeometry.a située dans un répertoire dont le chemin absolu est `/chemin/libStatique`. Pour compiler un fichier source main.cpp qui utilise les fonctions de cette bibliothèque, on utilise la commande suivante :

> g++ main.cpp -L/chemin/libStatique -lverifActivation -o main

L'option -L/chemin/libStatique indique au compilateur où chercher la bibliothèque `libverifActivation.a`. L'option `-lverifActivation` indique au compilateur de lier le programme avec la bibliothèque `libverifActivation.a`.

### Utilisation d'une bibliothèque dynamique

L'utilisation d'une bibliothèque dynamique est similaire à l'utilisation d'une bibliothèque statique, à la différence que l'option -l ne précise pas l'extension du fichier.

> g++ main.cpp -L/chemin/libDynamique -lverifActivation -o main