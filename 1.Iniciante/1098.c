#include <stdio.h>

int main() {
    float i, j;

    for (i = 0; i <= 2.1; i += 0.2) {
        for (j = 1; j <= 3; j++) {
            if (i == 0 || i == 1 || i >= 2)
                printf("I=%.0lf J=%.0lf\n", i, j + i);
            else
                printf("I=%.1lf J=%.1lf\n", i, j + i);
        }
    }
    return 0;
}