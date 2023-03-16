#include <stdio.h>

int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        double sumP = 0, sumC = 0;
        int M[N], C[N];
        for (int i = 0; i < N; i++) {
            scanf("%d %d", &M[i], &C[i]);
            sumP += M[i] * C[i];
            sumC += C[i];
        }
        printf("%.4lf\n", sumP / sumC / 100);
    }
    return 0;
}