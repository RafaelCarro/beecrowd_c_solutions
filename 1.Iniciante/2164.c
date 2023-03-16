#include <stdio.h>
#include <math.h>

int main() {
    int N;
    double fib;
    scanf("%d", &N);
    fib = (pow((1 + sqrt(5)) / 2, N) - pow((1 - sqrt(5)) / 2, N)) / sqrt(5);
    printf("%.1lf\n", fib);
    return 0;
}