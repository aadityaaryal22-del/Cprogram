//write a program program to display ASCII value of the characters
#include <stdio.h>

int main() {
    char ch1, ch2, ch3;

    printf("Enter three characters: ");
    scanf("%c %c %c", &ch1, &ch2, &ch3);

    printf("\nCharacter\tASCII Value\n");
    printf("%c\t\t%d\n", ch1, ch1);
    printf("%c\t\t%d\n", ch2, ch2);
    printf("%c\t\t%d\n", ch3, ch3);

    return 0;
}