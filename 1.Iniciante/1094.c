int main() {
    double N, R = 0, C = 0, S = 0, T = 0, num;
    char car;
    scanf("%lf", &N);

    for (int i = 0; i < N; i++) {
        scanf("%lf %c", &num, &car);
        if (car == 'C')
            C += num;
        else if (car == 'R')
            R += num;
        else
            S += num;
    }
    T = C + R + S;

    double PC = 100 * C / T, PR = 100 * R / T, PS = 100 * S / T;

    printf("Total: %.0lf cobaias\n", T);
    printf("Total de coelhos: %.0lf\n", C);
    printf("Total de ratos: %.0lf\n", R);
    printf("Total de sapos: %.0lf\n", S);
    printf("Percentual de coelhos: %.2lf %\n", PC);
    printf("Percentual de ratos: %.2lf %\n", PR);
    printf("Percentual de sapos: %.2lf %\n", PS);
}