#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * This is a problem from codign game platform
 * whis you must output the closest Number to zero
 **/

int main()
{
    int n;
    scanf("%d", &n);
    int T[n];
    int count=0;
    if(n != 0){
        for (int i = 0; i < n; i++) {
            scanf(" %d", &T[i]);
            if (T[i]<0){
                count++;
            }
        }
        int closest_n = 10000;
        int closest_p = 10000;
        int closest = 0;
        for (int i = 0; i < n; i++) {
            if (T[i] < 0){
                if(-T[i]< closest_n){
                    closest_n = -T[i];
                }
            }
            else if (T[i] > 0){
                if (T[i]< closest_p){
                    closest_p = T[i];
                }
            }
        }
        if (closest_p < closest_n){
            closest = closest_p;
        }
        else if (closest_p > closest_n)
        {
            closest = -closest_n;
        }
        else if (count == n){
            closest = -closest_n;
        }
        else {
            closest = closest_p;
        }

        printf("%d",closest);

        return 0;
    }
    else {
        printf("0");
    }
}