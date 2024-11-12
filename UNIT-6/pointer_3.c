//THIS PROGRAM PASSES A POINTER TO A FUNCTION TO MODIFY THE VALUE OF THE VARIABLE
#include <stdio.h>
void increment(int *ptr){
    (*ptr)++;
}
int main(){
    int num = 5;
    printf("Before: %d\n", num);
    increment(&num);
    printf("After: %d\n", num);
    return 0;
}