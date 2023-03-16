#include <stdio.h>

int main() {

    int X, Y, i = 0;

    while (i == 0) {
        scanf("%d", &X);
        scanf("%d", &Y);

        if (X > 0 && Y > 0)
            printf("primeiro\n");
        else if (X > 0 && Y < 0)
            printf("quarto\n");
        else if (X < 0 && Y > 0)
            printf("segundo\n");
        else if (X < 0 && Y < 0)
            printf("terceiro\n");
        else {
            break;
            i = 1;
        }
    }
}