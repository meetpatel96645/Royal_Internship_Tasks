/* Author Name: Meet Patel
   DOC:         21st Jan 2025
   Objective:   To create candy game
*/

#include<stdio.h>
#include<conio.h>

void main(){

   int candyX=40, candyY=5, boxX=40, boxY=13;
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
   gotoxy(candyX, candyY);
   textcolor(GREEN);
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
			 boxX--;
			}
			break;
	     case 'a' : if(boxX>1){
			 boxX--;
			}
			break;
	     case 'D' : if(boxX<73){
			 boxX++;
			}
			break;
	     case 'd' : if(boxX<73){
			 boxX++;
			}
			break;
	     case 'X' : exit(0);
	     case 'x' : exit(0);
	   }
   }
   candyY++;

   if(candyY == boxY){
    if(candyX >= boxX && candyX <= boxX +6){
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

   if(candyY==13){
	 candyY=1;
	 candyX = rand() % 80 + 1;
   }
   delay(200);
   goto start;
}