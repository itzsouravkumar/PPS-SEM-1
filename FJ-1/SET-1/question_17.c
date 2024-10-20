#include <stdio.h>

int main() {
    int number, result;

    printf("Enter an integer: ");
    scanf("%d", &number);

    result = number + 10;
    result = result * 2;
    result = result - 5;
    result = result / 3;

    printf("Final result: %d\n", result);

    return 0;
}
