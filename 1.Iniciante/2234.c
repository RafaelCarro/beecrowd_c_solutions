#include <stdio.h>

int main() {
    double C, P, M;
    scanf("%lf %lf", &C, &P);
    M = C / P;
    printf("%.2lf\n", M);
    return 0;
}