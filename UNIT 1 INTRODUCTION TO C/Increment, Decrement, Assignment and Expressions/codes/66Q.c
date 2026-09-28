// Write a program to evaluate an arithmetic expression.
#include <stdio.h>
#include <conio.h>

int main (){
    int a=10,b=4,c=2;
    int result=a+b+c*(a-b)+(a/c);

    printf("the result of the operation is %d\n",result);

    getch();
    return 0;
}