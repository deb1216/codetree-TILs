#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end, cntj, cnti=0;
    scanf("%d %d", &start, &end);
    for (int i=start; i<=end; i++) {
        cntj = 0;
        for (int j=1; j<=i; j++) {
            if (i%j==0)
                cntj++;
        }
        if (cntj==3)
            cnti++;
    }
    printf("%d", cnti);
    return 0;
}