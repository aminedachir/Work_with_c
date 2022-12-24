#include <stdio.h>

int main()
{
    int n = 50;
    int *p = &n;
    printf("%x\n",p);
    char str[4] = "HI!";
    printf("%x",&str);
}
