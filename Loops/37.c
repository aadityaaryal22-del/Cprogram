//Write a program to print the multiplication table of a number.
#include<stdio.h>
#include<conio.h>

int main(){
    int i,num;

    printf("enter number to find its multiplication table :\n ");
    scanf("%d",&num);

      for (i=1;i<=10;i++){

        printf("%d*%d =%d\n ",num,i,num*i);

    }
    getch();
    return 0;

}
