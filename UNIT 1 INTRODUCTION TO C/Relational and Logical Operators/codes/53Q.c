//Write a program to check whether a number is less than another number.
#include<stdio.h> 
#include<conio.h>

int main(){
    int a,b;

    printf("enter two numbers :");
    scanf("%d%d",&a,&b);

    if(a<b){
        printf(" smaller number is %d",a);
    }
    else{
        printf("smaller number is %d",b);
    }
    getch();
    return 0;
    
}