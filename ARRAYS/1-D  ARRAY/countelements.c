#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int max = 8;
        if (arr[i] > max)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}