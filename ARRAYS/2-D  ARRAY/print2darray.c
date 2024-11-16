#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of Array: ");
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Entered Array:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}