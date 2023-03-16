#include <stdio.h>

int main() {
    int T, I, maior_inscricao;
    float N, maior_nota = 0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %f", &I, &N);
        if (N > maior_nota) {
            maior_nota = N;
            maior_inscricao = I;
        }
    }
    if (maior_nota >= 8)
        printf("%d\n", maior_inscricao);
    else
        printf("Minimum note not reached\n");
    return 0;
}