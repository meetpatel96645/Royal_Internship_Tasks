#include<stdio.h>
#include<conio.h>

void main(){
     int num1, num2, ans;
     clrscr();
     printf("Enter First Number:");
     scanf("%d",&num1);
     printf("Enter Second Number:");
     scanf("%d",&num2);
     ans = num1 + num2;
     printf("Total Sum is: %d",ans);
     getch();
}