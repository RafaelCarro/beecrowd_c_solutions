#include <stdio.h>

int main() {
    double sum = 0;

    for (float i = 1; i < 101; i++) {
        sum += 1 / i;
    }
    printf("%.2lf\n", sum);
    return 0;
}