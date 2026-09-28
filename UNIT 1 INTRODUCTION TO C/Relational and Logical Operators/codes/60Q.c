//Write a program to check whether a number is divisible by both 3 and 5.
#include <stdio.h>
#include<conio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 3 == 0 && num % 5 == 0) {
        printf("The number is divisible by both 3 and 5.\n");
    } else {
        printf("The number is not divisible by both 3 and 5.\n");
    }
    
    getch();
    return 0;
}