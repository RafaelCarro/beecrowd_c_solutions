#include <stdio.h>

int main() {
    int N[10], V;
    scanf("%d", &V);

    for (int i = 0; i < 10; i++) {
        N[i] = V * pow(2, i);
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}