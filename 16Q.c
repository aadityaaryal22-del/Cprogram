//write a program to input and display name.
#include<stdio.h>
#include<conio.h>

int main(){
    char name[10];

    printf("enter your name to print it :");
    scanf("%s",name);

    printf("your name is: %s",name);

    getch();
    return 0;
}