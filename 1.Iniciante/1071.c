#include <stdio.h>

int main() {
    int X, Y, op, sum = 0;
    scanf("%d %d", &X, &Y);

    if (Y < X) {
        op = Y;
        Y = X;
        X = op;
    }

    for (int i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
}