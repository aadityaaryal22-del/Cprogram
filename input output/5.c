//Write a program to input a character and display its ASCII value.
#include <stdio.h>
#include <conio.h>

int main(){
    char ch1;

    printf("enter a characters : ");
    scanf("%c",&ch1);

    printf("\nCharacter\tASCII Value\n");
    printf("%c\t\t%d\n", ch1, ch1);

    getch();
    return 0;
}



   