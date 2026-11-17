//Write a program to print numbers from 100 to 1 using a while loop.
#include<stdio.h>
#include<conio.h>

int main(){
    int i=100;

    while(i>=1){
        printf("%d\t",i);
        i--;
    }
    getch();
    return 0;
    
}