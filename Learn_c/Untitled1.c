#include <stdio.h>
char c = 'a';
int main()
{
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("#");
        }
        printf("\n");
    }
    printf("%d",c);
}
