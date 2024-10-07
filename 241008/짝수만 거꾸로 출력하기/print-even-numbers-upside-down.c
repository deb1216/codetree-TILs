#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, i;
    scanf("%d", &n);
    int a[100];
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    for (int j=i-1; j>=0; j--) {
        if (a[j]%2==0)
            printf("%d ", a[j]);
    }
    return 0;
}