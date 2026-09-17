//write a c program demostrating multiple variable declaration
#include <stdio.h>
#include <conio.h>

int main() {
    int a, b, c;
    float x, y;
    char ch1, ch2;

    a = 10;
    b = 20;
    c = 30;

    x = 5.5;
    y = 10.5;

    ch1 = 'A';
    ch2 = 'B';

    printf("Integer values: %d, %d, %d\n", a, b, c);
    printf("Float values: %f, %f\n", x, y);
    printf("Character values: %c, %c\n", ch1, ch2);

    getch();
    return 0;
}