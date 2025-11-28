#include <stdio.h>

int main() {
    int* pc, c; // pc pointer and c is int
    c = 5; // assign 5 to c
    pc = &c; // assign address of c in pc
    printf("%d\n",c); // value of c
    printf("%p\n",&c); // address of c
    printf("%d\n",*pc); // value of pc
    printf("%p\n",pc); //address of pc
}