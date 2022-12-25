#include <stdio.h>
int arr[4] = {5,1,3,4};
int z;
int main()
{
    for (int i=0;i<=2;i++){
        for(int j=i+1;j<=3;j++){
            if(arr[j]<arr[i]){
                z = arr[i];
                arr[i] = arr[j];
                arr[j] = z;
            }
        }
    }
    for (int h=0;h<4;h++){
        printf("%d\n",arr[h]);
    }
}
