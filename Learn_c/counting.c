#include <stdio.h>
int arr[6];
int n,min,w;
int main()
{
    printf("ENTREZ LES VALEURS DE LIST : \n");
    for(int i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    printf("ENTREZ NMR DES OBJECTS : ");
    scanf("%d",&n);
    for(int i=0;i<=4;i++){
        for(int j=i+1;j<=5;j++){
            if(arr[j]<arr[i]){
                w = arr[i];
                arr[i] = arr[j];
                arr[j] = w;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}
