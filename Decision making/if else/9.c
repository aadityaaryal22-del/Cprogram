//Write a program to check whether a student is eligible to vote based on age.
#include <stdio.h>
#include <conio.h>

int main (){
    int age;

    printf("enter your age ");
    scanf("%d",&age);

    if(age>=18){
        printf("can vote");

    }
    else{
        printf("cannot vote");
    }
    getch();
    return 0;

}