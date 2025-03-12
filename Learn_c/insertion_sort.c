#include <stdio.h>
int arr[10] = {1,3,4,20,50,80,60,45,65,2};
int x,j;
int main ()
{
    for(int i=2;i<=10;i++){
        j=i;
         while(arr[j]>0 && (arr[j-1]>arr[j])){
             //use decalage :: 
            x = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = x;
            j-=1;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
}
