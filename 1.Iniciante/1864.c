#include <stdio.h>

int main() {
    char frase[] = { 'L', 'I', 'F', 'E', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'A', ' ', 'P', 'R', 'O', 'B', 'L', 'E', 'M'
    , ' ', 'T', 'O', ' ', 'B', 'E', ' ', 'S', 'O', 'L', 'V', 'E', 'D', '\0' };
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        printf("%c", frase[i]);
    }
    printf("\n");
}