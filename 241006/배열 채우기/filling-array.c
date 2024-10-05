#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    for (int i=0; i<10; i++) {
        scanf("%d", &a[i]);
        if (a[i]==0) {
            for (int j=i-1; j>=0; j--) {
                printf("%d ", a[j]);
            }
            break;
        }
    }
    return 0;
}