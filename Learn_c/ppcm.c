#include <stdio.h>
int A,B;
int main()
{
    scanf("%d",&A);
    scanf("%d",&B);
    while(A>=B) {
        A=A+A;
        if(A%B==0){
            printf("Le PPCM est :",A);
        }
    }
}
