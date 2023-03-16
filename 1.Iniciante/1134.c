#include <stdio.h>

int main() {
    int cod = 0, g = 0, d = 0, a = 0;
    while (cod != 4) {
        scanf("%d", &cod);
        if (cod == 1)
            a++;
        else if (cod == 2)
            g++;
        else if (cod == 3)
            d++;
        else if (cod == 4)
            break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);
}