#include <stdio.h>
#include <math.h>

int main() {
    int N;
loop:
    scanf("%d", &N);
    while (N != 0) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (N <= 2) {
                    if (j == 0)
                        printf("%1.0lf", pow(2, i + j));
                    else
                        printf("%2.0lf", pow(2, i + j));
                }
                else if (N > 2 && N <= 4) {
                    if (j == 0)
                        printf("%2.0lf", pow(2, i + j));
                    else
                        printf("%3.0lf", pow(2, i + j));
                }
                else if (N > 4 && N < 6) {
                    if (j == 0)
                        printf("%3.0lf", pow(2, i + j));
                    else
                        printf("%4.0lf", pow(2, i + j));
                }
                else if (N >= 6 && N < 8) {
                    if (j == 0)
                        printf("%4.0lf", pow(2, i + j));
                    else
                        printf("%5.0lf", pow(2, i + j));
                }
                else if (N >= 8 && N < 10) {
                    if (j == 0)
                        printf("%5.0lf", pow(2, i + j));
                    else
                        printf("%6.0lf", pow(2, i + j));
                }
                else if (N >= 10 && N < 11) {
                    if (j == 0)
                        printf("%6.0lf", pow(2, i + j));
                    else
                        printf("%7.0lf", pow(2, i + j));
                }
                else if (N >= 11 && N < 13) {
                    if (j == 0)
                        printf("%7.0lf", pow(2, i + j));
                    else
                        printf("%8.0lf", pow(2, i + j));
                }
                else if (N >= 13 && N <= 14) {
                    if (j == 0)
                        printf("%8.0lf", pow(2, i + j));
                    else
                        printf("%9.0lf", pow(2, i + j));
                }
                else {
                    if (j == 0)
                        printf("%9.0lf", pow(2, i + j));
                    else
                        printf("%10.0lf", pow(2, i + j));
                }
            }
            printf("\n");
        }
        printf("\n");
        goto loop;
    }
    return 0;
}