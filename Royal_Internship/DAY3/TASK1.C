/*
      Author Name: Meet Patel
      DOC: 24st Jan 2025
      Objective:To Create,Display,Update,Delete Student Application using Functions

*/
#include <stdio.h>
#include <conio.h>
#define SIZE 1

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
void updateStudentDetails();
void delStudentDetails();
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
        printf("\n4------Update Student Details");
        printf("\n5------Delete Student Details");
        printf("\n6------Exit");
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
            updateStudentDetails();
            break;
        case 5:
            delStudentDetails();
            break;
        case 6:
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
void updateStudentDetails()
{
    int i, id, updateChoice;
    float temp;
    char tempName[30];

    printf("\nEnter the student ID to update:");
    scanf("%d", &id);

    i = search(id);
    if (i >= 0)
    {
        printf("\n1----Enter Name:");
        printf("\n2----Enter Fees:");
        printf("\n3----Enter Marks:(Maths,Computer,English)");
        printf("\nEnter your choice:");
        scanf("%d", &updateChoice);
        switch (updateChoice)
        {
        case 1:
            printf("\nUpdate the name:");
            scanf("%s", tempName);
            strcpy(s[i].name, tempName);
            printf("\nName updated successfully");
            break;
        case 2:
            printf("\nEnter Update Fees:");
            scanf("%f", &temp);
            s[i].fees = temp;
            printf("\nFees updated successfully");
            break;
        case 3:
            printf("Update Maths, Computer and English Marks");
            scanf("%f%f%f", &temp, &s[i].comp, &s[i].eng);
            s[i].maths = temp;
            calculateGrade(i);
            printf("\nMarks updated successfully");
            break;
        }
    }
    else
    {
        printf("\Student ID %d is not found!", id);
    }
    getch();
}
void delStudentDetails()
{
    int i, id;
    printf("\nEnter the ID of student to delete:");
    scanf("%d", &id);
    i = search(id);
    s[i].sid = 0;
    s[i].per = 0;
    s[i].name[30] = '0';
    s[i].grade = '0';
    s[i].total = 0.0;
    s[i].fees = 0.0;
    printf("\nStudent ID %d Details Deleted", id);
}
