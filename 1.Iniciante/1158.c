#include <stdio.h>

int main() {
    int N, X, Y;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int sum = 0;
        scanf("%d %d", &X, &Y);
        if (X % 2 == 0) {
            for (int j = X + 1; j < X + (2 * Y); j += 2) {
                sum += j;
            }
        }
        else {
            for (int j = X; j < X - 1 + (2 * Y); j += 2) {
                sum += j;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}