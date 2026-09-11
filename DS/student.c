// Write a C program to dynamically allocate memory for storing the marks of N students. Using pointer arithmetic, calculate the highest mark, lowest mark, average, median, and grade distribution. Display the results in a formatted report.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *marks;
    int sum = 0, max, min;
    float average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    marks = (int *)malloc(n * sizeof(int));

    printf("Enter marks:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", marks + i);
    }

    max = min = *marks;

    for(i = 0; i < n; i++)
    {
        sum = sum + *(marks + i);

        if(*(marks + i) > max)
            max = *(marks + i);

        if(*(marks + i) < min)
            min = *(marks + i);
    }

    average = (float)sum / n;

    printf("\nHighest = %d", max);
    printf("\nLowest = %d", min);
    printf("\nAverage = %.2f", average);

    free(marks);

    return 0;
}