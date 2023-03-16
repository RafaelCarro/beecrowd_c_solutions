int main() {
    int N, in = 0, out = 0;
    scanf("%d", &N);
    int X[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
        if (X[i] >= 10 && X[i] <= 20)
            in++;
        else
            out++;
    }
    printf("%d in\n%d out\n", in, out);
}