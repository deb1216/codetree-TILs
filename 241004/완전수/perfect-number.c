#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end, cnt=0, sum=0;
    scanf("%d %d", &start, &end);
    for (int i=start; i<=end; i++) {
        for (int j=1; j<i; j++) {
            if (i%j==0)
                sum+=j;
        }
        if (sum==i)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}