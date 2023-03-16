#include <stdio.h>

int main()
{
    int N, M, X = 0, Y = 0;
    scanf("%d %d", &N, &M);
    int S[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &S[i][j]);
        }
    }

    for (int i = 1; i < N - 1; i++) {
        for (int j = 1; j < M - 1; j++) {
            if (S[i][j] == 42) {
                if (S[i - 1][j - 1] == 7 && S[i - 1][j] == 7 && S[i - 1][j + 1] == 7
                    && S[i][j - 1] == 7 && S[i][j + 1] == 7
                    && S[i + 1][j - 1] == 7 && S[i + 1][j] == 7 && S[i + 1][j + 1] == 7) {
                    X = i + 1;
                    Y = j + 1;
                }
            }
        }
    }

    printf("%d %d\n", X, Y);

    return 0;
}