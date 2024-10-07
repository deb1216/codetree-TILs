#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, a[4], cnt=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        double sum=0;
        for (int j=0; j<4; j++) {
            scanf("%d", &a[j]); 
            sum += a[j];
        }
        if (sum/4 >= 60) {
            printf("pass \n");
            cnt++;
        }
        else
            printf("fail \n");
    }
    printf("%d", cnt);
    return 0;
}