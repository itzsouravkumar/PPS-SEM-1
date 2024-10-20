#include <stdio.h>

int main() {
    int age, year_of_study;
    char section;
    float marks_10th, marks_12th;
    int product, sum, difference, double_age;

    printf("Enter age:");
    scanf("%d", &age);
    printf("Enter year of study:");
    scanf("%d", &year_of_study);
    printf("Enter section:");
    scanf(" %c", &section);
    printf("Enter 10th marks:");
    scanf("%f", &marks_10th);
    printf("Enter 12th marks:");
    scanf("%f", &marks_12th);

    product = age * year_of_study;
    sum = marks_10th + marks_12th;
    difference = marks_10th - marks_12th;
    double_age = age << 1;

    printf("Product of age and year of study: %d\n", product);
    printf("Sum of 10th and 12th marks: %.2f\n", sum);
    printf("Difference of 10th and 12th marks: %.2f\n", difference);
    printf("Double the age using left shift: %d\n", double_age);

    return 0;
}
