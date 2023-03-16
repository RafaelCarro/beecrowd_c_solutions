#include <stdio.h>

int main() {
    int S, T, F, H;
    scanf("%d %d %d", &S, &T, &F);
    H = S + T + F;
    if (H >= 24) {
        H = H - 24;
    }
    else if (H < 0) {
        H = H + 24;
    }
    printf("%d\n", H);
    return 0;
}