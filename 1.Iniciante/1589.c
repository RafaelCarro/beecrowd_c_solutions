#include <stdio.h>

int main() {
    int N, R1, R2;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &R1, &R2);
        printf("%d\n", R1 + R2);
    }
    return 0;
}