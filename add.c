#include <stdio.h>

int main(){
    
    //add

    //same size

    // nof col and no of row  take for both 
    int c1,r1,c2,r2;
    printf("Input the rows and cols in Matrix 1: ");
    scanf("%d %d",&r1,&c1);

    printf("Input the rows and cols in Matrix 2: ");
    scanf("%d %d",&r2,&c2);


    if(!(r1==r2 && c1==c2)){
        printf("Addition Not possible");
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

    printf("Enter the values of 2nd marix : \n"); //r1==r2
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&B[i][j]);
        }
    }

     // for answer create new matrix
     int C[r1][c1];
     for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            C[i][j] = A[i][j]+B[i][j];
        }
    }

     //perform addition



    printf("---------Solution-----------\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }





}