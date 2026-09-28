//Write a program to find the maximum of two numbers using the conditional operator.
#include <stdio.h>
#include <conio.h>

 int main() {
     int num1, num2;
     printf("Enter two numbers: ");
     scanf("%d %d", &num1, &num2);
    
     int max = (num1 > num2) ? num1 : num2;
     printf("The maximum of the two numbers is: %d\n", max);
    
     getch();
     return 0;
 }