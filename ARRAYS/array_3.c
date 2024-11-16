//THIS CODE IS FIND LENGTH OF REGISTRATION NUMBER USING ARRAY EG: RA2411030010049
#include <stdio.h>
#include <string.h>
int main()
{
    char reg[15];
    printf("Enter the registration number: ");
    scanf("%s", reg);
    int len = strlen(reg);
    printf("The length of the registration number is: %d", len);
    return 0;
}