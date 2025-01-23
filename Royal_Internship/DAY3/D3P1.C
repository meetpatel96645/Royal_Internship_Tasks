//---> !! This File is Save as in INCLUDE Folder and give ".h" extension!! <---\\
//---> !! Then create new File and use arrSort(); for using #include<bubble.h>!! <---\\


#include <stdio.h>
#include <conio.h>
#define SIZE 5

void arrSort()
{
    int arr[SIZE], count = 0, exch = 1;
    int i, j, temp;
    clrscr();
    printf("\n\n\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter the value of arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    printf("\n The unsorted array\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", arr[i]);
    }
    for (i = 0; i < SIZE && exch == 1; i++)
    {
        exch = 0;
        for (j = 0; j < SIZE - i - 1; j++)
        {
            count;
            if (arr[j] > arr[j + 1])
            {
                exch = 1;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        } // end of inner for
    } // end of outer
    printf("\n The number of total iteration are %d", count);
    printf("\n The sorted array\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", arr[i]);
    }
    getch();

} // end of main