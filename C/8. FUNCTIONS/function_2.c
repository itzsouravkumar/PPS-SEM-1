//THIS PROGRAM IS TO USE LIBRARY FUNCTIONS TO CALCULATE THE AREA OF A SQUARE
#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("Enter the side of the square: ");
    scanf("%f", &a);
    printf("The area of the square is %.2f\n", pow(a,2));
    return 0;
}
