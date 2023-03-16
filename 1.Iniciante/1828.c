#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        char S[8], R[8];
        scanf("%s %s", S, R);
        if (S[2] == R[2])
            printf("Caso #%d: De novo!\n", i);
        else if (S[2] == 'd') {
            if (R[2] == 'p')
                printf("Caso #%d: Raj trapaceou!\n", i);
            else if (R[2] == 's')
                printf("Caso #%d: Bazinga!\n", i);
            else if (R[2] == 'g')
                printf("Caso #%d: Bazinga!\n", i);
            else if (R[2] == 'o')
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        else if (S[2] == 'p') {
            if (R[2] == 'd')
                printf("Caso #%d: Bazinga!\n", i);
            else if (R[2] == 's')
                printf("Caso #%d: Raj trapaceou!\n", i);
            else if (R[2] == 'g')
                printf("Caso #%d: Raj trapaceou!\n", i);
            else if (R[2] == 'o')
                printf("Caso #%d: Bazinga!\n", i);
        }
        else if (S[2] == 's') {
            if (R[2] == 'd')
                printf("Caso #%d: Raj trapaceou!\n", i);
            else if (R[2] == 'p')
                printf("Caso #%d: Bazinga!\n", i);
            else if (R[2] == 'g')
                printf("Caso #%d: Bazinga!\n", i);
            else if (R[2] == 'o')
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        else if (S[2] == 'g') {
            if (R[2] == 'd')
                printf("Caso #%d: Raj trapaceou!\n", i);
            else if (R[2] == 'p')
                printf("Caso #%d: Bazinga!\n", i);
            else if (R[2] == 's')
                printf("Caso #%d: Raj trapaceou!\n", i);
            else if (R[2] == 'o')
                printf("Caso #%d: Bazinga!\n", i);
        }
        else if (S[2] == 'o') {
            if (R[2] == 'd')
                printf("Caso #%d: Bazinga!\n", i);
            else if (R[2] == 'p')
                printf("Caso #%d: Raj trapaceou!\n", i);
            else if (R[2] == 's')
                printf("Caso #%d: Bazinga!\n", i);
            else if (R[2] == 'g')
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }
    return 0;
}