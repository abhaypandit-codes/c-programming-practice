#include<stdio.h>
int main(){
  struct employee{
    int id;
    char name[20];
    float salary;
  };
  struct employee emp1[5]={
    {101,"Alok",50000.00},
    {102,"kunal",60000.00},
    {103,"Aniket",55000.00},
    {104,"kanchan",70000.00},
    {105,"Abhay",65000.00},
  };
  printf("\t\tEmployee Details");
  printf("\n\t-----------------------------------");
  printf("\nID\t\tName\t\tSalary");
  for(int i=0;i<5;i++){
    printf("\n%d\t\t%s\t\t%.2f",emp1[i].id,emp1[i].name,emp1[i].salary);
  }
  return 0;
}