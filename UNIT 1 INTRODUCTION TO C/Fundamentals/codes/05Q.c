////write a c program to print college name 5 times
#include<stdio.h>
#include<conio.h>

int main(){
    int i;
    char name[20];

    printf("enter you college name to print it 5 times");
    scanf("%s",&name);
    
    for(i=1;i<=5;i++){
        printf("%s");
        printf("\n");
    }
    return 0;
}
