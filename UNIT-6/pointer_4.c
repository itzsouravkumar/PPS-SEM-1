//THIS PROGRAM IS TO DO SORTING (SELECTION SORT) OF THREE NAMES USING POINTER
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *name[3], *temp;
    name[0] = (char *)malloc(20 * sizeof(char));
    name[1] = (char *)malloc(20 * sizeof(char));
    name[2] = (char *)malloc(20 * sizeof(char));
    printf("Enter the first name: ");
    gets(name[0]);
    printf("Enter the second name: ");
    gets(name[1]);
    printf("Enter the third name: ");
    gets(name[2]);
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }
    printf("The sorted names are: \n");
    for (int i = 0; i < 3; i++)
    {
        puts(name[i]);
    }
    return 0;
}