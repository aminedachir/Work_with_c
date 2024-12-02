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
int Put_Matrix_in_array(int n,int m,int Matrix[n][m],int arr[n*m]){
    int k=0;
    for(int i=0;i<n;i++){ 
        for(int j=0;j<m;j++){
            arr[k] = Matrix[i][j];
            k++;
        }
    }
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
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int leftArr[n1], rightArr[n2];
    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }
    while (i < n1) {
        arr[k++] = leftArr[i++];
    }
    while (j < n2) {
        arr[k++] = rightArr[j++];
    }
}
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
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
int Print_Matrix(int n,int m, int Matrix[n][m]){
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",Matrix[i][j]);
        }
    printf("\n");    
    }
}