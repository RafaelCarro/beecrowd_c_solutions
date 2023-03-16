#include <stdio.h>

int main() {
    float V, D, H, A;
    while (scanf("%f", &V) != EOF) {
        scanf("%f", &D);
        A = 3.14 * D * D / 4;
        H = V / A;
        printf("ALTURA = %.2f\n", H);
        printf("AREA = %.2f\n", A);
    }
}