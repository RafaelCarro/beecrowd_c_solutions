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
        if (A * A < B * B + C * C)
            printf("TRIANGULO ACUTANGULO\n");
        else if (A * A == B * B + C * C)
            printf("TRIANGULO RETANGULO\n");
        else
            printf("TRIANGULO OBTUSANGULO\n");

        if (A == B && B == C && A == C)
            printf("TRIANGULO EQUILATERO\n");
        else if (A != B && B != C && A != C)
            op = 0;
        else
            printf("TRIANGULO ISOSCELES\n");
    }
    else {
        printf("NAO FORMA TRIANGULO\n");

    }
}