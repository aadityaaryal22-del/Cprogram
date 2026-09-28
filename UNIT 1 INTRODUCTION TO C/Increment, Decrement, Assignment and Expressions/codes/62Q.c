//Write a program demonstrating post-increment.
#include <stdio.h>
#include <conio.h>

int main (){
    int a=6;


    printf("the original value :%d\n",a);

    int postIncrementedValue = a++;
    printf("post-incrementvalue is %d",postIncrementedValue);
    printf("Current value of num: %d\n", a);

    getch();
    return 0;

}