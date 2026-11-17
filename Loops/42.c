//Write a program to check whether a number is a palindrome.
#include<stdio.h>
#include<conio.h>

int main(){
    int num,original,rev=0;

    printf("enter a numeber : ");
    scanf("%d",&num);

    if(num<0){
      printf("the number is not palindrome ");
    }

    original=num;

    while(num!=0){
        rev=rev*10+num%10;
        num=num/10;
    }

    if(original==rev){
        printf("the number is palindrome",original);
    }
    else{
        printf("the number is not palindrome",original);
    }

    getch();
    return 0;
    
}