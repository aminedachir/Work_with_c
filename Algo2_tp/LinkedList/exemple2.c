#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ChainNood {
    //char chain[100]; //  |||||  we can use it  |||||;
    char *chain;
    struct ChainNood *next;
} chn;

int main () {
    chn *tete = NULL;
    
    //add mots in the list
    chn *mot1 = (chn*)malloc(sizeof(chn));
    //strcpy(mot1->chaine, "hello"); //  |||||  but must modifate to this  |||||;
    mot1->chain = strdup("hello");
    mot1->next = NULL;
    tete = mot1;

    chn *mot2 = (chn*)malloc(sizeof(chn));
    //strcpy(mot2->chaine, "hello"); //  |||||  but must modifate to this  |||||;
    mot2->chain = strdup("helllllllllo");
    mot2->next = NULL;
    mot1->next = mot2;

    //display mots
    chn *actual = tete;
    while(actual != NULL) {
	printf("%s\n",actual->chain);
	actual = actual->next;
    }
}
