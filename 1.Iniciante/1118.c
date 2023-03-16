int main() {
    double N, i = 0, R, sum;
reset:
    sum = 0;
    i = 0;
    while (i < 2) {
        scanf("%lf", &N);
        if (N < 0 || N > 10) {
            printf("nota invalida\n");
        }
        else {
            sum += N;
            i++;
        }
    }
    printf("media = %.2lf\n", sum / 2);
ver:
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%lf", &R);
    if (R == 1) {
        goto reset;
    }
    else if (R == 2) {
        goto end;
    }
    else {
        goto ver;
    }
end:
    return 0;
}