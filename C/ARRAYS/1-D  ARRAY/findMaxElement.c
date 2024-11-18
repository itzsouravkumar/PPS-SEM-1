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
    int max=INT_MIN;
    for(i=0;i<n;i++) {
        if(arr[i]>max)  {
            max=arr[i];  
        } 
    } printf("Maximum Element: %d",max);
    return 0;
}    