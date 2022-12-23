#include<stdio.h>
int main()
{
    int i,j,k,a[5],s=6;
    
    for(i=0;i<s-1;i++)
    {   
        printf("enter a value\n");
        scanf("%d",&a[i]);
    }
    printf("what number you want to insert\n");
    scanf("%d",&k);
    for(i=k-1;i<s-1;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<s;i++)
    {
        printf("the inserted value is %d\n",a[i]);
    }
    
}