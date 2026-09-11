//Bubble Sort

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100], size, i, j, swap;
    clrscr();

    printf("Enter the size of array\n");
    scanf("%d", &size);

    printf("Enter the array elements...\n");
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    for (i = 1; i < size; i++)
    {
        for (j = 0; j < size - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
            }
        }
    }

    printf("Sorted elements are ...\n");
    for (i = 0; i < size; i++)
        printf("\t%d", a[i]);

    getch();
}