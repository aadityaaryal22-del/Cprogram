//Write a program to check whether a student has passed, failed, or passed with distinction.
#include <stdio.h>
#include <conio.h>

int main (){
    int marks;

    printf("enter your marks to check you are pass or fail:");
    scanf("%d",&marks);

    if(marks>=80){
        printf("you have passed with distinction");
    }
    else{
        if(marks>=40){
            printf("you have passed ");
        }
        else{
            printf("you have failed");
        }
        
    }
    getch();
    return 0;
}    