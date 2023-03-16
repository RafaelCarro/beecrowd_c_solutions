#include <stdio.h>
#include <math.h>

int main() {
    double sum = 0, u = 0;

    for (int i = 1; i <= 39; i++) {
        if (i % 2 == 1) {
            sum += (i) / (pow(2, u));
            u++;
        }
    }
    printf("%.2lf\n", sum);
    return 0;
}