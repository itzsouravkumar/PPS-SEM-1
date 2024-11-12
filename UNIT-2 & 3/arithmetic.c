#include<stdio.h>
int main() {
    //DECLARE VARIABLES
    int a,b;
    //INPUT
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    //PROCESS
    int sum = a+b;
    int diff = a-b;
    int multiple=a*b;
    int div=a/b;
    //OUTPUT
    printf("a=%d, b=%d\n",a,b);
    printf("Sum of a and b is: %d\n",sum);
    printf("Difference of a and b is: %d\n",diff);
    printf("Multiplication of a and b is: %d\n",multiple);
    printf("Division of a by b is: %d\n",div);
    return 0;
}