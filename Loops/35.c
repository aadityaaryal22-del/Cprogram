//Write a program to find the sum of first N natural numbers.

#include<stdio.h>
#include<conio.h>

int main(){
    int i,n,sum=0;

    printf("enter numeber to find it sum :");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        sum=sum+i;

    }
    printf("first N natural number =%d",sum);
    
    getch();
    return 0;
}