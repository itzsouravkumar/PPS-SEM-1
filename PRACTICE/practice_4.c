#include<stdio.h>
int main() {
    int s1,s2,s3,s4,s5,sum;
    float percent;
    printf("Enter the marks of each subject: ");
    scanf("%d %d %d %d %d", &s1,&s2,&s3,&s4,&s5);
    printf("Entered marks of each subject\n %d\n %d\n %d\n %d\n %d\n",s1,s2,s3,s4,s5);
    sum=s1+s2+s3+s4+s5;
    printf("Sum of marks is: %d\n",sum);
    percent=sum/5;
    printf("Percentage:%f\n",percent);
    return 0;
}