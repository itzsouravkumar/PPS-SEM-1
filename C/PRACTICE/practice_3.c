#include <stdio.h>
int main()
{
    int num, revnum = 0, rem;
    printf("Enter the number: ");
    scanf("%d", &num);
    int originalNum = num;

    while (num != 0)
    {
        rem = num % 10;
        printf("Remainder:%d\n", rem);
        revnum = revnum * 10 + rem;
        num = num / 10;
        printf("Reversed number:%d\n", revnum);
        printf("------------\n");
    }

    if (revnum == originalNum)
    {
        printf("Given number is a pallindrome number");
    }
    else
    {
        printf("Given number is not a pallindrome number");
    }
    return 0;
}