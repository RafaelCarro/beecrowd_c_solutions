#include <stdio.h>

int main() {
    int L;
    float M[12][12], sum = 0;
    char T;
    scanf("%d %c", &L, &T);
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++)
            scanf("%f", &M[i][j]);
    }

    for (int i = 0; i < 12; i++) {
        sum += M[L][i];
    }

    if (T == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1lf\n", sum / 12);

    return 0;
}