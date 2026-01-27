//STUDENT 

#include<stdio.h>
struct student{
  char name[10];
  int roll;
  int marks[3];
  float average;
  int sum;
};
int main(){
  struct student stu;
  printf("Enter a name:");
  gets(stu.name);
  printf("Enter a roll:");
  scanf("%d",&stu.roll);
  stu.sum=0;
  for(int i=0;i<3;i++){
    printf("Enter a marks of subject[%d]:",i+1);
    scanf("%d",&stu.marks[i]);
    stu.sum+=stu.marks[i];
  }
  stu.average=stu.sum/3;
  printf("student:%s\n",stu.name);
  printf("Roll_number:%d\n",stu.roll);
  printf("sub_1 score:%d\tsub_2 score:%d\tsub_3 score:%d\n",stu.marks[0],stu.marks[1],stu.marks[2]);
  printf("Total marks:%d\n",stu.sum);
  printf("Average marks:%.2f\n",stu.average);
  return 0;
}