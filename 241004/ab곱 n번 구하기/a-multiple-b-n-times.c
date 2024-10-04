#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,a,b;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d %d",&a,&b);
        int prod=1;
        for (int j=a; j<=b; j++) {
            prod *= j;
        }
        printf("%d \n", prod);
    }
    return 0;
}