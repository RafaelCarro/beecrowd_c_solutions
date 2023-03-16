#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < M; i++) {
        char action[10];
        scanf("%s", action);
        if (action[0] == 'f') {
            N++;
        }
        else if (action[0] == 'c') {
            N--;
        }
    }
    printf("%d\n", N);
    return 0;
}