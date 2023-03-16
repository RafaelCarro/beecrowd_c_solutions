#include <stdio.h>

int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            int voto;
            scanf("%d", &voto);
            if (voto == 1)
                sum++;
        }
        if (sum >= (float)N * 2 / 3)
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");
    }
    return 0;
}