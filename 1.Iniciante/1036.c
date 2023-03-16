int main() {
    double A, B, C, delta, x1, x2;
    scanf("%lf %lf %lf", &A, &B, &C);

    delta = (B * B) - 4 * A * C;

    if (delta >= 0 && A != 0) {
        x1 = (-B + sqrt(delta)) / (2 * A);
        x2 = (-B - sqrt(delta)) / (2 * A);
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }
    else {
        printf("Impossivel calcular\n");
    }

    return 0;
}