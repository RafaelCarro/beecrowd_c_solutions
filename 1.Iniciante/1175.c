#include <stdio.h>

int main() {
    int N[20];

    for (int i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }
    int j = 19;
    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, N[j]);
        j--;
    }

    return 0;
}