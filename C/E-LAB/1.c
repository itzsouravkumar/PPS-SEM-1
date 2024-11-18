#include <stdio.h>

int main() {
    int unitconsumed, costperunit, totalbillamount;
    
    // printf("Enter the unit consumed (1-500) & cost per unit (2-10): ");
    scanf("%d %d", &unitconsumed, &costperunit);
    
    // Check if inputs are within the specified ranges
    if (unitconsumed < 1 || unitconsumed > 500 || costperunit < 2 || costperunit > 10) {
        printf("Invalid input\n");
    } else {
        totalbillamount = unitconsumed * costperunit;
        printf("%d\n", totalbillamount);
    }
    
    return 0;
}
