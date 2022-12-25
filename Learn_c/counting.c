#include <stdio.h>
int n,w,np;
int main()
{
    printf("ENTREZ NMR DES OBJECTS : ");
    scanf("%d",&np);
    int arr[np];
    printf("ENTREZ LES VALEURS DE LIST : \n");
    for(int i=0;i<np;i++){
        scanf("%d",&arr[i]);
    }
    printf("ENTREZ NMR DES OBJECTS YOU want to order: ");
    scanf("%d",&n);
    for(int i=0;i<=np-2;i++){
        for(int j=i+1;j<=np-1;j++){
            if(arr[j]<arr[i]){
                w = arr[i];
                arr[i] = arr[j];
                arr[j] = w;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("%d",x);

}
