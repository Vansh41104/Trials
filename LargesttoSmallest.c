#include<stdio.h>
int main()
{
    int i,j,a[5],Swap;
    for(i=0;i<5;i++)
    {
        printf("enter a value\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                Swap=a[i];
                a[i]=a[j];
                a[j]=Swap;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("the largest number is %d\n",a[0]);
    printf("the Smallest number is %d\n",a[5]);
}
