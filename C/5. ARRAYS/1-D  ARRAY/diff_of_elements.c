#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n], even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            even += arr[i];
        }
        else
        {
            odd += arr[i];
        }
    }
    printf("Even Sum: %d\n", even);
    printf("Odd Sum: %d\n", odd);
    printf("Difference: %d", even - odd);
    return 0;
}
