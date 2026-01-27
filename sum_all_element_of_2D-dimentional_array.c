//ADDITION OF 2D_DIMENTIONAL ARRAY ELEMENT

int main() {
    int row, column,sum=0;
    
    printf("Enter row and column: ");
    scanf("%d %d", &row, &column);
    
    int array[row][column];
    
    printf("\nELEMENT OF 2D DIMENTIONAL ARRAY\n");
    for(int i = 0; i < row; i++) {
      for(int j = 0; j < column; j++) {
          printf("Element of matrix_A[%d][%d]:",i,j);
          scanf("%d", &array[i][j]);
        }
      }
      for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
          sum=sum+array[i][j];
        }
      }
      printf("\nSUM OF ELEMENT OF 2D ARRAY:%d",sum);
     return 0;
    }
     