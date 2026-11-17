//Write a program to calculate the sum of numbers entered by the user until 0 is entered using do-while.
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, sum = 0;

    do
    {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);

        sum = sum + n;

    } while(n != 0);

    printf("Sum of numbers = %d", sum);

    getch();
    return 0;
}