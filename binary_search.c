//Binary Search
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int flag = 0, i = 0, lower = 0, upper = 9, mid, key;
    clrscr();

    printf("Enter the number to be searched...\n");
    scanf("%d", &key);

    while (upper >= lower)
    {
        i++;
        mid = (lower + upper) / 2;
        if (a[mid] == key)
        {
            printf("Element found at index %d...\n", mid);
            flag = 1;
            break;
        }

        else if (a[mid] > key)
            upper = mid - 1;
        
        else
            lower = mid + 1;
        
    }
    if (flag == 0)
        printf("Element not found...\n");

    printf("No of iterations performed: %d...", i);

    getch();
}