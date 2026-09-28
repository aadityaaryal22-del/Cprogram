//Write a program using the logical NOT operator.

 #include <stdio.h>
 #include <conio.h>

 int main() {
     int n;
     printf("Enter a number: ");
     scanf("%d", &n);
    
     if (!(n > 0)) {
         printf("The number is not positive.\n");
     } else {
         printf("The number is positive.\n");
     }
     
     getch();
     return 0;
 }