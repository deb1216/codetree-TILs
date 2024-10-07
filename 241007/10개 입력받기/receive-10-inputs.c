#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i, a[10], sum=0;
    for (i=0; i<10; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
        if (a[i]==0)
            break;
    }
    printf("%d %.1lf", sum, (double)sum/i);
    return 0;
}