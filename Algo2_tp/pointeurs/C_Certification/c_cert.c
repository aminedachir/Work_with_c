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
    char X[101];
    scanf("%[^\n]", X);
    char new_X[101];
    int c=0;
    int j=j+=strlen(X)-1;
    for (int i=0;i<strlen(X);i++){
        if (i%2 == 0){
            new_X[i] = X[c];
            c++;
        }
        else {
            new_X[i] = X[j];
            j--;
        }
    }

    new_X[strlen(X)] = '\0'; 
    printf("%s\n", new_X);

    return 0;
}