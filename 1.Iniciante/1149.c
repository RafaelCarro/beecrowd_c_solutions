#include <stdio.h>

int main() {
    int A, N, ver = 0, sum = 0;
    scanf("%d", &A);
    while (ver == 0) {
        scanf("%d", &N);
        if (N > 0) {
            ver++;
            break;
        }
    }

    for (int i = 0; i < N; i++) {
        sum += A + i;
    }
    printf("%d\n", sum);
    return 0;
}