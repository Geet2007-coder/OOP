//Linear Search

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int flag = 0, i = 0, key;
    clrscr();

    printf("Enter the number to be searched...\n");
    scanf("%d", &key);

    for (i = 0; i < 10; i++)
    {
        if (key == a[i])
        {
            printf("Number found at location %d", i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Element not found...\n");

    getch();
}