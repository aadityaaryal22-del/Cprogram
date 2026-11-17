//Write a program to find the smallest among three numbers using nested if.
#include <stdio.h>
#include <conio.h>

int main (){
    int num1,num2,num3;

    printf("enter three numbers ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1<num2){
        if(num1<num3){
            printf("num1 is smallest number among the three numbers ");
        }
    }
    else{
        if(num2<num3){
            printf("num2 is smallest number among the three numbers");
        }
        else{
            printf("num3 is smallest numeber among the three numebers");
        }
    }

    getch();
    return 0;
    
}