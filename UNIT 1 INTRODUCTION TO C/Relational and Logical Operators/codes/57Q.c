// Write a program using the logical OR operator.
 #include <stdio.h>
 #include <conio.h>
 
 int main() {
     int num1, num2;
     printf("Enter two numbers: ");
     scanf("%d %d", &num1, &num2);
    
     if (num1 < 0 || num2 < 0) {
         printf("At least one number is negative.\n");
     } else {
         printf("Both numbers are non-negative.\n");
     }
     
     getch();
     return 0;
 }