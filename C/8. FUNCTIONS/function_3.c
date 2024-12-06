// THIS CODE IS TO CALCULATE THE FACTORIAL OF A NUMBER TAKE FROM THE USER
#include<stdio.h>
int n;
int factorial()
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, factorial());
    return 0;
}