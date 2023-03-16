#include <stdio.h>

int main() {
    int M, N, i = 1;
    while (i = 1) {
        scanf("%d", &M);
        scanf("%d", &N);
        if (M > N)
            printf("Decrescente\n");
        else if (N > M)
            printf("Crescente\n");
        else {
            i = 0;
            break;
        }
    }
    return 0;
}