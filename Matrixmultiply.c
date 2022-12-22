#include<stdio.h>
int main()
{
    int i,j,k,A[3][3],B[3][3],C[3][3],D[3][3],sum;
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
    printf("enter the value for B matrix\n\n");
    // this loop is for B[3][3]
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the matrix value for %d %d\n",i,j);
            scanf("%d",&B[i][j]);
            // printf("the value is %d\n",B[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {        
            sum+=A[i][k]*B[k][j];
            }
            C[i][j]=sum;
            sum=0;
        
        }
        
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d  ",C[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
