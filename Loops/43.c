//Write a program to check whether a number is an Armstrong number.
#include<stdio.h>
#include<conio.h>

int main(){
    int num,original,rem,sum=0;

    printf("enter a number :");
    scanf("%d",&num);

    if(num<0){
        printf("the number is not armstrong number ");
    }

    original=num;

    while(num!=0){
        rem=num%10;
        sum=sum+(rem^3);
        num=num/10;
    }

    if(sum==original){
        printf("the number is armstrong number ",original);
    }
    else{
        printf("the number is not armstrong number ",original);
    }

    getch();
    return 0;
}    