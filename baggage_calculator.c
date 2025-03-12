#include <stdio.h>

int baggage(){
    int x,cont;
    int count=0;
    scanf("%d",&x);
    if (x<=23){
        return 0;
}
    else{
        for(int i=23;i<x;i++){
            count++;
        }
        cont =  count*12;
        return cont;
    }
}


int main(){
    int result = baggage();
    printf("%d",result);
}
