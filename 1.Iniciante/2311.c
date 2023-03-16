#include <stdio.h>


int main() {
    int N;
    float chang;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        char name[10];
        float notas[7], nota_part, sum;
        scanf("%s %f", name, &nota_part);
        for (int i = 0; i < 7; i++)
            scanf("%f", &notas[i]);
        for (int i = 0; i < 7; i++) {
            if (notas[i] < notas[0]) {
                chang = notas[i];
                notas[i] = notas[0];
                notas[0] = chang;
            }
            else if (notas[i] > notas[6]) {
                chang = notas[i];
                notas[i] = notas[6];
                notas[6] = chang;
            }
        }
        sum = notas[1] + notas[2] + notas[3] + notas[4] + notas[5];
        printf("%s %.2f\n", name, sum * nota_part);
    }
    return 0;
}