//Write a program to check whether a number is even or odd.
#include <stdio.h>
#include <conio.h>

int main (){
    int num;

    printf("enter a number ");
    scanf("%d",&num);

    if(num%2==0){
        printf("the number is even %d",num);

    }
    else{
        printf("the number is odd %d",num);
    }
    getch();
    return 0;

}