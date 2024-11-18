//THIS CODE IS FOR PRINTING STARS IN SQUARE FORMAT
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number of rows: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}