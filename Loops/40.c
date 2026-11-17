//Write a program to count the number of digits in a number.
#include <stdio.h>
#include <conio.h>

int main(){
    int n, count=0;

    printf("enter numbers : \n");
    scanf("%d",&n);

    if(n==0){
        count=1;
    }

    else{
        while(n!=0){
            n=n/10;
            count++;
        }
    }

    printf("total numbers of digits is= %d",count);

    getch();
    return 0;

}