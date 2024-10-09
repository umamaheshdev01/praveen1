#include <stdio.h>

int main(){
   
   // rows and col
   int r,c;
   printf("Enter the rows and cols of matrix : ");
   scanf("%d %d",&r,&c);

   //array
   int A[r][c];
   printf("Enter the matrix values :\n");
   for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
        scanf("%d",&A[i][j]);
     }
   }

   //transpose
   int B[c][r];
   

//    1 2 3
//    4 5 6

//    1 4
//    2 5
//    3 6 

    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            B[i][j] = A[j][i]; //transpose
        }
    }

    //print transpose
    printf("----Transpose-----\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


}