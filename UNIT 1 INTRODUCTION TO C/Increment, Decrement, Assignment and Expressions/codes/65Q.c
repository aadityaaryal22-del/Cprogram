// Write a program demonstrating compound assignment operators.
#include <stdio.h>
#include <conio.h>

int main(){
    int num=10;
    printf("original value :%d\n",num);

    num += 7;
    printf("after += 7 :%d\n", num);

    num -=3;
    printf("after -= 3 :%d\n", num);

    num *=6;
    printf("after *=6 :%d\n",num);

    num/=2;
    printf("after /=2 :%d\n",num);

    getch();
    return 0;
}