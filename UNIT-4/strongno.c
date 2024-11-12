#include<stdio.h>
int main() {
    int num,fact,add=0,old;
    printf("Enter a number: ");
    scanf("%d",&num);
    old=num;
    while (num!=0) {
        int rem=num%10;
        fact=1;
        for (int i=1;i<=rem;i++) {
            fact=fact*i;}
        add=add+fact;
        num=num/10;
    }
    if (add==old) {
        printf("%d is a Strong number\n",old);}
    else {printf("%d is not a Strong number\n",old);
    return 0;
    }
}