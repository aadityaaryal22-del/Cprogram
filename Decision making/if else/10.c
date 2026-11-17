// Write a program to check whether a number is divisible by both 2 and 3.
#include <stdio.h>
#include <conio.h>

int main (){
    int num;

    printf("enter a number");
    scanf("%d",&num);

    if(num%2==0&&num%3==0){
        printf("number is divisible by both 2 and 3");

    }
    else {
        printf("number is not divisible by both 2 and 3 ");
    }

    getch();
    return 0;
    
}

