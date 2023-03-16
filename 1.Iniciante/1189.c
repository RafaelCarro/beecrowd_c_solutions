#include <stdio.h>

int main() {
    double M[12][12], sum = 0, e = 0;
    char O;
    scanf("%c", &O);
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if ((i + j) < 11 && i > j) {
                sum += M[i][j];
                e++;
            }
        }
    }

    if (O == 'S')
        printf("%.1lf\n", sum);
    else
        printf("%.1lf\n", sum / e);

    return 0;
}