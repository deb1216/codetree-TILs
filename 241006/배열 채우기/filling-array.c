#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i, a[10];
    for (i=0; i<10; i++) {
        scanf("%d", &a[i]);
        if (a[i]==0)
            break;
    }
    for (int j=i-1; j>=0; j--)
        printf("%d ", a[j]);
    return 0;
}