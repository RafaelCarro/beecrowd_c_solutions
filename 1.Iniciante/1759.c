#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        if (i != N - 1)
            printf("Ho ");
        else
            printf("Ho!\n");
    }
    return 0;
}