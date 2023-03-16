int main() {
    int X, Y, sum = 0;
    scanf("%d %d", &X, &Y);
    if (X > Y) {
        int op = X;
        X = Y;
        Y = op;
    }

    for (int i = X; i <= Y; i++) {
        if (i % 13 != 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
}