#include <stdio.h>

int main()
{
    int N;
    double R2 = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        R2 = 1 / (2 + R2);
    }
    printf("%.10lf\n", 1 + R2);
    return 0;
}