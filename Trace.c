#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3];
    printf("enter the values of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter a value of a[%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        b[i][j]=a[i][0]+a[i][1]+a[i][2];
        printf("%d\n",b[i][j]);
    }
}