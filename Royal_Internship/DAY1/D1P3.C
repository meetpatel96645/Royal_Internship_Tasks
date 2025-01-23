#include<stdio.h>
#include<conio.h>

void main(){
   // With using third number
  /* int num1, num2, temp;
   clrscr();
   printf("Enter First Number:");
   scanf("%d",&num1);
   printf("Enter Second Number:");
   scanf("%d",&num2);

   temp = num1;
   num1 = num2;
   num2 = temp;

   printf("Now Swapping Numbers....\n");
   printf("First Number is: %d \n",num1);
   printf("Second Number is: %d ",num2);
   getch();    */

   // Without using third number
     int num1, num2;
   clrscr();
   printf("Enter First Number:");
   scanf("%d",&num1);
   printf("Enter Second Number:");
   scanf("%d",&num2);

   num1 = num1 + num2;
   num1 = num1 - num2;
   num2 = num1 - num2;

   printf("Now Swapping Numbers....\n");
   printf("First Number is: %d \n",num1);
   printf("Second Number is: %d ",num2);
   getch();
}