#include <stdio.h>

int main() {
    int N, pos = 0;
    scanf("%d", &N);
    int R[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &R[i]);
    }
    for (int i = 0; i < N - 1; i++) {
        if (R[i] > R[i + 1]) {
            pos = i + 2;
            break;
        }
    }
    printf("%d\n", pos);
    return 0;
}