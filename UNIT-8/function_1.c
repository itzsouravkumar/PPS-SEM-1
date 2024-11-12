//THIS PROGRAM IS TO FIND SUM OF TWO NUMBERS USING FUNCTIONS
#include<stdio.h>
int sum(int x, int y)
{
    return x + y;
}
int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    int c = sum(a,b);
    printf("The sum of a and b is %d\n", c);
    return 0;
}