#include <stdio.h>
#include <stdlib.h>

int main() {
    char Z[10];
    long double N;
    int P10 = 0, S = 0;
    scanf("%Lf", &N);
    if (N < 0) {
        S++;
        N = -N;
    }
    while (N >= 10) {
        N = N / 10;
        P10++;
    }
    while (N < 1 && N != 0) {
        N = N * 10;
        P10--;
    }
    if (S == 0 && N != 0) {
        if (P10 >= 0)
            printf("+%.4LfE+%02d\n", N, P10);
        else
            printf("+%.4LfE%03d\n", N, P10);
    }
    else if (S == 1 && N != 0) {
        if (P10 >= 0)
            printf("-%.4LfE+%02d\n", N, P10);
        else
            printf("-%.4LfE%03d\n", N, P10);
    }
    else {
        sprintf(Z, "%Lf", N);
        if (Z[0] == '-')
            printf("%.4LfE+%02d\n", N, P10);
        else
            printf("+%.4LfE+%02d\n", N, P10);
    }
}