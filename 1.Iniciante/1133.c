int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    if (X > Y) {
        int op = X;
        X = Y;
        Y = op;
    }
    for (int i = X + 1; i < Y; i++) {
        if (i % 5 == 2 || i % 5 == 3)
            printf("%d\n", i);
    }
}