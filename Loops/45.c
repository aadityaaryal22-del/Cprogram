//Write a program to find whether a number is prime or not.

#include <stdio.h>
#include <conio.h>

int main() {
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            count++;
        }
    }

    if(count == 2) {
        printf("%d is a Prime Number", n);
    }
    else {
        printf("%d is not a Prime Number", n);
    }

    getch();
    return 0;
}
