#include <stdio.h>

int main() {
    int T, E, A;
    scanf("%d", &T);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &E);
        if (E == T)
            A++;
    }
    printf("%d\n", A);
    return 0;
}