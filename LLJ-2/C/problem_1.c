#include <stdio.h>
int main()
{   // TO TAKE INPUT FROM USER
    int n; 
    printf("Enter any odd number: "); 
    scanf("%d", &n); 
// LOOP TO PRINT THE PATTERN
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            if (i == j || i + j == n + 1) 
                printf("* "); 
            else
                printf("  "); 
        }
        printf("\n"); 
    }
    return 0; 
}