#include <stdio.h>

int main() {

    int I, ver = 0, N = 0;
    double sum = 0;

    while (ver == 0) {
        scanf("%d", &I);
        if (I >= 0) {
            N++;
            sum += I;
        }
        else {
            ver++;
            break;
        }
    }
    printf("%.2lf\n", sum / N);

    return 0;
}