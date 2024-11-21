#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to swap two numbers and return 1 if successful
int swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    return 1; // Returning 1 to indicate successful swap
}

int main() {
    // Declare function pointers
    int (*swapPtr)(int*, int*);  // Pointer for swap function
    long long (*factPtr)(int);   // Pointer for factorial function

    int a, b;

    printf("Enter numbers: ");
    
    // First, read the first number
    if (scanf("%d", &a) == 1) {
        // Now, check if a second number is entered
        if (getchar() == '\n') { // Check if no second number is entered
            // If only one number is entered, calculate factorial
            factPtr = factorial;
            printf("Factorial of %d is %lld\n", a, factPtr(a));
        } else {
            // If two numbers are entered, read the second number and swap
            scanf("%d", &b); // Read second number
            swapPtr = swap;
            swapPtr(&a, &b);  // Swap the numbers
            printf("After swapping: a = %d, b = %d\n", a, b);
        }
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}
