#include<stdio.h>
int main(){
  char *name[]={"sunil","abhay","kunal","ram"};
  for(int i=0;i<4;i++){
    printf("%s\n",name[i]);
  }
  printf("Print character in alphabetically order:\n");
   printf("%d\n",name[0]);
   
  

  return 0; 
}