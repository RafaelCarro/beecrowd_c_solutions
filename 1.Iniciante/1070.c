int main() {
    int X;
    scanf("%d", &X);

    if (X % 2 == 0) {
        for (int i = X + 1; i < X + 12; i += 2) {
            printf("%d\n", i);
        }
    }
    else {
        for (int i = X; i < X + 12; i += 2) {
            printf("%d\n", i);
        }
    }
}