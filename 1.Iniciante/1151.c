#include <stdio.h>
int main() {
    int N, fib1 = 0, fib2 = 1;
    scanf("%d", &N);

    printf("0 ");
    printf("1 ");

    for (int i = 1; i < N - 1; i++) {
        if (i == N - 2)
            printf("%d\n", fib1 + fib2);
        else
            printf("%d ", fib1 + fib2);

        fib1 = fib1 + fib2;
        int op = fib1;
        fib1 = fib2;
        fib2 = op;
    }
}