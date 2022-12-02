
#include<stdio.h>
int main(){

  int code, qty;

  float price,amount,totalAmount,cash,change,vat;
  char addAnother;

 do{
     printf("local shop\n");
  printf("(1)brown bread\t\t php 80.00\n");
  printf("(2)cream milk/t/t php 150.00\n");

  printf("Enter code\n");
  scanf("%d",&code);
  printf("Enter qty\n");
  scanf("%d",&qty);

 switch(code)
{
case 1: price=80.00;
        break;
case 2: price=150.00;
        break;

}
  amount=price*qty;
printf("n\amount: %.2f",amount);

  totalAmount=totalAmount+amount;
printf("n/totalAmount: %f",totalAmount);

printf("n\addAnother order (y/n)? ");
addAnother = getche();
 } while(addAnother == 'y');
 do{
 printf("\ncash Tendered: ");
 scanf("%f, &cash");

 change=cash-totalAmount;
printf("n\change: %.2f",change);
 }while(cash<totalAmount);
 vat=totalAmount*0.16;
 printf("/n vat: %.2f",vat);
  printf("n\ local shop welcome back");



}
