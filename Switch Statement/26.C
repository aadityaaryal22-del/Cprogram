//Write a menu-driven program using switch to perform:
//  Addition
//  Subtraction
//  Multiplication
//  Division
//  Modulus
#include <stdio.h>
#include <conio.h> 

int main() {
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    printf("5.Modulus\n");
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
        case 5:
            printf("Modulus = %d",a % b);
            break;    
        default:
        printf("Invalid choice");
    }
    getch();
    return 0;
}