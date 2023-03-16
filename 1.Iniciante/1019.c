int main() {
    int N;
    scanf("%d", &N);

    int horas = N / 3600;
    N = N - horas * 3600;

    int minutos = N / 60;
    N = N - minutos * 60;

    printf("%d:%d:%d\n", horas, minutos, N);
    return 0;
}