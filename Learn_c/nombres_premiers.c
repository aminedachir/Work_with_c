#include <stdio.h>
#include <math.h>
int number,f,s,n;
int number_premier() {
    scanf("%d",&number);
    f=1;
    for(int i=2;i<number;i++){
        if(number%i==0){f=0;}
        else {f=1;}
    }
    if (f==1){printf("premiere");}
}
int main()
{
    number=1;
    n=100;
    s=0;
    while(number<n){
        f=1;
        number++;
        for(int i=2;i<=sqrt(number);i++){
            if(number%i==0){
                f=0;
                break;
            }
        }
        if (f==1){
            s++;
            printf("%d\n",number);
        }
    }
    printf("s=%d\n",s);
    number_premier();
}
