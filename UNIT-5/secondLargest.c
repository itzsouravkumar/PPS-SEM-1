#include <stdio.h>
#include <limits.h>
int main() {
    int n,max2;
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
    } 
    for(i=0;i<n;i++) {
        if(arr[i]<max)  {
            max2=arr[i];  
        } 
    }
    printf("Second Maximum Element: %d",max2);
    return 0;
}    