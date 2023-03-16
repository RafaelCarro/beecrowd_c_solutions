#include <stdio.h>

int main() {
    int X, c = 1;
    while (scanf("%d", &X) != EOF) {
        int N = 1 + (1 + X) * X / 2;
        if (X == 0) {
            printf("Caso %d: %d numero\n", c, N);
            printf("0");
        }
        else {
            printf("Caso %d: %d numeros\n", c, N);
            printf("0 ");
            for (int i = 1; i <= X; i++) {
                for (int j = 1; j <= i; j++) {
                    if (i == X && i == j)
                        printf("%d", i);
                    else
                        printf("%d ", i);
                }
            }
        }
        printf("\n\n");
        c++;
    }
    return 0;
}