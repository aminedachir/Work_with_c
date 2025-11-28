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
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        int digit;
        scanf("%d", &digit);
        arr[i] = digit;
    }
    int x;
    for (int i = 0; i < N-1; i++) {
        for (int k = 0; k < N - 1; k++) {
            if (arr[k] > arr[k + 1]) {
                x = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = x;
            }
        }
    }
    
    int zeros = 0;
    while (zeros < N && arr[zeros] == 0) {
        zeros++;
    }
    if (zeros == N){
        printf("0");
    }
    else{
        for (int i = N-1; i >= 0; i--) {
            printf("%d", arr[i]);
        }
    }
    return 0;
}