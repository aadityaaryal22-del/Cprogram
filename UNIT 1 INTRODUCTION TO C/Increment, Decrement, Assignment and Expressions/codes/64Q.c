//Write a program demonstrating post-decrement.
 #include <stdio.h>
#include <conio.h>

 int main() {
     int num = 5;
     printf("Original value: %d\n", num);
    
    
     int postDecrementedValue = --num;
     printf("After post-decrement: %d\n", postDecrementedValue);
     printf("Current value of num: %d\n", num);
    
     getch();
     return 0;
 }