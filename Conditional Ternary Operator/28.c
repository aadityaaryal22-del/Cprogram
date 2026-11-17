//Write a program to check whether a number is even or odd using the conditional operator.
#include<stdio.h>
#include<conio.h>

int main(){
    int a,b;

    printf("enter number to find the odd and even : ");
    scanf("%d",&a);

    (a%2==0)? printf("even"):printf("odd");

    getch();
    return 0;
}