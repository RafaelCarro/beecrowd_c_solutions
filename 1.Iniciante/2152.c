#include <stdio.h>

int main() {
    int T, H, M, E;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &H, &M, &E);
        if (E == 1) {
            printf("%02d:%02d - A porta abriu!\n", H, M);
        }
        else
            printf("%02d:%02d - A porta fechou!\n", H, M);
    }
    return 0;
}