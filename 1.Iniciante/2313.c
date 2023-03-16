#include <stdio.h>


int main() {
    double A, B, C, op;
    scanf("%lf %lf %lf", &A, &B, &C);

    if (B > A && B > C) {
        op = B;
        B = A;
        A = op;
    }
    else if (C > A && C > B) {
        op = C;
        C = A;
        A = op;
    }

    if (A + B > C && B + C > A && A + C > B) {
        if (A == B && B == C && A == C)
            printf("Valido-Equilatero\n");
        else if (A != B && B != C && A != C)
            printf("Valido-Escaleno\n");
        else
            printf("Valido-Isoceles\n");

        if (A * A == B * B + C * C)
            printf("Retangulo: S\n");
        else
            printf("Retangulo: N\n");

    }
    else {
        printf("Invalido\n");
    }
}