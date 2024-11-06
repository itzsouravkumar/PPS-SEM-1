#include <stdio.h>
#include <math.h>
int main()
{
    long int q,start,end;
    scanf("%ld",&q);
    if(q<=0||q>=100) {
        printf("Invalid Input");
    } else {
        for (long int i=0; i<q; i++) {
            scanf("%ld %ld", &start, &end);
            int count = 0;
            for (int j=(int)sqrt(start); j*j<=end; j++) {
                if (j*j >= start) {
                    count++;
                }
            }
            printf("%d\n", count);
        }
    }
    return 0;
}