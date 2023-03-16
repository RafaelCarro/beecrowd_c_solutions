int main() {
    int M, N, i;
    while (scanf("%d", &M) > 0 && scanf("%d", &N) > 0) {
        if (M <= 0 || N <= 0)
            break;

        int sum = 0;
        if (M > N) {
            int op = M;
            M = N;
            N = op;
        }
        for (int i = M; i <= N; i++) {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
    }
}