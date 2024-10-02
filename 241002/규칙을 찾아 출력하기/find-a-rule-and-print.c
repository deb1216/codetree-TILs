#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        if (i==1 || i==n) {
            for (int j=0; j<n; j++)
                printf("* ");
        }
        else {
            for (int j=1; j<i; j++)
                printf("* ");
            for (int j=n-i; j>=1; j--)
                printf("  ");
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}