#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    int arr[n],i;
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);   
    }
    int min = INT_MAX;
    for(i=0;i<n;i++) {
        if(arr[i]<min) {
            min=arr[i];
        }
    }printf("Minimum Element: %d",min);
    return 0;
}