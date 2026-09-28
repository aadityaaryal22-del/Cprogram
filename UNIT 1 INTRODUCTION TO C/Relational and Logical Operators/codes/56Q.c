//Write a program using the logical AND operator.
#include<stdio.h> 
#include<conio.h>

int main(){
    int a,b;

    printf("enter two numbers :");
    scanf("%d%d",&a,&b);

    if(a>5&&b>7){
        printf("true");
        
    }
    else{
        printf("false");
    }
    getch();
    return 0;
    
}//fifo first in first out