//Two matrix multiplication using using function and pointer in array  

#include<stdio.h>
void matrix_multiplication(int Matrix_A[][10], int Matrix_B[][10],int,int);
int main(){
  int i,j,row,column;
  printf("Enter a row and columnn:");
  scanf("%d%d",&row,&column);
  int matrix_A[10][10];
  int matrix_B[10][10];
  printf("Matrix_A\n");
  
  for(int i=0; i<row;i++){
    for(int j=0; j<column;j++){
      printf("matrix_A[%d][%d]:",i,j);
      scanf("%d",&matrix_A[i][j]);
    }
  }
  printf("Matrix_B\n");
  for(int i=0; i<row;i++){
    for(int j=0; j<column;j++){
      printf("matrix_B[%d][%d]:",i,j);
      scanf("%d",&matrix_B[i][j]);
    }
  }
  matrix_multiplication(matrix_A, matrix_B, row, column);
  return 0;
}
void matrix_multiplication(int Matrix_A[][10], int Matrix_B[][10], int Row, int column){
  printf("\nMultiplication of matrix_A & matrix_B\n");
  
  for(int i=0; i<Row; i++){
    for(int j=0; j<column; j++){
      int sum = 0;
      for(int k=0; k<column;k++){
        sum+=*(*(Matrix_A+i)+k)**(*(Matrix_B+k)+j);
        //3D cocept:*(*(p+i)+j)
      }
      printf("%d ",sum);
    }
    printf("\n");
  }
}