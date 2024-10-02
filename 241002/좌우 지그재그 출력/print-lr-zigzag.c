#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=1;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        if (i%2==0) {
            for (int j=0; j<n; j++) {
                printf("%d ", cnt);
                cnt++;
            }
            cnt+=n;
        }
        else {
            for (int j=1; j<=n; j++) {
                printf("%d ", cnt-j);
            }
        }
        printf("\n");
    }
    return 0;
}