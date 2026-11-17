//Write a program to print a checkerboard pattern.
#include <stdio.h>
#include <conio.h>

int main() {
    int i, j;

    for(i = 1; i <= 8; i++) {

        for(j = 1; j <= 8; j++) {

            if((i + j) % 2 == 0) {
                printf("* ");
            }
            else {
                printf("  ");
            }

        }

        printf("\n");
    }

    getch();
    return 0;
}