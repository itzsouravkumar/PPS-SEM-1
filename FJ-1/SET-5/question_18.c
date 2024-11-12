#include <stdio.h>

int main() {
    int temp, no_of_days = 7;

    for (int i = 0; i < no_of_days; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%d", &temp);

        if (temp > 30) {
            printf("Temperature exceeds 30 degrees on day %d: %d degrees\n", i + 1, temp);
        }
    }

    return 0;
}
