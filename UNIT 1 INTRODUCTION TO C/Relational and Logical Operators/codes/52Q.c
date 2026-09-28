//Write a program to check whether one number is greater than another.
#include<stdio.h> 
#include<conio.h>

int main(){
    int a,b;

    printf("enter two numbers :");
    scanf("%d%d",&a,&b);

    if(a>b){
        printf(" greater number is %d",a);
    }
    else{
        printf("greater number is %d",b);
    }
    getch();
    return 0;
    
}