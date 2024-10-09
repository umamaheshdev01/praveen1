#include <stdio.h>

int main(){

    int r1,r2,c1,c2,i,j;


    printf("enter number of rows and colums of matrix 1: ");
    scanf("%d %d",&r1,&c1);

    printf("enter number of rows and column of matrix 2: ");
    scanf("%d %d",&r2,&c2);

    int A[r1][c1];
    int B[r2][c2];

    if(r1==r2 && c1==c2)
    {   printf("enter the values of matrix 1");
        for(i=0;i<r1;i++)
        {  
            for(j=0;j<c1;j++)
            {
             scanf("%d",&A[i][j]);
            }
        }
        printf("enter the values of matrix 2");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c1;j++)
            {
             scanf("%d",&B[i][j]);
            }
        }
        
        int C[r1][c1];
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c1;j++)
            {
             C[i][j]=A[i][j]-B[i][j];
            }
        }


        printf("solution is:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c1;j++)
            {
             printf("%d ",C[i][j]);
            }

            printf("\n");
        }
    }
    else
    printf("subtraction not possible");
    return 0;











}