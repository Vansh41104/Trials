#include<stdio.h>
int main(){
    int a[5],b,c,swapping;
    for (b=0;b<5;b++){
        printf("enter the values to be sorted\n");
        scanf("%d",&a[b]);}
    for (b=0;b<5;b++){
        for (c=b+1;c<5;c++){
            if(a[b]>a[c]){
                swapping=a[b];
                a[b]=a[c];
                a[c]=swapping;}}}
    printf("the sorted array elements \n");
    for (b=0;b<5;b++){
        printf("the numbers are %d\n",a[b]);}
    return 0;}