//Write a program to find the maximum of two numbers using the conditional operator.
#include <stdio.h>
#include <conio.h>

int main() {
    int a,b;

    printf("enter two number to find the maximum number : ");
    scanf("%d%d",&a,&b);

    int max =(a>b)? a:b;
    
    printf("maximum number is %d",max);
    
    getch();
    return 0;
}    