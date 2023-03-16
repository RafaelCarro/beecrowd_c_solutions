#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int Q[N + 1][N + 1];
    for (int i = 0; i < N + 1; i++) {
        for (int j = 0; j < N + 1; j++) {
            scanf("%d", &Q[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int S = 0;
            if (Q[i][j] == 1) {
                S++;
            }
            if (Q[i + 1][j] == 1) {
                S++;
            }
            if (Q[i][j + 1] == 1) {
                S++;
            }
            if (Q[i + 1][j + 1] == 1) {
                S++;
            }
            if (S >= 2)
                printf("S");
            else
                printf("U");
            S = 0;
        }
        printf("\n");
    }
    return 0;
}