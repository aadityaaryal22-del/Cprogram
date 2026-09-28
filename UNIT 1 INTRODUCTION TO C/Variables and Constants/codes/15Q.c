//write a program to input and display the character.
#include<stdio.h>
#include<conio.h>

int main(){
    char charac[10];

    printf("enter some character to print it :");
    scanf("%s",charac);

    printf("the following character is: %s",charac);

    getch();
    return 0;
}