//Write a program using switch to display the day name for a number from 1–7.

#include <stdio.h>
#include <conio.h>

int main() {
    int choice;
    printf("Enter a number from 1-7 to display the day name : ");
    scanf("%d", &choice);

    switch (choice){

        case 1:
            printf("SUNDAY");
            break;
        case 2:
            printf("MONDAY");
            break;
        case 3:
            printf("TUESDAY");
            break;
        case 4:
            printf("WEDNESDAY");
            break;
        case 5:
            printf("THURSDAY");
            break;
        case 6:
            printf("FRIDAY");
            break;
        case 7:
            printf("SATURDAY");
            break;
        default:
        printf("invalid");                            
    }

    getch();
    return 0;
}    

