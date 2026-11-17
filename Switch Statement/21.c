//Write a menu-driven calculator using switch for addition, subtraction, multiplication, and division.
#include <stdio.h>
#include <conio.h>

int main() {
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1.Add 2.Subtract 3.Multiply 4.Divide\n");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Sum = %d", a + b);
            break;
        case 2:
            printf("Difference = %d", a - b);
            break;
        case 3:
            printf("Product = %d", a * b);
            break;
        case 4:
            printf("Quotient = %d", a / b);
            break;
        default:
        printf("Invalid choice");
    }
    getch();
    return 0;
}