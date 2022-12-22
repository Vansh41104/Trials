#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3],c[3][3];
    printf("the values will be for matrix 1:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            printf ("enter the value a[%d][%d]\n\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("the values will be for matrix 2:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            printf ("enter the value b[%d][%d]\n\n",i,j);
            scanf("%d \n",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d   ",c[i][j]);
            
        }
        printf("\n");
    }
}