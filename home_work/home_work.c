#include <stdio.h>
#include "functions_home_work.c"
#include <stdlib.h>


int main(){
    int n,m;
    int arr[n*m];
    int Matrix[n][m];
    printf("Enter the number of rows in matrix");
    scanf("%d",&n);
    printf("Enter the number of Cols in matrix");
    scanf("%d",&m);
    Register_Matrix(n,m,Matrix);
    Print_Matrix_V0(n,m,Matrix);
    Put_Matrix_in_array(n,m,Matrix,arr);
    insertionSort(arr,n*m);
    Put_array_in_Matrix(n,m,Matrix,arr);
    Print_Matrix(n,m,Matrix);
}