#include <stdio.h>

int main() {

    int pass, i = 1;
    while (i == 1) {
        scanf("%d", &pass);
        if (pass == 2002)
            break;
        else
            printf("Senha Invalida\n");
    }
    printf("Acesso Permitido\n");
    return 0;
}