#include<stdio.h>
void printarray(int* A[],int n){
    //Printing of the array
    for (int i = 0; i < n; i++){
       printf("%d  ",A[i]);
    }
    printf("\n");}
void BubbleSort(int *A,int n){
    int swap;
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1-i; j++){
            if(A[j]>A[j+1]){
                swap=A[j];
                A[j]=A[j+1];
                A[j+1]=swap;}}}}
int main(){
    int A[]={56,12,24,1,31,101,1,23,41};
    int n=sizeof(A)/sizeof(int);
    printarray(A,n);
    BubbleSort(A,n);
    printarray(A,n);
    return 0;}