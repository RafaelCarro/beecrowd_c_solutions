#include <stdio.h>

int main() {
    int N;
    double St = 0, Bt = 0, At = 0, Sa = 0, Ba = 0, Aa = 0;
    char trash[12];
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", trash);
        double S, B, A, S1, B1, A1;
        scanf("%lf %lf %lf %lf %lf %lf", &S, &B, &A, &S1, &B1, &A1);
        St += S;
        Bt += B;
        At += A;
        Sa += S1;
        Ba += B1;
        Aa += A1;
    }
    printf("Pontos de Saque: %.2lf %%.\n", 100 * Sa / St);
    printf("Pontos de Bloqueio: %.2lf %%.\n", 100 * Ba / Bt);
    printf("Pontos de Ataque: %.2lf %%.\n", 100 * Aa / At);
    return 0;
}