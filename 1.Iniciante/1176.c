#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    long long int F[60];
    F[0] = 0, F[1] = 1;
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        for (int j = 2; j <= N; j++) {
            F[j] = F[j - 1] + F[j - 2];
        }
        printf("Fib(%d) = %lld\n", N, F[N]);
    }

    return 0;
}