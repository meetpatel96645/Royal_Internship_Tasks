#include <stdio.h>
#include <conio.h>

void main()
{
    int x = 9, z = 10;
    int *y;
    char ch = 'A';
    char *c;
    clrscr();
    y = &x;
    c = &ch;
    printf("\nThe adress of x is %u and value is %d", y, *y);
    y = &z;
    printf("\nThe address of z is %u and value is %d", y, *y);
    printf("\nThe address of ch is %u and value is %c", c, *c);
    getch();
}