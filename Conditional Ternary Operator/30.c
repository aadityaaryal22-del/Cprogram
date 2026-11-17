//Write a program to check whether a student is Pass or Fail using the conditional operator.
#include <stdio.h>
#include <conio.h>

int main(){
    int num;

    printf("enter your marks : ");
    scanf("%d",&num);

    (num < 0 || num > 100) ? printf("Invalid Marks") :
    (num>=40)? printf("pass"):printf("fail");
    

    getch();
    return 0;
}