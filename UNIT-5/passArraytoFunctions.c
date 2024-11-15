#include<stdio.h>
int swap();
int swap(int arr[]){
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
}
int main() {
    int x[2];
    printf("Enter the numbers want to swap: ");
    scanf("%d %d",&x[0],&x[1]);
    printf("Before Swap: %d %d\n",x[0],x[1]);
    swap(x);
    printf("After Swap: %d %d\n",x[0],x[1]);
    return 0;
}