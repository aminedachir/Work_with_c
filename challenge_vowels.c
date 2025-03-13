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
    char s[101];
    int sum = 0;
    int count=0;
    scanf("%[^\n]", s);
    for (int i=0;i<strlen(s);i++){
        if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||s[i] == 'y' ){
            sum += (int)s[i];
            count++;
        }
    }
    printf("%d",sum*count);
    return 0;
}