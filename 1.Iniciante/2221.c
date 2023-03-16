#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int B, A1, D1, L1, A2, D2, L2;
        double G1, G2;
        scanf("%d %d %d %d %d %d %d", &B, &A1, &D1, &L1, &A2, &D2, &L2);
        if (L1 % 2 == 0)
            G1 = (A1 + D1) / 2 + B;
        else
            G1 = (A1 + D1) / 2;

        if (L2 % 2 == 0)
            G2 = (A2 + D2) / 2 + B;
        else
            G2 = (A2 + D2) / 2;

        if (G1 > G2)
            printf("Dabriel\n");
        else if (G2 > G1)
            printf("Guarte\n");
        else
            printf("Empate\n");
    }
    return 0;
}