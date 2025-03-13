#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    scanf("%d", &n);
    int s = n;
    if (n>0) {
        printf("%d",s);
        while (s!=1){
            if (s%2==0){
                s = s/2;
                printf(" %d",s);
            }
            else {
                s = s*3+1;
                printf(" %d",s);
            }
        }
    }

    return 0;
}