//Write a program to print all prime numbers between 1 and 100.

#include <stdio.h>
#include <conio.h>

int main() {
    int j,i,count;

    for(i=1;i<=100;i++){
        count=0;

        for(j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }

        if(count==2){
            printf("%d\t",i);
        }

    }

    getch();
    return 0;
}    