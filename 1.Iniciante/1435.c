#include <stdio.h>

int main() {
    int N;
loop:
    scanf("%d", &N);
    while (N != 0) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int x = 1;
                while (i + x < N || j + x < N || i - x >= 0 || j - x >= 0) {
                    x++;
                }
                if (N - x + 1 >= 10) {
                    if (j == 0)
                        printf(" %d", N - x + 1);
                    else
                        printf("  %d", N - x + 1);
                }
                else {
                    if (j == 0)
                        printf("  %d", N - x + 1);
                    else
                        printf("   %d", N - x + 1);
                }
            }
            printf("\n");
        }
        printf("\n");
        goto loop;
    }
    return 0;
}