int main() {
    int X[100], p = 0;
    for (int i = 0; i < 100; i++) {
        scanf("%d", &X[i]);
        if (i > 0 && X[i] > X[0]) {
            p = i;
            X[0] = X[i];
        }
    }
    printf("%d\n%d\n", X[0], p + 1);
}