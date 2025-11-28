#include <stdio.h>
#include <stdlib.h>

typedef struct Nood {
    //int *num;
    int num;
    struct Nood *suivant;
} Nood;

int main() {
    // Déclaration de la tête de la liste
    Nood *tete = NULL;

    // Exemple d'ajout de chaînes à la liste
    Nood *n1 = (Nood*) malloc(sizeof(Nood));
    n1->num = 101;
    n1->suivant = NULL;
    tete = n1;

    Nood *n2 = (Nood*)malloc(sizeof(Nood));
    n2->num = 102;
    n2->suivant = NULL;
    n1->suivant = n2;

    Nood *n3 = (Nood*)malloc(sizeof(Nood));
    n3->num = 103;
    n3->suivant = NULL;
    n2->suivant = n3;


    // Affichage des chaînes de la liste
    Nood *actuel = tete;
    while (actuel != NULL) {
        printf("%d\n", actuel->num);
        actuel = actuel->suivant;
    }


}