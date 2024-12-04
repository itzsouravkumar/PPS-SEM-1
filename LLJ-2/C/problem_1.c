// A C program to print a star cross pattern for a given odd number n

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any odd number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || i + j == n + 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}