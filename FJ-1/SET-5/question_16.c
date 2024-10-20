#include <stdio.h>

int main() {
    int item_count = 5;
    int item_price = 10;
    int total_cost = 0;

    for (int i = 1; i <= item_count; i++) {
        if (i % 3 != 0) {
            total_cost += item_price;
        }
    }

    printf("Total amount to pay: $%d\n", total_cost);

    return 0;
}
