#include <stdio.h>

int main() {
    int par[15], impar[15], n, p = 0, i = 0;
    for (int j = 0; j < 15; j++) {
        if (p < 5 && i < 5) {
            scanf("%d", &n);
            if (n % 2 == 0) {
                par[p] = n;
                p++;
            }
            else {
                impar[i] = n;
                i++;
            }
        }
        else {
            if (p == 5) {
                for (int k = 0; k < 5; k++) {
                    printf("par[%d] = %d\n", k, par[k]);
                    par[k] = 0;
                }
                p = 0;
                j--;
            }
            else if (i == 5) {
                for (int k = 0; k < 5; k++) {
                    printf("impar[%d] = %d\n", k, impar[k]);
                    impar[k] = 0;
                }
                i = 0;
                j--;
            }
        }
    }
    for (int j = 0; j < i; j++)
        printf("impar[%d] = %d\n", j, impar[j]);
    for (int j = 0; j < p; j++)
        printf("par[%d] = %d\n", j, par[j]);
    return 0;
}