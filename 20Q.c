//write a C program to calculate the area of a circle using a constant for pi
#include <stdio.h>
#include <conio.h>

int main() {
    const float PI = 3.14159;
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("The area of the circle is: %.2f", area);

    getch();
    return 0;
}
