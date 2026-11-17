//Write a program to print:
//A
//AB
//ABC
//ABCD
//ABCDE

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c", 'A' + j - 1);
        }

        printf("\n");
    }

    getch();
    return 0;
}