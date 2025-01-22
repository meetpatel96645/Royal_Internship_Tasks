/*
   Author:Meet Patel
   Doc   :22 Jan 2025
   Objective:To create single and multiple dimension array and perform operations
             like addition,substraction,multi,division,bubble sort and searching
*/

#include<stdio.h>
#include<conio.h>
#define SIZE 5
#define SIZE1 2

void main()
{ 
    int arr1[SIZE],arr2[SIZE],arr3[SIZE],choice,choiceSD,choiceDD,choiceSort,choiceAsc;
    int arr1D[SIZE1][SIZE1],arr2D[SIZE1][SIZE],arr3D[SIZE1][SIZE1];
    int i,j,count,temp;
    clrscr();
    while(1){
    mainMenu:
	clrscr();
	printf("\n1---------Single Dimension");
	printf("\n2---------Multi Dimension");
	printf("\n3---------exit");
	printf("\nEnter the choice");
	scanf("%d",&choice);
	switch(choice){
	 case 1:
	      clrscr();
	     for(i=0;i<SIZE;i++){
		printf("\nEnter the value of arr1[%d]",i);
		scanf("%d",&arr1[i]);
	     }
	     for(i=0;i<SIZE;i++){
		printf("\nEnter the value of arr2[%d]",i);
		scanf("%d",&arr2[i]);
	     }
	     while(1){
		printf("\n1-------addition");
		printf("\n2-------subtraction");
		printf("\n3-------multiplication");
		printf("\n4-------division");
		printf("\n5-------sorting");
		printf("\n6-------searching");
		printf("\n7-------goto main menu");
		printf("\nEnter the choice");
		scanf("%d",&choiceSD);
		switch(choiceSD){
		case 1:
		     for(i=0;i<SIZE;i++){
			arr3[i] = arr1[i] + arr2[i];
		     }
		     for(i=0;i<SIZE;i++){
			printf("\n%d + %d = %d",arr1[i],arr2[i],arr3[i]);
		     }
		     break;

		case 2:
		     for(i=0;i<SIZE;i++){
			arr3[i] = arr1[i] - arr2[i];
		     }
		     for(i=0;i<SIZE;i++){
			printf("\n%d - %d = %d",arr1[i],arr2[i],arr3[i]);
		     }
		     break;

		case 3:
		     for(i=0;i<SIZE;i++){
			arr3[i] = arr1[i] * arr2[i];
		     }
		     for(i=0;i<SIZE;i++){
			printf("\n%d * %d = %d",arr1[i],arr2[i],arr3[i]);
		     }
		     break;

		case 4:
		    for(i=0;i<SIZE;i++){
			arr3[i] = arr1[i] / arr2[i];
		    }
		    for(i=0;i<SIZE;i++){
			printf("%d / %d = %d",arr1[i],arr2[i],arr3[i]);
		    }
		    break;

		case 5:
		    printf("\nThis is the sorting case");
		    printf("\n1-----ascending");
		    printf("\n2-----descending");
		    printf("\nEnter the choice");
		    scanf("%d",&choiceSort);
		    switch(choiceSort){
		    case 1:
			printf("\n1------bubble sort");
			printf("\n2------selection sort");
			printf("\n3------Enter the choice");
			scanf("%d",&choiceAsc);
			switch(choiceAsc){
			case 1:
			    count = 0;
			    printf("\nThis is the unsorted array");

			    for(i=0;i<SIZE;i++){
				printf("%d\t",arr1[i]);
			    }
			    for(i=0;i<SIZE;i++){
				  for(i=0;j<SIZE-1;j++){
				    count++;
				    if(arr1[j]>arr1[j+1]){
					temp=arr1[j];
					arr1[j]=arr1[j+1];
					arr1[j+1]=temp;
				    } // end of if
				} // end of inner for loop
			    } // end of for loop
			} // end of choiceAsc switch case
			printf("\nTHis is the sorted array");
			for(i=0;i<SIZE;i++){
			      printf("%d\t",arr1[i]);
			}
			printf("\nIteration %d",count);
			break;
            case 2:
                    printf("\nThis is selection sort");
                    break;
                    } // end of choiceSort switch case
                 // end of inner switch case
                break;

            case 6:
                printf("\nThis is the searching case");
                break;
            case 7:
                goto mainMenu;
            } // end inner while loop
            getch();
	}
            break;
         case 2:
	    for(i=0;i<SIZE;i++){
		  for(j=0;j<SIZE1;j++){
		    printf("\nEnter the value of arr1D[%d][%d]",i,j);
		    scanf("%d",&arr1D[i][j]);
                } // end of inner for
            } // end of outer for
	    for(i=0;i<SIZE;i++){
		   for(j=0;j<SIZE;j++){
		    printf("\nEnter the value of arr2D[%d][%d]",i,j);
		    scanf("%d",&arr2D[i][j]);
                } // end of inner for
            } // end of outer for
            printf("\n1-----addition");
            printf("\n2-----subtraction");
            printf("\n3-----multiplication");
            printf("\n4-----division");
            printf("\n5-----sorting");
            printf("\n6-----searching");
            printf("\n7-----exit");
            printf("\nEnter the choice");
	    scanf("%d",&choiceDD);
	    switch(choiceDD){

            } // end of choiceSD switch
            break;
	
         case 3:
            exit(0);
        } // switch of choice
        getch();
    } // end of while loop
} // end of main