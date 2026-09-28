//write a c program to declare variable of different data types 
#include<stdio.h>
#include<conio.h>

int main(){
    float a;
    char name[20];

    printf("enter a number ");
    scanf("%f",&a);
    printf("\nenter name");
    scanf("%s",name);

    printf("your number is %f",a);
    printf("\nyour name is  %s",name);
    getch();
    return 0;
}
 