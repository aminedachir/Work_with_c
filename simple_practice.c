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
    char A[65];
    scanf("%[^\n]", A);
    for(int i=0;i<strlen(A)+4;i++){
        printf("*");
    }
    printf("\n");
    printf("* %s *",A);
    printf("\n");
    for(int i=0;i<strlen(A)+4;i++){
        printf("*");
    }


    return 0;
}
