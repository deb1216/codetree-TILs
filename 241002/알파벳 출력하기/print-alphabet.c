#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    char cnt = 'A';
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            printf("%c", cnt);
            cnt++;
            if (cnt>'Z')
                cnt='A';
        }
        printf("\n");
    }
    return 0;
}