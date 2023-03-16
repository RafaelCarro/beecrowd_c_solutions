#include <stdio.h>
#include <stdlib.h>

int main() {
    int X, ver = 0, sum = 0;

    while (ver == 0) {
        sum = 0;
        scanf("%d", &X);
        if (abs(X) % 2 == 0 && X != 0) {
            for (int i = X; i < X + 10; i += 2)
                sum += i;
        }
        else if (abs(X) % 2 == 1) {
            for (int i = X + 1; i < X + 11; i += 2)
                sum += i;
        }
        else {
            ver = 1;
            break;
        }
        printf("%d\n", sum);
    }

    return 0;
}