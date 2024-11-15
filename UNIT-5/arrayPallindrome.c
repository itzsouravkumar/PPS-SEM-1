#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    int revarr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        revarr[i] = arr[n - i - 1];
        printf("%d ", revarr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] == revarr[i])
        {
            printf("\nGiven Array is Palindrome.");
        }
        else
            {printf("\nNot a Palindrome.");}
        break;
        
    }
    return 0;
}