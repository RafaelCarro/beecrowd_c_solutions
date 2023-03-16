#include <stdio.h>

int main() {

    int X, Z, ver = 0, sum = 0, n = 0;
    scanf("%d", &X);
    while (ver == 0) {
        scanf("%d", &Z);
        if (Z > X) {
            ver++;
            break;
        }
    }
    while (sum < Z) {
        sum += X;
        n++;
        X++;
    }
    printf("%d\n", n);
    return 0;
}