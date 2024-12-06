#include<stdio.h>
int main() {
    int a,b,t; //VARIABLE
    printf("Enter the numbers: "); //INPUT FROM USER
    scanf("%d %d",&a,&b);
    printf("\nBefore Swapping"); //BEFORE SWAPPING
    printf("\na=%d",a);
    printf("\nb=%d",b);
    t=a;  //PROCESS
    a=b;
    b=t;
    printf("\nAfter Swapping"); //AFTER SWAPPING (RESULT)
    printf("\na=%d",a);
    printf("\nb=%d",b);
    return 0;
}