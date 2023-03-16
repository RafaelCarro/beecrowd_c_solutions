#include <stdio.h>

int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        int V[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &V[i]);
        }
        for (int i = 0; i < N - 1; i++) {
            if (V[0] < V[i + 1]) {
                V[0] = V[i + 1];
            }
        }
        if (V[0] >= 20)
            printf("3\n");
        else if (V[0] >= 10)
            printf("2\n");
        else
            printf("1\n");
    }
}