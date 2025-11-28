   #include <stdio.h>
   #include <stdlib.h>

   int main() {
       int *ptr = (int *)malloc(sizeof(int)); // Allocation d'un entier
       printf("Valeur: %p\n", ptr);
       if (ptr != NULL) {
           *ptr = 10;
           printf("Valeur: %p\n", ptr);
           free(ptr); // Libération de la mémoire
           printf("Valeur: %p\n", ptr);
           ptr = NULL; // Optionnel, mais recommandé pour éviter les erreurs futures
           printf("Valeur: %p\n", ptr);
       } else {
           printf("Erreur d'allocation.\n");
       }
       return 0;
   }