#include <stdio.h>
int main()
{
    int sum = 0, diff;
    int marks[5];
    for (int i = 1; i <=5; i++)
    {
        printf("Enter the marks of Subject %d: ", i);
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }
    if (sum == 200)
    {
        printf("PASS");
    }
    else
    {
        diff = 500 - sum;
        printf("FAIL\n");
        printf("Marks required to PASS: %d", diff);
    }
    return 0;
}