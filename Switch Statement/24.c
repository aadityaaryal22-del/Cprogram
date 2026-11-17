//Write a program using switch to display the month name for a number from 1–12.
#include <stdio.h>
#include <conio.h>

int main() {
    int choice;
    printf("Enter a number from 1-12 to display the months name : ");
    scanf("%d", &choice);

    switch (choice){

        case 1:
            printf("JANUARY");
            break;
        case 2:
            printf("FEBRUARY");
            break;
        case 3:
            printf("MARCH");
            break;
        case 4:
            printf("APRIL");
            break;
        case 5:
            printf("MAY");
            break;
        case 6:
            printf("JUNE");
            break;
        case 7:
            printf("JULY");
            break;
        case 8:
            printf("AUGUST");
            break;  
        case 9:
            printf("SEPTEMBER");
            break;
        case 10:
            printf("OCTOBER");
            break;
        case 11:
            printf("NOVERMBER");
            break;
        case 12:
            printf("DECEMBER");
            break;                             
        default:
        printf("invalid");                            
    }

    getch();
    return 0;
}    
