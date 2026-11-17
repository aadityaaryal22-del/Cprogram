//Write a program to print:
//1
//22
//333
//4444
//55555

#include<stdio.h>
#include<conio.h>

int main (){
    int i,j;

    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
    return 0;

}