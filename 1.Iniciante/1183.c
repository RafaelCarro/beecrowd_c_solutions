#include <stdio.h>

int main() {
    float M[12][12], sum = 0, e = 0;
    char O;
    scanf("%c", &O);
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++)
            scanf("%f", &M[i][j]);
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (i < j) {
                sum += M[i][j];
                e++;
            }
        }
    }

    if (O == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", sum / e);

    return 0;
}