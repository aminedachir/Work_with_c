#include <stdio.h>
int arr[4] = {6,0,4,1};
int z;
int main()
{
    for (int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
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
