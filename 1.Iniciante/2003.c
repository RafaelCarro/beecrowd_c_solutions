#include <stdio.h>

int main() {
    char pontos;
    int H, M, A;
    while (scanf("%d", &H) != EOF) {
        scanf("%c", &pontos);
        scanf("%d", &M);
        A = 60 * H + M + 60 - 480;
        if (A > 0)
            printf("Atraso maximo: %d\n", A);
        else
            printf("Atraso maximo: 0\n");
    }
}