/*DISPLAY GOODS PRICE, QUANTITY,DATE*/

#include<stdio.h>
struct goods_data
{
  char a[40];
  int quantity;
  float price;
  int date;
};
int main(){
   struct goods_data e[3]={{"Notebook",3,60.00,12},
                         {"caculator",5,200.00,12},
                         {"pen",10,10.00,12},
   };
   printf("\t\tDetails of good");
   printf("\n\t----------------------------");
   printf("\ngoods\t\tquantity\t\tprice\t\tdate");
   for(int i=0;i<3;i++){
    printf("\n%s\t\t%d\t\t%.2f\t\t%d/12/2025",e[i].a,e[i].quantity,e[i].price,e[i].date);
   }
 return 0;
}