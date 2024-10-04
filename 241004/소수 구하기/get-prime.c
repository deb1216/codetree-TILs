#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        cnt=0;
        for (int j=1; j<=i; j++) {
            if (i%j==0)
                cnt++;
        }
        if (cnt==2)
            printf("%d ", i);
    }
    return 0;
}