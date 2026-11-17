//Write a program to check whether a number is positive, negative, or zero.
#include <stdio.h>
#include <conio.h>

int main (){
    int num;

    printf("enter a number ");
    scanf("%d",&num);

    if(num>0){
        printf("the number is positive");

    }
    else if (num<0){
        printf("the numeber is negetive");
    }
    else{
        printf("the numeber is zero ");
    }
    
    getch();
    return 0;

}