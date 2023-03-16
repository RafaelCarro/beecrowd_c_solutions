int main() {
    int N;
    scanf("%d", &N);
    int X[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
        if (abs(X[i]) % 2 == 0 && X[i] != 0)
            printf("EVEN ");
        else if (abs(X[i]) % 2 == 1)
            printf("ODD ");
        else
            printf("NULL\n");

        if (X[i] > 0)
            printf("POSITIVE\n");
        else if (X[i] < 0)
            printf("NEGATIVE\n");
    }
}