//THIS CODE IS FOR FINDING ALL STRONG NUMBERS IN GIVEN RANGE TAKEN FROM USER AND DISPLAY ALL THE ARMSTRONG NUMBERS BETWEEN THEM BY USING FUNCTIONS
#include<stdio.h>

int check_armstrong(int n)
{
    int sum = 0, temp = n;
    while (n > 0)
    {
        int rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }
    return sum == temp;
}
int main() {
    int start_range, end_range;
    scanf("%d %d", &start_range, &end_range);
    int i = start_range;
    if (start_range < 0 || start_range > 50 || end_range < 0 || end_range > 100) {
        printf("Invalid input\n");
    } else {
        while (i <= end_range) {
            if (check_armstrong(i)) {
                printf("%d\n", i);
            }
            i++;
        }
    }
    }
