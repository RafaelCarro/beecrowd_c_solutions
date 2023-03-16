#include <stdio.h>

int main() {
    double N, i = 0, M = 0;
    while (i != 2) {
        scanf("%lf", &N);
        if (N < 0 || N > 10)
            printf("nota invalida\n");
        else {
            i++;
            M += N;
        }
    }
    printf("media = %.2lf\n", M / 2);
    return 0;
}