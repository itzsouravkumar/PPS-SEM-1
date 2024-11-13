#include <stdio.h>
// FACTORIAL FUNCTION
int calculateFactorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}
// SWAPPING FUNCTION
int swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return 1;  
}

int main() {
    int number, factorialResult, num1, num2;

    printf("Enter a number for factorial: ");
    scanf("%d", &number);
    factorialResult = calculateFactorial(number); // CALLING FACTORIAL FUNCTION
    printf("Factorial of %d is %d\n", number, factorialResult);

    printf("Enter two numbers to swap: ");
    scanf("%d %d", &num1, &num2);
    swapNumbers(&num1, &num2); // CALLING SWAP FUNCTION
    printf("After swapping: %d %d\n", num1, num2);

    return 0;
}
