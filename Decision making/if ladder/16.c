//Write a program to input marks and display the grade according to the following:
//Marks Grade
//90–100 A
//75–89 B
//60–74 C
//40–59 D
//Below 40 Fail
 #include <stdio.h>
#include <conio.h>

int main (){
    int num;

    printf("enter a number ");
    scanf("%d",&num);

    if(num>=90&&num<=100){
        printf("A");

    }
    else if (num>=75&&num<=89){
        printf("B");
    }
    else if(num>=60&&num<=74){
        printf("C");
    }
    else if(num>=40&&num<=59){
        printf("D");
    }
    else if(num<40){
        printf("fail");
    }
    else{
        printf("default");
    }
    
    getch();
    return 0;

}