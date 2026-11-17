//Write a program to print all even numbers from 1 to 100.
#include<stdio.h>
#include<conio.h>

int main(){
    int i=1;

      while(i <= 100){
        if(i % 2 == 0)
        {
            printf("%d\t", i);
        }
        i++;
    }
    getch();
    return 0;
}