//Write a program to find the sum of all even numbers from 1 to N.
#include<stdio.h>
#include<conio.h>

int main (){
    int i=1,num,sum=0;

    printf("enter the number you want to print : ");
    scanf("%d",&num);

    while(i<=num){
        if(i%2==0){
            sum=sum+i;
        }
        i++;
    }
    printf("the sum of n even number is %d",sum);

    getch();
    return 0;
}