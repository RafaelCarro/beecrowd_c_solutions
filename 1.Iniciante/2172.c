#include <stdio.h>

int main() {
    int N;
    long int XP;
    scanf("%d %ld", &N, &XP);
    while (N != 0 && XP != 0) {
        printf("%ld\n", N * XP);
        scanf("%d %ld", &N, &XP);
    }
    return 0;
}