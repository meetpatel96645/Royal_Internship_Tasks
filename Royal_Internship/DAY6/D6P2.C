#include <stdio.h>
#include <conio.h>

void main()
{
    int x[10];
    int i;
    int *y;
    y = x;
    clrscr();
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter the value");
        scanf("%d", y + i);
    }
    for (i = 0; i < 10; i++)
    {
        scanf("\t%d", *(y + i));
    }
    printf("\nThe numbers value is:", );
    getch();
}