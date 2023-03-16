#include <stdio.h>
#include <math.h>

int main() {
    int A, B, Q, R;
    scanf("%d %d", &A, &B);
    if (A > 0) {
        Q = A / B;
        R = A % B;
        printf("%d %d\n", Q, abs(R));
    }
    else if (A < 0) {
        if (B > 0) {
            if (A % B == 0)
                printf("%d %d\n", A / B, 0);
            else {
                Q = A / B - 1;
                R = B + (A % B);
                printf("%d %d\n", Q, abs(R));
            }
        }
        else if (B < 0) {
            if (A % B == 0)
                printf("%d %d\n", A / B, 0);
            else {
                Q = A / B + 1;
                R = B - (A % B);
                printf("%d %d\n", Q, abs(R));
            }
        }
    }
    else
        printf("%d %d\n", 0, 0);
    return 0;
}