#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter the value of a, b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("The entered numbers are a=%d, b=%d and c=%d\n",a,b,c);
    if (a>b && a>c) {
        printf("a is the greatest\n");
    } else if (b>a && b>c) {
        printf("b is the greatest\n");
    } else {
        printf("c is the greatest\n");
    }
    if (a>b || a>c) {
        printf("a is the greatest\n");
    } else if (b>a || b>c) {
        printf("b is the greatest\n");
    } else {
        printf("c is the greatest\n");
    }

    if (!(a>b)) {
        printf("a is not greater than b\n");
    } else {
        printf("a is greater than b\n");
    }
    return 0;
}