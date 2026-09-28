// Write a program to check whether two numbers are equal.
#include<stdio.h> 
#include<conio.h>

int main(){
    int a,b;

    printf("enter two numbers :");
    scanf("%d%d",&a,&b);

    if(a%b==0){
        printf(" equal number");
    }
    else{
        printf("not equal number");
    }
    getch();
    return 0;
    
}