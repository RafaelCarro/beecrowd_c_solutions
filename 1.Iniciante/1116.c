#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        double X, Y;
        scanf("%lf %lf", &X, &Y);
        if (Y != 0)
            printf("%.1lf\n", X / Y);
        else
            printf("divisao impossivel\n");
    }
}