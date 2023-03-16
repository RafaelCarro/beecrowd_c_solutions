#include <stdio.h>

int main() {
    int A, B, C, D, p = 0;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    if (A < B + C && B < A + C && C < A + B)
        p++;
    else if (A < B + D && B < A + D && D < A + B)
        p++;
    else if (A < C + D && C < A + D && D < A + C)
        p++;
    else if (C < B + D && B < C + D && D < C + B)
        p++;
    if (p > 0)
        printf("S\n");
    else
        printf("N\n");
    return 0;
}