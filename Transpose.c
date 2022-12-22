#include<stdio.h>
int main()
{
    int i,j,A[3][3],swap;
    printf("enter the value for A matrix\n\n");
    // this loop is for A[3][3]
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the matrix value for %d %d\n",i,j);
            scanf("%d",&A[i][j]);
            // printf("the value is %d\n",A[i][j]);
        }
    }
    printf("the normal matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",A[i][j]);
        }
        printf("\n\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            swap=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=swap;
            

        }
    }
    printf("the transpose matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",A[j][i]);
        }
        printf("\n\n");
    }
}