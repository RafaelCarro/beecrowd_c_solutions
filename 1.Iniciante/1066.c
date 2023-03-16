#include <stdio.h>

int main() {
    int A[5], par = 0, imp = 0, pos = 0, neg = 0;
    scanf("%d %d %d %d %d %d", &A[0], &A[1], &A[2], &A[3], &A[4]);
    for (int i = 0; i < 5; i++) {
        if (A[i] % 2 == 0) {
            par++;
        }
        else
            imp++;

        if (A[i] > 0)
            pos++;
        else if (A[i] < 0)
            neg++;
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", imp);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
}