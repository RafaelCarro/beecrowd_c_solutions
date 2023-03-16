#include <stdio.h>

int main() {
    int i, j, t = 7;

    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j < 3; j++) {
            printf("I=%d J=%d\n", i, t - j);
        }
        t += 2;
        i++;
    }
    return 0;
}