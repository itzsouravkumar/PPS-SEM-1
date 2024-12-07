#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str); // Read input string

    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("The length of the string is: %d\n", count);
    return 0;
}
