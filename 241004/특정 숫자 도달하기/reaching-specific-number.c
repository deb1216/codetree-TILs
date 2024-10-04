#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10], cnt=0, sum=0;
    for (int i=0; i<10; i++) {
        scanf("%d", &a[i]);
        if (a[i]>=250)
            break;
        cnt++;
        sum+=a[i];
    }
    printf("%d %.1f", sum, (double)sum/cnt);
    return 0;
}