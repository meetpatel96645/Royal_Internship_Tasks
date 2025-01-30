#include <stdio.h>
#include <conio.h>
#define SIZE 4
struct Student
{
    int sid;
    float fees;
    char name[30];
} s[2], s1[SIZE];
void create();
void display();

void main()
{
    FILE *fp;
    char fileName[30];
    int i, choice;
    clrscr();
mainMenu:
    printf("\nEnter the file name");
    scanf("%s", fileName);
    fp = fopen(fileName, "a+");

    while (1)
    {
        printf("\n1-----Write");
        printf("\n2-----Read");
        printf("\n3-----exit");
        printf("\nEnter the choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            for (i = 0; i < 2; i++)
            {
                fwrite(&s[i], sizeof(s[i]), 1, fp);
            }
            break;
        case 2:
            if (fp == NULL)
            {
                printf("The file does not exist");
                goto mainMenu;
            }
            else
            {
                /* for (i = 0; i < SIZE; i++){

                 } */
                fseek(fp, 0L, SEEK_SET);
                for (i = 0; i < SIZE; i++)
                {
                    fread(&s1[i], sizeof(s1[i]), 1, fp);
                } // end for loop
                display();
            }
            break;
        case 3:
            fclose(fp);
            exit(0);
        } // end of switch
        getch();
    } // end of while
} // end of main
void create()
{
    int i;
    float temp;
    for (i = 0; i < 2; i++)
    {
        printf("\nEnter the sid and name");
        scanf("%d%s", &s[i].sid, s[i].name);
        printf("\nEnter the fees");
        scanf("%f", &temp);
        s[i].fees = temp;
    } // end of for
} // end of create
void display()
{
    int i;
    clrscr();
    printf("\nsid\tname\tfees");
    for (i = 0; i < SIZE; i++)
    {
        printf("\n%d\t%s\t%f", s[i].sid, s1[i].name, s1[i].fees);
    }
}
