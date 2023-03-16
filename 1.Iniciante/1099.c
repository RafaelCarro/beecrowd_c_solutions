
int main() {
    int n, x, y, i, sum = 0;

    scanf("%d", &n);

    while (n--) {
        scanf("%d %d", &x, &y);

        if (x > y) {
            int op = x;
            x = y;
            y = op;
        }

        sum = 0;
        for (i = x + 1; i < y; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}