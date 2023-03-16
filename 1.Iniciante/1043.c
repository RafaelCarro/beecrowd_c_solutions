int main() {
    double A, B, C, maiorLado;
    scanf("%lf %lf %lf", &A, &B, &C);

    if (A + B > C && A + C > B && B + C > A) {
        printf("Perimetro = %.1lf\n", A + B + C);
    }
    else {
        printf("Area = %.1lf\n", (A + B) * C / 2);
    }
}