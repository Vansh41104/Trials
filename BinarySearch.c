#include<stdio.h>
int searchbinary(int a[],int size,int ele){
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<high){
        mid=(low+high)/2;
    if(a[mid]==ele){
        return mid;}
    else if(a[mid]<ele){
        low=mid+1;}
    else{
        high=mid-1;}}}
int main(){
    int a[]={1,2,34,45,56,67,78,89,90};
    int size=sizeof(a)/sizeof(int);
    int ele;
    printf("What number you want \n");
    scanf("%d",&ele);
    int index=searchbinary(a,size,ele);
    printf("the element %d is found at the position %d\n",ele,index);
    return 0;}