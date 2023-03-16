#include <stdio.h>

int main() {
    int C1, C2, C3;
    scanf("%d %d %d", &C1, &C2, &C3);
    if (C1 + C2 - C3 == 0 || C1 - C2 + C3 == 0 || -C1 + C2 + C3 == 0 || C1 - C2 - C3 == 0 || -C1 + C2 - C3 == 0 || -C1 - C2 + C3 == 0 || C1 - C2 == 0 || C1 - C3 == 0 || C2 - C3 == 0)
        printf("S\n");
    else
        printf("N\n");
    return 0;
}