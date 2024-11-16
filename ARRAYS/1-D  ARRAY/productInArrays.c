#include<stdio.h>
int main() {
    int n;
    printf("Enter the size of Array: ");
    scanf("%d", &n);
    int arr[n],i,mult=1;
    printf("Enter the elements: ");
    for (i=0; i<n; i++) {
        scanf ("%d",&arr[i]);
        mult *= arr[i];
    }
    printf("The Product is %d", mult);
}