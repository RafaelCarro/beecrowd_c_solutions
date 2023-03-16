#include <stdio.h>

int main() {
    int N, X, p;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        p = 0;
        scanf("%d", &X);
        for (int j = 2; j < X; j++) {
            if (X % j == 0) {
                p++;
            }
        }
        if (p == 0) {
            printf("%d eh primo\n", X);
        }
        else {
            printf("%d nao eh primo\n", X);
        }
    }
    return 0;
}