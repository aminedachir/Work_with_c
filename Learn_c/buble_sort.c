#include <stdio.h>
int arr[6] = {5,2,1,3,6,4};
int z;
int main ()
{
    for (int i=0;i<6;i++){
        for (int j=0;j<5;j++){
            if(arr[j+1]<arr[j]){
                z = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = z;
            }
        }
    }
    for(int h=0;h<6;h++){
        printf("%d\n",arr[h]);
    }
}
