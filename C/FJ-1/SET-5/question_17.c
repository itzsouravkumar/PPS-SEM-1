#include <stdio.h>

int main() {
    int desks = 8;
    int desks_per_row = 2;
    int complete_rows = desks / desks_per_row;

    printf("Complete rows: %d\n", complete_rows);

    return 0;
}