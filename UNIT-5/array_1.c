#include <stdio.h>
#include <limits.h>
int main()
{
    int sum = 0, size = 5;
    int arr[size];
    printf("Enter five numbers:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("The sum of given five numbers are: %d", sum);
    return 0;
}