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
    char sum[257]; 
    scanf("%s", sum);  

    char array[strlen(sum) / 2 + 1];
    int j = 0;
    for (int i = 0; i < strlen(sum); i += 2) {
        array[j] = sum[i];
        j++;
    }
    int n = j; 
    char temp;
    for (int i = 0; i < n - 1; i++) {
        for (int k = 0; k < n - 1 - i; k++) {
            if (array[k] > array[k + 1]) {
                temp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            printf("%c+", array[i]);
        } else {
            printf("%c", array[i]); 
        }
    }
    printf("\n");
    return 0;
}
