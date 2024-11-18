#include <stdio.h>
int main()
{
    int n, x, count = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {   
            for (int k = 1; k < n; k++) {
            if (arr[i] + arr[j] + arr [k] == x)
            {
                count++;
                printf("%d %d %d\n", arr[i],arr[j],arr[k]);
            }
            }
        }
    }
    printf("Total pairs: %d", count);
    return 0;
}