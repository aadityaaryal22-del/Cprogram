//Write a program to check whether two numbers are different.
#include<stdio.h> 
#include<conio.h>

int main(){
    int a,b;

    printf("enter two numbers :");
    scanf("%d%d",&a,&b);

    if(a%b!=0){
        printf(" different number");
    }
    else{
        printf("equal number");
    }
    getch();
    return 0;
    
}