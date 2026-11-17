//Write a menu-driven program using switch to calculate:
//Square
//Cube
//Square root
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int choice;
    float num;

    printf("1. Square\n");
    printf("2. Cube\n");
    printf("3. Square Root\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%f", &num);

    switch(choice)
    {
        case 1:
            printf("Square = %.2f", num * num);
            break;

        case 2:
            printf("Cube = %.2f", num * num * num);
            break;

        case 3:
            if(num >= 0)
                printf("Square Root = %.2f", sqrt(num));
            else
                printf("Square root of negative number is not real.");
            break;

        default:
            printf("Invalid choice!");
    }

    getch();
    return 0;
}