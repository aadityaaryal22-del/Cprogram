//Write a program to input a character using getchar() and display it using putchar().
#include <stdio.h>
#include <conio.h>

int main (){
    char ch;

    

    printf("Enter a character: ");
    ch=getchar();

    printf("The character is: ");
    putchar(ch);
    
    getch();
    return 0;
    
}
