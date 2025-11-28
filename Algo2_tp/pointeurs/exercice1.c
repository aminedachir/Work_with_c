#include <stdio.h>

void modif(int *px) {
        *px = *px + 1;
    }

int main() {
    int x;

    x=1;
    printf("x avant lappel de function : %d\n", x);
    modif(&x);
    printf("x apres lappel de function : %d\n", x);
}