#include <stdio.h>
#include <stdlib.h>

int main() {

    int P, N, v = 0;
    scanf("%d %d", &P, &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < N - 1; i++) {
        if (P < abs(A[i] - A[i + 1]))
            v++;
    }
    if (v == 0)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");
    return 0;
}