int main() {
    double A, B, C, Sa, Sb, Sc, Sd, Se, pi = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);
    Sa = A * C / 2;
    Sb = pi * C * C;
    Sc = (A + B) * C / 2;
    Sd = B * B;
    Se = A * B;
    printf("TRIANGULO: %.3lf\n", Sa);
    printf("CIRCULO: %.3lf\n", Sb);
    printf("TRAPEZIO: %.3lf\n", Sc);
    printf("QUADRADO: %.3lf\n", Sd);
    printf("RETANGULO: %.3lf\n", Se);
    return 0;
}