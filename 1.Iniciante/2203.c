#include <stdio.h>

int main() {
    int Xf;
    while (scanf("%d", &Xf) != EOF) {
        int Yf, Xi, Yi, Vi, R1, R2;
        double d;
        scanf("%d %d %d %d %d %d", &Yf, &Xi, &Yi, &Vi, &R1, &R2);
        d = sqrt((Xf - Xi) * (Xf - Xi) + (Yf - Yi) * (Yf - Yi));
        if (d + Vi * 1.5 > R1 + R2)
            printf("N\n");
        else
            printf("Y\n");
    }
    return 0;
}