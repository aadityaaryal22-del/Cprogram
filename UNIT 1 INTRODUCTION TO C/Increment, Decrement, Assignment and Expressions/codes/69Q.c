// Write a program using the conditional operator.
 #include <stdio.h>
#include <conio.h>

int main()
{
    int a = 10, b = 20;
    int smaller;

    smaller = (a < b) ? a : b;

    printf("smaller number = %d", smaller);

    getch();
    return 0;
}