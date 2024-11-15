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

    // HERE I HAVE DEFINED FUNCTION POINTERS
    int (*factorialPtr)(int) = calculateFactorial;  // POINTER TO FACTORAIL FUNCTION
    int (*swapPtr)(int*, int*) = swapNumbers;       // POINTER TO SWAP FUNCTION

    printf("Enter the factorial number: ");
    scanf("%d", &number);
    factorialResult = factorialPtr(number); // CALLING FACTORIAL THROUGH POINTER
    printf("Factorial of %d is %d\n", number, factorialResult);

    printf("Enter two numbers to swap: ");
    scanf("%d %d", &num1, &num2);
    swapPtr(&num1, &num2); // CALLING SWAP THROGH POINTER
    printf("After swapping: %d %d\n", num1, num2);

    return 0;
}
