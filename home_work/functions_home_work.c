#include <stdio.h>
int n,m;
int Register_Matrix(int n,int m,int Matrix[n][m]){
    printf("<-----Enter The MAtrix line by line and the numbers separated by ','----->\n");
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d,",&Matrix[i][j]);
        }
    }
}
int Print_Matrix_V0(int n,int m, int Matrix[n][m]){
    printf("<------------This is the unsorted Matrix-------->\n");
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",Matrix[i][j]);
        }
    printf("\n");    
    }
}
int Put_Matrix_in_array(int n,int m,int Matrix[n][m],int arr[n*m]){
    int k=0;
    for(int i=0;i<n;i++){ 
        for(int j=0;j<m;j++){
            arr[k] = Matrix[i][j];
            k++;
        }
    }
    for (int i = 0; i < n*m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertionSort(int arr[],int n) {
    for (int i = 1; i < n; i++) {
        int z = arr[i]; 
        int j = i - 1;
        while (j >= 0 && arr[j] > z) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = z;
    }
}
int Put_array_in_Matrix(int n,int m,int Matrix[n][m],int arr[n*m]){
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            Matrix[i][j] = arr[k];
            k++;
        }
    }
}
void Print_Matrix(int n,int m,int Matrix[n][m]) {
    printf("\n<--------This is the Sorted matrix--------->\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }
}