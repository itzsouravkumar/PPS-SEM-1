// THIS PROGRAM IS TO DEMONSTRATE THE USE OF STRING FUNCTIONS
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = "Hello";
    char str2[20] = "World !";
    printf("The length of str1 is %d\n", strlen(str1));
    printf("The length of str2 is %d\n", strlen(str2));
    printf("The copy of str1 to str2 is %s\n", strcpy(str2, str1));
    return 0;
}