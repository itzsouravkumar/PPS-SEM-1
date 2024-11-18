//THIS PROGRAM IS TO DEMONSTRATE HOW A POINTER CAN BE USED TO ACCESS ELEMENTS OF AN ARRAY
#include <stdio.h>
int main()
{
    int arr[3] = {10, 20, 30};
    int *ptr=arr;
    for (int i = 0; i < 3; i++)
    {
        printf("Element %d : %d\n", i, *ptr+i);
    }
    return 0;
}
