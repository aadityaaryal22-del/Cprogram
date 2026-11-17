//Write a program to input a number from 1–7 and display the corresponding day of the week.
#include <stdio.h>
#include <conio.h>

int main (){
    int num;

    printf("enter a number from 1-7 to display the corresponding day of the week : ");
    scanf("%d",&num);

    if(num==1){
        printf("sunday");
    }
    else if(num==2){
        printf("monday");
    }
    else if(num==3){
        printf("tuesday");
    }
    else if(num==4){
        printf("wednesday");
    }
    else if(num==5){
        printf("thursday");
    }
    else if(num==6){
        printf("friday");
    }
    else{
        printf("saturday");
    }

    getch();
    return 0;
}   