#include <stdio.h>

int main() {
    int p, J1, J2, R, A;
    scanf("%d %d %d %d %d", &p, &J1, &J2, &R, &A);
    if (R == 0 && A == 0) {
        if (p == 0) {
            if ((J1 + J2) % 2 == 0)
                printf("Jogador 2 ganha!\n");
            else
                printf("Jogador 1 ganha!\n");
        }
        else {
            if ((J1 + J2) % 2 == 0)
                printf("Jogador 1 ganha!\n");
            else
                printf("Jogador 2 ganha!\n");
        }
    }
    else if (R == 0 && A == 1)
        printf("Jogador 1 ganha!\n");
    else if (R == 1 && A == 0)
        printf("Jogador 1 ganha!\n");
    else if (R == 1 && A == 1)
        printf("Jogador 2 ganha!\n");
    return 0;
}