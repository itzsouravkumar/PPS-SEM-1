#include <stdio.h>
#include <stdbool.h>

int main()
{
    int temp1, temp2;
    bool result;

    printf("Enter first temperature: ");
    scanf("%d", &temp1);

    printf("Enter second temperature: ");
    scanf("%d", &temp2);

    result = (temp1 < 0 && temp2 > 100) || (temp1 > 100 && temp2 < 0);

    if (result)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}
