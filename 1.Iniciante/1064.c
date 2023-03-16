#include <stdio.h>

int main() {
    double A[6], p = 0, m = 0;
    scanf("%lf %lf %lf %lf %lf %lf", &A[0], &A[1], &A[2], &A[3], &A[4], &A[5]);
    for (int i = 0; i < 6; i++) {
        if (A[i] > 0) {
            p++;
            m += A[i];
        }
    }
    m = m / p;
    printf("%.0lf valores positivos\n", p);
    printf("%.1lf\n", m);
}