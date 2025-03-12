#include <stdio.h>
#include "functions_home_work.c"
#include <stdlib.h>
int main(){
    int n,m;
    int arr[n*m];
    int Matrix[n][m];
    //printf("Enter the number of rows in matrix : ");
    scanf("%d",&n);
    //printf("Enter the number of Cols in matrix : ");
    scanf("%d",&m);
    Register_Matrix(n,m,Matrix);
    printf("<------------This is the unsorted Matrix-------->\n");
    Print_Matrix(n,m,Matrix);
    Put_Matrix_in_array(n,m,Matrix,arr);
    mergeSort(arr, 0, n * m - 1);
    Put_array_in_Matrix(n,m,Matrix,arr);
    printf("<-------- done it with mergeSort -------->\n");
    Print_Matrix(n,m,Matrix);
    printf("<-------- done it with insertionSort -------->\n");
    insertionSort(arr,n*m);
    Put_array_in_Matrix(n,m,Matrix,arr);
    Print_Matrix(n,m,Matrix);  
}