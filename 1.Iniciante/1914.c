#include <stdio.h>

int main() {
    int T, N1, N2;
    char J1[10], J2[10], E1[10], E2[10];
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%s %s %s %s", J1, E1, J2, E2);
        scanf("%d %d", &N1, &N2);
        if ((N1 + N2) % 2 == 0) {
            if (E1[0] == 'P')
                printf("%s\n", J1);
            else
                printf("%s\n", J2);
        }
        else {
            if (E1[0] == 'I')
                printf("%s\n", J1);
            else
                printf("%s\n", J2);
        }
    }
    return 0;
}