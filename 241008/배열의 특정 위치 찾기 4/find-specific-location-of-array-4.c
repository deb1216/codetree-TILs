#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i, a[10], cnt=0, sum=0;
    for (i=0; i<10; i++) {
        scanf("%d", &a[i]);
        if (a[i]==0)
            break;
    }
    for (int j=0; j<i; j++) {
        if (a[j]%2==0) {
            cnt++;
            sum += a[j];
        }
    }
    printf("%d %d", cnt, sum);
    return 0;
}