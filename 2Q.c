//write a program to print your name,age,and address
#include <stdio.h>
#include <conio.h>

void main(){
    char name[10];
    int age;
    char address[10];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter your address: ");
    scanf("%s", address);

    printf("\nYour Information:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Address: %s", address);

    return 0;
}