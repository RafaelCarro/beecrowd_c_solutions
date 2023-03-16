#include <stdio.h>

int main() {
    int N, p;
    scanf("%d", &N);
    int X[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
        if (i > 0 && X[i] < X[0]) {
            p = i;
            X[0] = X[i];
        }
    }
    printf("Menor valor: %d\n", X[0]);
    printf("Posicao: %d\n", p);
    return 0;
}