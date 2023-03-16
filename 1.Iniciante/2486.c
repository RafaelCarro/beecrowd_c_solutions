#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    while (N != 0) {
        int sugar = 0, quantity;
        char food[20];
        for (int i = 0; i < N; i++) {
            scanf("%d", &quantity);
            fgets(food, 20, stdin);
            if (strcmp(food, " suco de laranja\n") == 0)
                sugar += 120 * quantity;
            else if (strcmp(food, " morango fresco\n") == 0)
                sugar += 85 * quantity;
            else if (strcmp(food, " mamao\n") == 0)
                sugar += 85 * quantity;
            else if (strcmp(food, " goiaba vermelha\n") == 0)
                sugar += 70 * quantity;
            else if (strcmp(food, " manga\n") == 0)
                sugar += 56 * quantity;
            else if (strcmp(food, " laranja\n") == 0)
                sugar += 50 * quantity;
            else if (strcmp(food, " brocolis\n") == 0)
                sugar += 34 * quantity;
        }

        if (sugar > 130) {
            printf("Menos %d mg\n", sugar - 130);
        }
        else if (sugar < 110) {
            printf("Mais %d mg\n", 110 - sugar);
        }
        else
            printf("%d mg\n", sugar);

        scanf("%d", &N);
    }
}