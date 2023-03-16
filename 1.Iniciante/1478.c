#include <stdio.h>

int main() {
    int N;
loop:
    scanf("%d", &N);
    while (N != 0) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i < j) {
                    if (j == 0) {
                        if (j - 1 + 1 >= 10)
                            printf(" %d", j - i + 1);
                        else if (j - i + 1 == 100)
                            printf("%d", j - i + 1);
                        else
                            printf("  %d", j - 1 + 1);
                    }
                    else {
                        if (j - i + 1 >= 10 && j - i + 1 < 100)
                            printf("  %d", j - i + 1);
                        else if (j - i + 1 == 100)
                            printf(" %d", j - i + 1);
                        else
                            printf("   %d", j - i + 1);
                    }
                }

                else if (i > j) {
                    if (j == 0) {
                        if (i - j + 1 >= 10 && i - j + 1 < 100)
                            printf(" %d", i - j + 1);
                        else if (i - j + 1 == 100)
                            printf("%d", i - j + 1);
                        else
                            printf("  %d", i - j + 1);
                    }
                    else {
                        if (i - j + 1 >= 10)
                            printf("  %d", i - j + 1);
                        else if (i - j + 1 == 100)
                            printf(" %d", i - j + 1);
                        else
                            printf("   %d", i - j + 1);
                    }
                }

                else {
                    if (j == 0)
                        printf("  1");
                    else
                        printf("   1");
                }
            }
            printf("\n");
        }
        printf("\n");
        goto loop;
    }
    return 0;
}