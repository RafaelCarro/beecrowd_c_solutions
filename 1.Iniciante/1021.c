int main() {
    double N;
    int rest;
    scanf("%lf", &N);

    rest = N * 100;

    int cem = rest / 10000;
    rest = rest - cem * 10000;

    int cinq = rest / 5000;
    rest = rest - cinq * 5000;

    int vint = rest / 2000;
    rest = rest - vint * 2000;

    int dez = rest / 1000;
    rest = rest - dez * 1000;

    int cinco = rest / 500;
    rest = rest - cinco * 500;

    int dois = rest / 200;
    rest = rest - dois * 200;

    int um = rest / 100;
    rest = rest - um * 100;

    int cinqc = rest / 50;
    rest = rest - cinqc * 50;

    int vintcincc = rest / 25;
    rest = rest - vintcincc * 25;

    int dezc = rest / 10;
    rest = rest - dezc * 10;

    int cincc = rest / 5;
    rest = rest - cincc * 5;

    int umc = rest / 1;
    rest = rest - umc * 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinq);
    printf("%d nota(s) de R$ 20.00\n", vint);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", cinqc);
    printf("%d moeda(s) de R$ 0.25\n", vintcincc);
    printf("%d moeda(s) de R$ 0.10\n", dezc);
    printf("%d moeda(s) de R$ 0.05\n", cincc);
    printf("%d moeda(s) de R$ 0.01\n", umc);
    return 0;
}