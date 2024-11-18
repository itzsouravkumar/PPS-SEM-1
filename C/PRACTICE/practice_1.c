#include <stdio.h>
int main()
{
    int value, count = 0;
    printf("Enter a number: ");
    scanf("%d", &value);
    while (value != 0)
    {
        value /= 10;
        count++;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}