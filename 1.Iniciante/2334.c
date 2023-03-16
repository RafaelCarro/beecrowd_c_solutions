#include <stdio.h>

int main() {
    long long unsigned N;
    scanf("%llu", &N);
    while (N != -1) {
        if (N == 0) {
            printf("0\n");
        }
        else {
            printf("%llu\n", N - 1);
        }
        scanf("%llu", &N);
    }
    return 0;
}