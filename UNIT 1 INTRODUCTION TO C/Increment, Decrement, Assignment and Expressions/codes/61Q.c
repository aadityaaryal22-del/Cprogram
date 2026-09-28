//Write a program demonstrating pre-increment.
#include <stdio.h>
#include <conio.h>

int main (){
    int a;

printf("enter the original value ");
scanf("%d",&a);

int preIncrementedValue = ++a;
printf("pre-incrementvalue is %d",preIncrementedValue);

getch();
return 0;

}