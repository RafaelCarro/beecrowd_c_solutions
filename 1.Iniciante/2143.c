#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    do {
        for (int i = 0; i < T; i++) {
            int N;
            scanf("%d", &N);
            if (N % 2 == 0) {
                printf("%d\n", N * 2 - 2);
            }
            else {
                printf("%d\n", N * 2 - 1);
            }
        }
        scanf("%d", &T);
    } while (T != 0);
    return 0;
}