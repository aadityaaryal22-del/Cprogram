//Write a program to find the factorial of a number.
#include <stdio.h>
#include <conio.h>

int main(){
    int i,n,fact=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        fact=fact*i;
    }

      printf("Factorial of %d = %d",n,fact);

      getch();
      return 0;

}