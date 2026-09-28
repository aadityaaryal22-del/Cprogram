////write a c program to print a formated student information table 
#include <stdio.h>

int main() {

    printf("+------+----------------------+-----+------------+\n");
    printf("| ID   | Name                 | Age | Marks      |\n");
    printf("+------+----------------------+-----+------------+\n");

    printf("| %-4d | %-20s | %3d | %10.2f |\n", 1, "Aaditya Aryal", 19, 85.50);
    printf("| %-4d | %-20s | %3d | %10.2f |\n", 2, "Ram Sharma",    21, 78.75);
    printf("| %-4d | %-20s | %3d | %10.2f |\n", 3, "Sita Thapa",    19, 92.25);

    printf("+------+----------------------+-----+------------+\n");

    return 0;
}
