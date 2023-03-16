#include <stdio.h>

int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        int M, L, A, CM, CL;
        scanf("%d %d", &M, &L);
        long unsigned AM[M][N], AL[L][N];
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++)
                scanf("%lu", &AM[i][j]);
        }
        for (int i = 0; i < L; i++) {
            for (int j = 0; j < N; j++)
                scanf("%lu", &AL[i][j]);
        }
        scanf("%d %d %d", &CM, &CL, &A);
        //printf("Atributo = %d\n", A);
        //printf("Marcos = %lu\nLeonardo = %lu\n", AM[CM - 1][A - 1], AL[CL - 1][A - 1]);
        if (AM[CM - 1][A - 1] > AL[CL - 1][A - 1])
            printf("Marcos\n");
        else if (AM[CM - 1][A - 1] < AL[CL - 1][A - 1])
            printf("Leonardo\n");
        else
            printf("Empate\n");
    }
    return 0;
}