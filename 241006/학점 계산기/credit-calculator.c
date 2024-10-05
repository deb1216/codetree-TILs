#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    double sum = 0;
    scanf("%d", &n);
    double a[n];
    for (int i=0; i<n; i++) {
        scanf("%lf", &a[i]);
        sum += a[i];
    }
    double avg = sum/n;
    printf("%.1lf \n", avg);
    if (avg>=4)
        printf("Perfect");
    else if (avg>=3)
        printf("Good");
    else
        printf("Poor");
    return 0;
}