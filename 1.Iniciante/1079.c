#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    double X[3];
    for (int i = 0; i < N; i++) {
        double sum = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &X[j]);
            if (j == 0)
                sum += 2 * X[j] / 10;
            else if (j == 1)
                sum += 3 * X[j] / 10;
            else
                sum += 5 * X[j] / 10;
        }
        printf("%.1lf\n", sum);
    }
    return 0;
}