#include <stdio.h>

int main() {
    int n, age, sum = 0;
    float average;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter age of student %d: ", i + 1);
        scanf("%d", &age);
        sum += age;
    }

    average = (float)sum / n;

    printf("The average age of the class is: %.2f\n", average);

    return 0;
}
