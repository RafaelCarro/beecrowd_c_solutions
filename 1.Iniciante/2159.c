#include <stdio.h>
#include <math.h>

int main() {
    int N;
    double max, min;
    scanf("%d", &N);
    min = N / log(N);
    max = 1.25506 * N / log(N);
    printf("%.1lf %.1lf\n", min, max);
    return 0;
}