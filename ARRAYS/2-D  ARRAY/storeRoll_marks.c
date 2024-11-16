#include <stdio.h>
int main()
{
    int n, s;
    printf("Enter the number of Students: ");
    scanf("%d", &n);
    printf("Enter the number of Subjects: ");
    scanf("%d", &s);
    int a[n][s];
    for (int i = 0; i < n; i++)
    {   printf("Enter the roll no: ");
        scanf("%d", &a[i]);
        for (int j = 0; j < s; j++)
        {
            printf("Enter the marks of subject [%d]: ", j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        // printf("Marks of student having roll no %d : ",a[i]);
        for (int j = 0; j < s; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}