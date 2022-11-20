#include <stdio.h>
int arr[8] = {7,5,2,1,3,8,6,4};
int main()
{
    for(int i=0;i<8;i++){
        for(int j=0,j<(8/2);j++)
        {
            for(int i=0;i<(4/2);i++){
                if(arr[i+1]<arr[i]){
                    x = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = x;
                }
            }
            for(int h=(4/2);h<4;h++){
                if(arr[h+1]<arr[h]){
                    x = arr[h];
                    arr[h] = arr[h+1];
                    arr[h+1] = x;
                }
            }
            if()
        }
        for(int h=(8/2);h<8;h++)
        {

        }
    }
}
