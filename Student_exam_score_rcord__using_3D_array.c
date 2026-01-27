#include<stdio.h>
int main(){
    int a[3][2][2];
    for(int i=0;i<3;i++){
      printf("Enter marks of student_%d:",i+1);
      for(int j=0;j<2;j++){
        for(int k=0;k<2;k++){
          printf("\nmarks ofsubject_%d in Term_%d:",j+1,k+1);
          scanf("%d",&a[i][j][k]);
        }
      }
    }
    printf("\t\tmarks details");
    printf("\n\t---------------------");
    printf("\n\t\tTerm_1\t\tTerm_2");
    for(int i=0;i<3;i++){
      for(int j=0;j<2;j++){
        for(int k=0;k<2;k++){
          printf("subject_%d\t\t%d",i+1,a[i][j][k]);
        }
        printf("\n");                                                                        
      }
    }
    
    
  return 0;
}