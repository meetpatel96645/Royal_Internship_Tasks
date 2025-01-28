#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp;
    char name[30];
    char ch;
    clrscr();
    fp = fopen("pr1.txt", "w");
    while ((ch = getchar()) != '\n')
        ;
    {
        putc(ch, fp);
    } // end of while
    fclose(fp);
    fp = fopen("pr1.txt", "r");
    printf("\nThis is the contents of the file");
    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    getch();
}