#include <stdio.h>

int main() {
    int N, M, T;
    scanf("%d %d", &N, &M);
    while (N != 0 && M != 0) {
        T = M - N;
        if (T >= 4 && T <= 200) {
            if (T == 4 || T == 7 || T == 10 || T == 12 || T == 15 || T == 20 || T == 22 || T == 25 || T == 30 || T == 52 || T == 55 || T == 60 || T == 70 || T == 40 || T == 100 || T == 102 || T == 105 || T == 110 || T == 120 || T == 150 || T == 200) {
                printf("possible\n");
            }
            else
                printf("impossible\n");
        }
        else
            printf("impossible\n");
        scanf("%d %d", &N, &M);
    }
}