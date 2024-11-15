#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of Array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = arr[i] + 10;
        }
        else
        {
            arr[i] = arr[i] * 2;
        }
    }
    printf("Modified array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}