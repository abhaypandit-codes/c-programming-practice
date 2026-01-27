/*MATRIX MULTIPLICATION USING ARRAY*/

#include<stdio.h>
int main(){
  printf("Matrix_A row and column\n");
  int row,column;
  printf("Enter a row and column:");
  scanf("%d%d",&row,&column);
<<<<<<< HEAD
  printf("Matrix_B row and column\n");
=======
>>>>>>> ccbb64f (Saved local changes before rebase)
  int row1,column1;
  printf("Enter a row and column:");
  scanf("%d%d",&row1,&column1);
  int matrix_A[row][column],matrix_B[row][column];
  if(column==row1){
<<<<<<< HEAD
 printf("matrix_A:\n");
=======
  
  printf("matrix_A:\n");
>>>>>>> ccbb64f (Saved local changes before rebase)
  
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      printf("matrix_A[%d][%d]:",i,j);
      scanf("%d",&matrix_A[i][j]);
    }
  }
  printf("matrix_B:\n");
  for(int i=0;i<row1;i++){
    for(int j=0;j<column1;j++){
      printf("matrix_B[%d][%d]:",i,j);
      scanf("%d",&matrix_B[i][j]);
    }
  }
  printf("multiplication of matrix_A and matrix_B:\n");
<<<<<<< HEAD
  for(int i=0;i<row;i++){
    for(int j=0;j<column1;j++){
=======
  for(int i=0;i<row1;i++){
    for(int j=0;j<column;j++){
>>>>>>> ccbb64f (Saved local changes before rebase)
      int sum=0;
  for(int k=0;k<column1;k++){
    sum+=matrix_A[i][k]*matrix_B[k][j];
      }
      printf("%d\t",sum);
    }
    printf("\n");
  }
  }
  else{
<<<<<<< HEAD
  printf("Multiplication of two matrix not possible");
  }
  return 0;
}
=======
  printf("Multiplication of two matrix is not possible");
  }
  return 0;
}
>>>>>>> ccbb64f (Saved local changes before rebase)
