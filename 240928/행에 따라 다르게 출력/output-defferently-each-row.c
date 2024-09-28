#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        if (i%2==0) {
            for (int j=0; j<n; j++) {
                cnt++;
                printf("%d ", cnt);
            }
        }
        else {
            for (int j=0; j<n; j++) {
                cnt+=2;
                printf("%d ", cnt);
            }
        }
        printf("\n");
    }
    return 0;
}