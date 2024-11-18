// THIS CODE IS TO FIND MAXIMUM AND MINIMUM ELEMENT IN AN ARRAY
#include <stdio.h>
#include <limits.h>
int main()
{
    int size = 5;
    int arr[size];
    printf("Enter five numbers:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = INT_MIN, max = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > min)
        {
            min = arr[i];
        }
        if (arr[i] < max)
        {
            max = arr[i];
        }
    }
    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);
    return 0;
}