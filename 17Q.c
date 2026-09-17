//write a program using integer, float, double & character variable.
#include<stdio.h>
#include<conio.h>

int main(){
    int num;
    float numb;
    double price;
    char charac[10];

    printf("enter number to print it :");
    scanf("%d",&num);
    
    printf("enter decimel to print it :");
    scanf("%f",&numb);

    printf("Enter the price: ");
    scanf("%lf", &price);

    printf("enter some character to print it :");
    scanf("%s",charac);

    printf("the numebenr is %d ",num);
    printf("\nthe decimel is %f",numb);
    printf("\nthe price of the product is %.2lf",price);
    printf("\nthe following character is: %s",charac);

    getch();
    return 0;
}