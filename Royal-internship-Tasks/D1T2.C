/*
	 Author:   Meet Patel
	 Doc:      21st Jan 2025
	 Objective:To create a candy game with to candy and speeding
*/

#include<stdio.h>
#include<conio.h>

void main(){

   int candy1X=40, candy1Y=5, candy2X=20, candy2Y=1;
   int boxX=40, boxY=13;
   int score=0, lives=3;
   char ch;
   textbackground(BLACK);
   start:
   clrscr();
   textcolor(WHITE);
   gotoxy(1,1);
   cprintf("Score: %d", score);
   gotoxy(1,2);
   cprintf("Lives: %d", lives);

   //First candy:
   gotoxy(candy1X, candy1Y);
   textcolor(GREEN);
   cprintf("0");

   //second candy:
   gotoxy(candy2X, candy2Y);
   textcolor(BLUE);
   cprintf("0");

   gotoxy(boxX, boxY);
   cprintf("#");
   gotoxy(boxX+7, boxY);
   cprintf("#");
   gotoxy(boxX, boxY+1);
   cprintf("########");
   if(kbhit()){
	   ch=getch();
	   switch(ch){
	     case 'A' : if(boxX>1){
			 boxX -=6 ;
			}
			break;
	     case 'a' : if(boxX>1){
			 boxX -=6;
			}
			break;
	     case 'D' : if(boxX<73){
			 boxX +=6;
			}
			break;
	     case 'd' : if(boxX<73){
			 boxX +=6;
			}
			break;
	     case 'X' : exit(0);
	     case 'x' : exit(0);
	   }
   }
   //first candy
   candy1Y++;

   if(candy1Y == boxY){
    if(candy1X >= boxX && candy1X <= boxX +6){
	score++;
       } else {
	  lives--;
	  if(lives == 0){
	  clrscr();
	  textcolor(RED);
	  cprintf("U Are Lost");
	  getch();
     exit(0);
	  }
       }
    }
   if(candy1Y==13){
	 candy1Y=1;
	 candy1X = rand() % 80 + 1;
   }
    //second candy
   candy2Y++;

   if(candy2Y == boxY){
    if(candy2X >= boxX && candy2X <= boxX +6){
	score++;
       } else {
	  lives--;
	  if(lives == 0){
	  clrscr();
	  textcolor(RED);
	  cprintf("U Are Lost");
	  getch();
	  }
       }
    }
   if(candy2Y==13){
	 candy2Y=1;
	 candy2X = rand() % 80 + 1;
   }

   delay(400);
   goto start;
}