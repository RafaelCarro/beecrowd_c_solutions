#include <stdio.h>

int main() {
    int A[5], p = 0;
    scanf("%d %d %d %d %d %d", &A[0], &A[1], &A[2], &A[3], &A[4]);
    for (int i = 0; i < 5; i++) {
        if (A[i] % 2 == 0) {
            p++;
        }
    }
    printf("%d valores pares\n", p);
}