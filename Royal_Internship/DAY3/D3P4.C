/*
   Programme  Name: Using Function Create Student Form
   Programmer Name: Meet Patel
   Date of Creation: 23st jan 2025
*/
#include <stdio.h>
#include <conio.h>
#define SIZE 2

struct Student
{
    int sid;
    char name[30];
    float fees;
    float maths, comp, eng, total, per;
    char grade;

} s[SIZE];
void createStudentDetails();
void displayStudentDetails();
void calculateGrade(int i);
void displayParticularStudentDetails();
int search(int id);
// void updateStudentDetails();
// void delStudentDetails();
void main()
{
    int choice, id, index = -1;
    clrscr();
    while (1)
    {
        clrscr();
        printf("\n1------Create Student Details");
        printf("\n2------Display Student Details");
        printf("\n3------Search");
        printf("\n4------Exit");
        printf("\nEnter The Choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            createStudentDetails();
            break;
        case 2:
            displayStudentDetails();
            break;
        case 3:
            printf("\nEnter the id u want to search");
            scanf("%d", &id);
            index = search(id);
            if (index >= 0)
            {
                displayParticularStudentDetails(index);
            }
            else
            {
                printf("\nThe data no found");
            } // end of else
            break;
        case 4:
            exit();
        } // end of switch
        getch();
    } // end of while

} // end of main
void createStudentDetails()
{
    int i;
    float temp;
    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter The Student Id and Name:");
        scanf("%d%s", &s[i].sid, s[i].name);
        printf("\nEnter The Fee:");
        scanf("%f", &temp);
        s[i].fees = temp;
        printf("\nEnter The Maths, Computer, English Marks:");
        scanf("%f", &temp);
        s[i].maths = temp;
        scanf("%f", &temp);
        s[i].comp = temp;
        scanf("%f", &temp);
        s[i].eng = temp;
        calculateGrade(i);
    } // end of for
} // end of createStudent details

void calculateGrade(int i)
{
    s[i].total = s[i].maths + s[i].comp + s[i].eng;
    s[i].per = s[i].total / 3;
    if (s[i].per > 90)
    {
        s[i].grade = 'A';
    }
    else if (s[i].per > 80)
    {
        s[i].grade = 'B';
    }
    else
    {
        s[i].grade = 'C';
    } // end of else

} // end of calculatorGrade
void displayParticularStudentDetails(int i)
{
    printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%c", s[i].sid, s[i].name, s[i].fees, s[i].total, s[i].per, s[i].grade);
}

void displayStudentDetails()
{
    int i;
    printf("\nsid\tname\tfees\tTotal\tper\tgrade");
    for (i = 0; i < SIZE; i++)
    {
        printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%c", s[i].sid, s[i].name, s[i].fees, s[i].total, s[i].per, s[i].grade);
    } // end for loop
} // end of displayStudentDetails

int search(int id)
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        if (s[i].sid == id)
        {
            return i;
        }
    }
    return -1;
}