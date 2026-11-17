//Write a program to input an integer, float, character, and double value and display all values using appropriate format specifiers.
#include <stdio.h>
#include <conio.h>

int main (){
    int a=3;
    float b=4;
    char c= 't';
    double d=8.77777;

    printf("integer is %d\n",a);
    printf("float is %f\n",b);
    printf("character is %c\n",c);
    printf("double is %f",d);

    getch();
    return 0;
    
}