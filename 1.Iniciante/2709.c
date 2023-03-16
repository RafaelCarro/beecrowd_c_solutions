#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int primo(int);

int main() {
    int V[20];
    int M, N, sum;

    while (scanf("%d", &M) != EOF) {
        for (int i = 0; i < M; i++) {
            scanf("%d", &V[i]);
        }

        scanf("%d", &N);

        sum = 0;
        int j = 0;
        while (j < M) {
            sum += V[M - 1 - j];
            j += N;
        }
        if (primo(sum) == 1) {
            printf("Bad boy! I’ll hit you.\n");
        }
        else {
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        }
    }
    return 0;
}

int primo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return 1;
        }
    }
    return 0;
}