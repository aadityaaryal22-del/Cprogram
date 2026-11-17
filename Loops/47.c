//Write a program to find the GCD of two numbers using a loop.

#include <stdio.h>
#include <conio.h>

int main() {
    int a, b, i, gcd = 1;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    printf("GCD = %d", gcd);

    getch();
    return 0;
}
