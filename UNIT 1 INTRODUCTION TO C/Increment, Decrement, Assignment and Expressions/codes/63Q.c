////Write a program demonstrating pre-decrement.
#include <stdio.h>
#include <conio.h>

int main (){
    int a;

printf("enter the original value ");
scanf("%d",&a);

int preDecrementedValue = --a;
printf("pre-decrementvalue is %d",preDecrementedValue);

getch();
return 0;

}