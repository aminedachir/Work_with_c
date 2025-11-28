#include <stdio.h>

int x = 10;
int *p = &x;

int main() {
    printf("the value of x : %d\n", x);
    printf("the address of x : %p\n",&x);
    printf("the value in p is : %d\n",*p);
    printf("the address of p is : %p\n",p);
}