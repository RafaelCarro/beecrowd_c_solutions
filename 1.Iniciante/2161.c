#include <stdio.h>

int main()
{
    int N;
    double R10 = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        R10 = 1 / (6 + R10);
    }
    printf("%.10lf\n", 3 + R10);
    return 0;
}