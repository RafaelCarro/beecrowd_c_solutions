int main() {
    int N, rest;
    scanf("%d", &N);

    rest = N;

    int cem = rest / 100;
    rest = rest - cem * 100;

    int cinq = rest / 50;
    rest = rest - cinq * 50;

    int vint = rest / 20;
    rest = rest - vint * 20;

    int dez = rest / 10;
    rest = rest - dez * 10;

    int cinco = rest / 5;
    rest = rest - cinco * 5;

    int dois = rest / 2;
    rest = rest - dois * 2;

    int um = rest;

    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinq);
    printf("%d nota(s) de R$ 20,00\n", vint);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);
    return 0;
}