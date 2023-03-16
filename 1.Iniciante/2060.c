#include <stdio.h>

int main() {
    int T, N, M2 = 0, M3 = 0, M4 = 0, M5 = 0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        if (N % 2 == 0)
            M2++;
        if (N % 3 == 0)
            M3++;
        if (N % 4 == 0)
            M4++;
        if (N % 5 == 0)
            M5++;
    }
    printf("%d Multiplo(s) de 2\n", M2);
    printf("%d Multiplo(s) de 3\n", M3);
    printf("%d Multiplo(s) de 4\n", M4);
    printf("%d Multiplo(s) de 5\n", M5);
    return 0;
}