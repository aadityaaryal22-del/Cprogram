//Write a program to calculate electricity charges based on different unit ranges using an else-if ladder.
#include <stdio.h>
#include <conio.h>

int main()
{
    int units;
    float bill;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if(units <= 20)
    {
        bill = units * 5;
    }
    else if(units <= 50)
    {
        bill = 20 * 5 + (units - 20) * 7;
    }
    else if(units <= 100)
    {
        bill = 20 * 5 + 30 * 7 + (units - 50) * 8;
    }
    else
    {
        bill = 20 * 5 + 30 * 7 + 50 * 8 + (units - 100) * 10;
    }

    printf("Total electricity bill = Rs. %.2f", bill);

    getch();
    return 0;
}