#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  srand(time(0)); 
  int r=rand()%100+1;//genrate number lise b/w 1 to 100
  printf("%d\n",r);
  printf("%d\n",r);
  printf("%d\n",r);
  printf("%d\n",r);
  //Every execution of the program output wil diffrent
   return 0;
} 