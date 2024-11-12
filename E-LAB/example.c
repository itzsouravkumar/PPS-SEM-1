#include <stdio.h>
int t;
int main() {
    int men, women, pref[10][10], col, i, j, cnt;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &men, &women);
        if (men >= 100 || women >= 100) {
            puts("Invalid Input");
        else {
            for (i = 0; i < men; i++)
            for (j = 0; j < women; j++)
                scanf(" %1d", &pref[i][j]);
            col = 0;
            for (j = 0; j < women; j++) {
            cnt = 0;
            for (i = 0; i < men; i++) cnt += pref[i][j];
            col += cnt * (cnt - 1) / 2;
        }
        printf("%d\n", col);
    }
}

#include <stdio.h>
int main() {
    int t;
    int men, women, pref[10][10], col, i, j, cnt;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &men, &women);
        if (men >= 100 || women >= 100) {
            puts("Invalid Input");
            continue;
        }
        for (i = 0; i < men; i++)
            for (j = 0; j < women; j++)
                scanf(" %1d", &pref[i][j]);
        col = 0;
        for (j = 0; j < women; j++) {
            cnt = 0;
            for (i = 0; i < men; i++) cnt += pref[i][j];
            col += cnt * (cnt - 1) / 2;
        }
        printf("%d\n", col);
    }
}
