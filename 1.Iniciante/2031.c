#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        char E1[10], E2[10];
        scanf("%s %s", E1, E2);
        if (E1[2] == 'd') {
            if (E2[2] == 'd')
                printf("Sem ganhador\n");
            if (E2[2] == 'a')
                printf("Jogador 2 venceu\n");
            if (E2[2] == 'p')
                printf("Jogador 1 venceu\n");
        }
        if (E1[2] == 'p') {
            if (E2[2] == 'd')
                printf("Jogador 2 venceu\n");
            if (E2[2] == 'a')
                printf("Jogador 2 venceu\n");
            if (E2[2] == 'p')
                printf("Ambos venceram\n");
        }
        if (E1[2] == 'a') {
            if (E2[2] == 'd')
                printf("Jogador 1 venceu\n");
            if (E2[2] == 'a')
                printf("Aniquilacao mutua\n");
            if (E2[2] == 'p')
                printf("Jogador 1 venceu\n");
        }
    }
    return 0;
}