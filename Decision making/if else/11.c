//Write a program to check whether a student has passed or failed based on marks.
#include <stdio.h>
#include <conio.h>

int main (){
    int marks;

    printf("enter your marks to check you are pass or fail:");
    scanf("%d",&marks);

    if(marks>=40){
        printf("you are pass");
    }
    else{
        printf("you are fail");
    }
    getch();
    return 0;
}    