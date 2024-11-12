// THIS CODE IS TO FIND ARMSTRONG NUMBER BY USING FUNCTION
#include <stdio.h>
#include <math.h>

int armstrong(int num)
{
    int sum = 0;
    int temp = num;
    while (num > 0)
    {
        int rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }
    if (temp == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (armstrong(n))
    {
        printf("The number is an Armstrong number");
    }
    else
    {
        printf("The number is not an Armstrong number");
    }
    return 0;
}
