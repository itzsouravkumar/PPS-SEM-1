//THIS PROGRAM IS TO FIND LENGTH OF A STRING USING POINTERS
#include <stdio.h>
int main()
{
    char reg[15];
    char *ptr;
    int count = 0;
    printf("Enter the registration number: ");
    scanf("%s", reg);
    ptr = reg;
    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    printf("Length of registration number is %d\n", count);
    return 0;
}
