#include <stdio.h>
int arr[4] = {6,0,4,1};
int z,min;
int main()
{
    for (int i=0;i<=2;i++){
        min = i;
        for(int j=i+1;j<=3;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        z = arr[i];
        arr[i] = arr[min];
        arr[min] = z;
        }
    }
    for (int h=0;h<4;h++){
        printf("%d\n",arr[h]);
    }
}
