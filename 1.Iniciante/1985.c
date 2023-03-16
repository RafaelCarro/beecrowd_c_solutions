#include <stdio.h>

int main() {
    int T;
    double renda = 0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int N, C;
        scanf("%d %d", &C, &N);
        if (C == 1001)
            renda += N * 1.50;
        else if (C == 1002)
            renda += N * 2.50;
        else if (C == 1003)
            renda += N * 3.50;
        else if (C == 1004)
            renda += N * 4.50;
        else if (C == 1005)
            renda += N * 5.50;
    }
    printf("%.2f\n", renda);
    return 0;
}