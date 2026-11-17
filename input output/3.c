//Write a program to input two integers and display their sum, difference, product, and quotient.
#include <stdio.h>
#include <conio.h>

int main (){
    int a=10,b=5,sum,diff,prod,quot;

    sum=a+b;
    diff=a-b;
    prod=a*b;
    quot=a/b;

    printf("the sum is %d\n",sum);
    printf("the difference is %d\n",diff);
    printf("the product is %d\n",prod);
    printf("the quotient is %d\n",quot);



    getch();
    return 0;
    
}