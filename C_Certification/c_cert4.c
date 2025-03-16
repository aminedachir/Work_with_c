#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int N;
    scanf("%d", &N);
    int counts[10] = {0}; 
    
    for (int i = 0; i < N; i++) {
        int sample_value;
        scanf("%d ", &sample_value);
        if (sample_value >= 1 && sample_value <= 9) {
            counts[sample_value]++;
        }
    }
    
    for (int i = 1; i <= 9; i++) {
        printf("%d:", i);
        for (int j = 0; j < counts[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}