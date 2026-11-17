//Write a program to reverse a number.
#include<stdio.h>
#include<conio.h>

int main(){
    int num,rev=0;

    printf("enter a numeber : ");
    scanf("%d",&num);

    while(num!=0){
        rev=rev*10+num%10;
        num=num/10;
    }

    printf("reverse number is %d",rev);

    getch();
    return 0;
    
}