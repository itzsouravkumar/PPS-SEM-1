// A C program to reverse the words in a sentence without changing the order of characters in each word.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    str[20] = '\0';
    
    int size = 0, k = 0;
    while (str[k] != '\0')
    {
        size++;
        k++;
    }
    printf("The size of string is: %d\n", size);

    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("The reverse string is: ");
    puts(str);

    return 0;
}