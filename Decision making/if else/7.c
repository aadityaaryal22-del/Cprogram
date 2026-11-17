//Write a program to check whether a number is positive.
#include <stdio.h>
#include <conio.h>

int main (){
    int num;

    printf("enter a number ");
    scanf("%d",&num);

    if(num>0){
        printf("the number is positive %d",num);

    }
    getch();
    return 0;

}