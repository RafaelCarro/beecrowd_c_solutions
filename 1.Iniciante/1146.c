#include <stdio.h>

int main() {
    int X, ver = 0;
    while (ver == 0) {
        scanf("%d", &X);
        if (X == 0) {
            ver++;
            break;
        }
        for (int i = 1; i <= X; i++) {
            if (i == X)
                printf("%d\n", i);
            else
                printf("%d ", i);
        }
    }
    return 0;
}