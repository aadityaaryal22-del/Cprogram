//Write a program to find the largest among three numbers using nested conditional operators.

#include <stdio.h>
#include <conio.h>

int main(){
    int a,b,c,largest;

    printf("enter three number to find the largest number : ");
    scanf("%d%d%d",&a,&b,&c);

    largest=(a>b)?((a>c)?a:c):((b>c)?b:c);

    printf("largest numeber is %d",largest );

    getch();
    return 0;
}