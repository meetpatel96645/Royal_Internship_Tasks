/*
   Programme  Name: To explain Functions & its Methods
   Programmer Name: Meet Patel
   Date of Creation: 23st jan 2025
*/
/*
                          Functions
                           ---|---
  |________________________|	 |________________________|
  |  Buit in Function      |     |   User Define Function |
  |________________________|     |________________________|

      void add();                 // no return no argument
      int add();              // with return no argument
      int add(int x,int y);      // with return with argument
      void add(int x,int y);  // without return with argument
      void add(int c,.....);

    parts
      declaration
      calling
      defination
*/

#include <stdio.h>
#include <conio.h>

void add();             // No arguments, no return type
int add1();             // No arguments, with return type
int add2(int a, int b); // With arguments, with return type
int add3(int p, int q); // With arguments, with return type

void main()
{
    int a, b, p, q, ans;
    int choice;

    while (1)
    {
        clrscr();
        printf("\n1------without args without return type");
        printf("\n2------with return type no arg");
        printf("\n3------with return with arg");
        printf("\n4------with return with arg");
        printf("\n5------exit");
        printf("\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            ans = add1();
            printf("\nThe answer is %d", ans);
            break;
        case 3:
            printf("\nEnter the arguments:");
            scanf("%d%d", &a, &b);
            add2(a, b);
            break;
        case 4:
            printf("\nEnter the arguments:");
            scanf("%d%d", &p, &q);
            ans = add3(p, q);
            printf("\nThe answer is %d", ans);
            break;
        case 5:
            exit(0);
        } // end of switch case
        getch();
    }
}

void add() // No return, no arguments
{
    int a, b, c;
    printf("\nEnter the value of a and b: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("\nThe answer is %d", c);
}

int add1() // With return, no arguments
{
    int a, b, c;
    printf("\nEnter the value of a and b: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    return c;
}

int add2(int a, int b) // No return, with arguments
{
    int c;
    c = a + b;
    printf("\nThe answer is %d", c);
}

int add3(int p, int q) // with return, with arguments
{
    int c;
    c = p + q;
    return c;
}
