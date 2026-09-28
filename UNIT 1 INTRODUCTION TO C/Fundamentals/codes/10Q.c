//Write a C program to display the character corresponding to an ASCII value.
#include <stdio.h>
#include <conio.h>

int main()
{
    int ascii;

    printf("Enter an ASCII value: ");
    scanf("%d", &ascii);

    printf("The corresponding character is: %c", ascii);

    getch();
    return 0;
}