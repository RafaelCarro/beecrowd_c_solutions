#include <stdio.h>

int main() {
    int M, D;
    while (scanf("%d", &M) != EOF) {
        scanf("%d", &D);
        int N = 0;
        if (M == 2)
            N += 31;
        else if (M == 3)
            N += 60;
        else if (M == 4)
            N += 91;
        else if (M == 5)
            N += 121;
        else if (M == 6)
            N += 152;
        else if (M == 7)
            N += 182;
        else if (M == 8)
            N += 213;
        else if (M == 9)
            N += 244;
        else if (M == 10)
            N += 274;
        else if (M == 11)
            N += 305;
        else if (M == 12)
            N += 335;
        N += D;
        if (N == 360)
            printf("E natal!\n");
        else if (N == 359)
            printf("E vespera de natal!\n");
        else if (N > 360)
            printf("Ja passou!\n");
        else
            printf("Faltam %d dias para o natal!\n", 360 - N);
    }
    return 0;
}