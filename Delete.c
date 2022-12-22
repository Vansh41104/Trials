#include<stdio.h>
int main()
{
    int i,j,k,a[5],s=6;
    
    for(i=0;i<s-1;i++)
    {   
        printf("enter a value\n");
        scanf("%d",&a[i]);
    }
    printf("what position you want to delete\n");
    scanf("%d",&k);
    for(i=k-1;i<s;i++)
    {
        a[i]=a[i+1];
        s--;
        // printf("%d\n",s);
    }
    for(i=0;i<s;i++)
    {
        printf("the Deleted value is %d\n",a[i]);
    }
    
}