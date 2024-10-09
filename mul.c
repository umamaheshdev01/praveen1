#include <stdio.h>

int main(){

    //mul

    //same size

    // nof col and no of row  take for both 
    int c1,r1,c2,r2;
    printf("Input the rows and cols in Matrix 1: ");
    scanf("%d %d",&r1,&c1);

    printf("Input the rows and cols in Matrix 2: ");
    scanf("%d %d",&r2,&c2);

    if(c1!=r2){
        printf("Multiplication Not possible");
        return 0; //stop code
    }

    int A[r1][c1];
    int B[r2][c2];

    //Lets take input for A
    printf("Enter the values of 1st marix : \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter the values of 2nd marix : \n"); 
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&B[i][j]);
        }
    }

    // 2x3 3x2

    //declare
    int C[r1][c2];

    // 1 2 3
    // 4 5 6

    // 2 1
    // 3 4
    // 5 6


    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
             
             //i=0 ,j =1
             int sum = 0;
             for(int k=0;k<c1;k++){
               sum+=A[i][k]*B[k][j];
             }            //import lines


           C[i][j] = sum;

        }
    }

    printf("-----Solution--------\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

    




}